/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120891
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
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_0 [i_0] [8]))))))), (arr_2 [i_0])));
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [4U])), ((+(arr_0 [0ULL] [i_0])))))) ? (max((((/* implicit */long long int) (unsigned char)1)), (3451404284052536161LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (arr_7 [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 1])))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 2])) ? (arr_7 [i_1 + 1] [i_2 + 2]) : (arr_7 [i_1 - 1] [i_2 - 3]))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                arr_14 [i_1] [i_1] [i_3] = ((long long int) arr_11 [i_1 - 1] [i_2 - 4] [i_3 - 1]);
                var_15 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_3 + 1]))));
            }
            for (short i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) ((unsigned int) arr_15 [i_1 - 1] [i_2] [i_4 + 1] [i_4]));
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_2 - 1] [i_4 + 3])) >> (((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_2 + 3] [i_4 - 2])) - (182)))));
            }
            for (short i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
            {
                arr_21 [i_1] [i_2] [i_2] [i_5 - 2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) (_Bool)1))));
                arr_22 [i_1 - 1] [i_1 - 1] [(short)13] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_9))))) >> (((((/* implicit */int) arr_19 [i_1 + 1] [i_2] [i_5])) - (18390)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_7])) < (((/* implicit */int) arr_26 [i_7]))));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_8])) + (((/* implicit */int) arr_12 [i_1] [i_7] [i_8])))) | (((/* implicit */int) ((arr_10 [i_8]) <= (((/* implicit */unsigned long long int) arr_20 [i_1] [i_2] [i_7])))))));
                            arr_32 [i_7] = ((/* implicit */unsigned long long int) ((arr_25 [i_1] [i_7]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_27 [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_7] [8U] [i_6] [i_7])))))));
                            var_20 -= ((/* implicit */unsigned int) (~(arr_7 [i_1] [i_1 + 1])));
                            arr_33 [i_1] [i_1] [i_7] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16104)) ? (((/* implicit */int) (unsigned short)49413)) : (((/* implicit */int) (short)-32755))));
                        }
                    } 
                } 
                var_21 |= ((/* implicit */unsigned short) arr_17 [i_1] [i_2] [(_Bool)1] [(_Bool)1]);
            }
        }
        for (signed char i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            arr_36 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [17] [i_1] [i_9 + 1])) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_9 - 3] [i_9])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_9 + 4]))));
            arr_37 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_9 - 1])) || (((/* implicit */_Bool) arr_9 [i_1 + 1] [i_9 + 2]))));
            var_22 &= ((/* implicit */signed char) ((var_2) >> (((arr_10 [i_1 - 1]) - (6653872682665531760ULL)))));
        }
        for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) arr_31 [i_1 + 1] [(short)6]))));
            var_24 -= ((/* implicit */long long int) ((short) arr_10 [i_1 + 1]));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [18ULL])) ? (((/* implicit */int) arr_26 [(short)18])) : (((/* implicit */int) arr_26 [(short)16])))))));
        }
        arr_40 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_9 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_23 [i_1] [i_1])))))));
        var_26 = ((/* implicit */long long int) (+(((((((/* implicit */int) (signed char)-55)) + (2147483647))) >> (((arr_10 [i_1]) - (6653872682665531750ULL)))))));
        arr_41 [i_1] = ((/* implicit */unsigned long long int) ((arr_16 [i_1 - 1] [i_1] [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
    }
    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_11] [i_11]))));
        var_28 = ((/* implicit */long long int) max(((+(((/* implicit */int) max((((/* implicit */short) arr_26 [i_11])), ((short)-17335)))))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11] [i_11]))) < (arr_30 [(unsigned char)2] [(short)0] [i_11] [i_11] [i_11] [i_11] [i_11]))) || (((/* implicit */_Bool) arr_10 [(_Bool)1])))))));
        arr_44 [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_11] [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) arr_19 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_39 [i_11] [i_11])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_25 [i_11] [i_11])) < (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10018))) : (9193155166283169663ULL))))))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_10))));
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_1)) - (35050)))))) ? (var_0) : ((~(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))))));
    var_31 = ((/* implicit */short) ((((var_8) <= (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-55)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)16123)) - (16113)))))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_11)), (-3748878338306022828LL))) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) var_10))));
}
