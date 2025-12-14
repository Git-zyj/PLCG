/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121053
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_12 |= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_3)))) ? (((((/* implicit */_Bool) 5588359807044257393ULL)) ? (var_3) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 14610649453874268589ULL))))))))));
        var_13 = ((/* implicit */_Bool) var_1);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) == (3182706027084329718LL))) ? (((((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_0])) - (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (min((3836094619835283026ULL), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (short)32767))))))) : (max((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_1]))), (((unsigned long long int) var_0))))));
            var_15 = ((/* implicit */_Bool) ((short) var_11));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_0] [i_0]))))) : ((~(14610649453874268587ULL))))))));
                        arr_12 [i_4] [i_0] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */long long int) var_3)) : (4357025317289069232LL))), (((((/* implicit */_Bool) 2830821736861709430ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27152))))))))));
                    }
                } 
            } 
            arr_13 [i_2] [i_0] = ((/* implicit */unsigned long long int) var_11);
            var_17 -= ((/* implicit */short) arr_6 [i_0]);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned char)124))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])), (arr_2 [i_0 - 2])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) 3182706027084329718LL)) ? (((/* implicit */int) (short)23250)) : (((/* implicit */int) arr_6 [(signed char)10])))), ((+(var_0)))))) : (((((/* implicit */long long int) max((((/* implicit */int) var_11)), (var_0)))) / (max((((/* implicit */long long int) 0U)), (var_10)))))));
            arr_17 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0 - 3]))), (((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [9LL] [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23251)))))));
            var_19 |= ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)126)))))))), (min((((/* implicit */short) min((var_11), (arr_14 [i_0] [i_0])))), (((short) (_Bool)0))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_7), (17U)))) ? (((/* implicit */int) min((arr_3 [i_0 - 1] [i_0] [i_5]), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0 - 3]) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_5]))))));
        }
        for (short i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_22 [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (short)32758)))));
            arr_23 [i_0] [i_6] [i_6 - 1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 + 1] [(_Bool)1] [i_7 + 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))) % ((-(arr_2 [i_0])))))));
            arr_27 [i_0] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 2])) >> (((((/* implicit */int) arr_6 [i_0 + 2])) - (209)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
        }
        for (short i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((arr_7 [i_8 - 1] [i_0 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))));
            var_23 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_8 + 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) & (((/* implicit */long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 3] [i_8 - 1]))))))));
            arr_30 [i_0] [i_8 - 2] [0LL] = ((/* implicit */unsigned int) ((int) ((_Bool) var_5)));
            arr_31 [i_0] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))), (max((3994157218U), (((/* implicit */unsigned int) var_9))))));
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_5))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        arr_36 [i_9] = ((/* implicit */unsigned char) var_6);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9] [i_9]))) >= (var_1))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)0))))))) : (((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) var_6)) - (7204)))))) ? (((2343454888U) << (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9] [i_9] [(signed char)6]))) : (var_7)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            {
                var_26 = ((/* implicit */_Bool) min(((+(arr_37 [8U] [8U]))), (((/* implicit */unsigned long long int) ((arr_37 [i_10 + 1] [i_10 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10 + 1] [i_10 + 1]))))))));
                /* LoopNest 3 */
                for (long long int i_12 = 1; i_12 < 17; i_12 += 4) 
                {
                    for (short i_13 = 4; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            {
                                arr_50 [11U] [11U] [(short)11] [(short)11] [i_11] [14LL] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(var_3)))), (max((((/* implicit */long long int) (unsigned short)32752)), (3182706027084329718LL)))));
                                arr_51 [i_14] [i_13] [i_12 + 2] [(unsigned short)17] [i_11] [i_10] = ((/* implicit */short) max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_10 + 1] [8ULL] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (var_7)))), (max((((/* implicit */long long int) arr_38 [i_10] [i_10])), (var_1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) min((var_27), (max((((/* implicit */long long int) var_3)), (var_1)))));
}
