/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16997
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) (~(arr_0 [i_2 + 1]))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32767)))) > (((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])) << (((arr_0 [i_1]) + (1171977990))))) ^ ((+(((/* implicit */int) arr_2 [i_0]))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(5337735333979065895ULL)))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((_Bool) max(((unsigned short)18595), (var_12)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_2)), ((short)32750))))))), (arr_5 [i_0] [i_0])));
        arr_10 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)19146))));
        var_18 -= ((/* implicit */int) arr_4 [i_0]);
    }
    for (int i_3 = 4; i_3 < 12; i_3 += 1) 
    {
        var_19 -= ((/* implicit */signed char) ((max((13109008739730485713ULL), (((/* implicit */unsigned long long int) (short)-24400)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1])))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        arr_19 [i_5] = ((/* implicit */signed char) -1729325267);
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_3] [i_4 + 1] [i_5 - 2] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)112))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_3] [i_3]))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32741)) : (((/* implicit */int) (short)-19826)))))), (((/* implicit */int) min((arr_13 [i_5 - 2] [i_3 - 1]), (((/* implicit */unsigned short) arr_16 [i_3] [i_3 - 1] [i_5])))))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) var_14);
                            arr_24 [i_7] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */short) (_Bool)1)), (arr_16 [i_3] [i_3] [i_3]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) min(((((-(((/* implicit */int) (_Bool)1)))) - (min((((/* implicit */int) arr_12 [i_3])), (arr_26 [i_4] [(signed char)10]))))), (((/* implicit */int) ((1849327837) > (-163333292))))));
                            var_21 = ((/* implicit */unsigned short) var_7);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) var_4));
                            arr_31 [(_Bool)0] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 2] [i_5] [i_4 + 1] [i_4])) - (((/* implicit */int) arr_20 [i_5 - 2] [(unsigned char)4] [i_4 + 1] [i_3]))));
                        }
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned short) min((13109008739730485723ULL), (((/* implicit */unsigned long long int) (short)-28010))));
            arr_32 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (+(max((2147483647), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)-11)) : (1229629606)))))));
            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)13639)), (var_11))), (((/* implicit */unsigned long long int) arr_11 [i_3]))))) ? (min((((/* implicit */unsigned long long int) min(((short)32767), (((/* implicit */short) (signed char)127))))), (9007199254740991ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (short)2468)) : (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) (~(arr_14 [i_4] [i_3] [i_3]))))))))));
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                var_25 -= ((/* implicit */unsigned short) ((arr_29 [i_11] [i_10]) == (18446744073709551606ULL)));
                var_26 -= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_3] [i_10])))), (((/* implicit */int) arr_1 [i_3] [i_3])))) ^ (((/* implicit */int) ((signed char) arr_20 [i_3] [i_10] [i_10] [i_3])))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned short) min(((~(arr_29 [i_3] [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_3 + 1] [i_3 - 1])))))));
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)30323)), (arr_39 [i_13] [i_10] [i_11] [i_12] [i_13] [i_13]))))));
                            var_29 = ((/* implicit */unsigned short) (short)3567);
                            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
                            var_31 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2240)) ? (((/* implicit */int) arr_41 [i_3] [8ULL] [8ULL] [i_3] [i_3])) : (1352320363)))), (max((((/* implicit */unsigned long long int) var_6)), (var_9))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((1352320341), (((/* implicit */int) arr_30 [i_11] [i_10] [i_10] [i_10]))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_12])), (arr_28 [i_11])))))));
                        }
                    } 
                } 
            }
            var_32 += ((/* implicit */unsigned short) min((min(((-(-1158936631))), (((/* implicit */int) (signed char)122)))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_3])) : (var_4)))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (var_11)))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-7787)), (var_12)))))) : (var_4)));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) <= (((/* implicit */int) max((((/* implicit */short) (signed char)-14)), ((short)28501))))));
            var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_3 - 2])) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_39 [i_3] [(unsigned short)12] [i_3] [i_3] [i_14] [(short)11])))) / (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) 1352320341)), ((-(35184372088831LL)))))));
            var_36 = ((/* implicit */unsigned short) var_14);
            var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_3 - 3] [i_14])))) || (((/* implicit */_Bool) min((arr_26 [i_3] [i_14]), (((/* implicit */int) var_5)))))));
        }
    }
    var_38 = ((/* implicit */signed char) (short)-13728);
}
