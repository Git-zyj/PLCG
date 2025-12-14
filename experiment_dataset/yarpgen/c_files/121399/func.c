/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121399
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
    var_16 *= ((/* implicit */int) ((unsigned char) max((3927265187943584115LL), (((/* implicit */long long int) var_0)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) var_15)))) : (((/* implicit */int) var_11)))))));
        arr_2 [i_0] [(signed char)0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_0))) + (((/* implicit */int) arr_5 [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                arr_9 [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_7 [i_1] [(unsigned short)1] [(unsigned short)1]))))));
                var_19 |= ((/* implicit */unsigned int) var_15);
                var_20 = ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1]);
                var_21 = ((/* implicit */long long int) var_15);
                arr_10 [i_3] [i_1] [i_1] = ((/* implicit */long long int) var_4);
            }
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-7414)) ? (2147483647) : (1139299757)))));
                            var_23 |= ((((/* implicit */_Bool) (short)4080)) ? (((/* implicit */int) arr_16 [i_1] [(short)4] [i_4] [(short)4] [i_6])) : (((/* implicit */int) arr_13 [i_5 - 3] [8] [0] [i_5] [i_6] [i_4])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_23 [i_8] [i_4] [12ULL] = (+(((((/* implicit */int) var_6)) * (((/* implicit */int) arr_17 [i_7] [i_2] [i_7] [i_7] [i_8] [i_7])))));
                        var_24 = ((/* implicit */int) arr_13 [i_8] [i_4] [i_4] [i_2] [i_4] [(short)4]);
                        arr_24 [(short)9] [i_4] [i_4] [i_4] [i_1] = var_7;
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)100)) * (((/* implicit */int) arr_21 [11ULL] [12ULL] [4ULL] [9] [i_8] [i_7 - 2] [i_2]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_27 [i_4] = ((/* implicit */long long int) 16709660033324018747ULL);
                        var_26 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_2] [i_4] [i_2] [i_9])));
                        var_27 &= ((/* implicit */short) ((arr_22 [i_4] [i_7 - 1] [i_7 - 3] [i_9] [i_9]) == (arr_22 [i_4] [i_7 - 1] [i_7 - 3] [i_7] [i_9])));
                        arr_28 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */long long int) arr_3 [i_7] [i_9]);
                    }
                    for (int i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        arr_32 [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))) > (((/* implicit */int) arr_16 [i_4] [(short)3] [i_4] [i_7 - 2] [i_10]))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_18 [i_2]))));
                    }
                    for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_6 [3] [i_4] [(short)3]);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)85))))) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_2] [i_4] [i_4] [4U]))))) : (var_3)));
                    }
                    var_31 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_10)))))) : (arr_29 [i_1] [i_7 - 2] [i_4])));
                    var_32 = ((/* implicit */int) var_10);
                }
            }
        }
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_12] [i_12] [i_1]))));
            var_34 = ((/* implicit */unsigned char) ((((arr_36 [i_1] [i_12] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_3) : (((/* implicit */long long int) 2147483647)))) : (((long long int) arr_29 [i_1] [i_12] [i_12]))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [5U] [(unsigned char)10] [5U])) ? (9785686858837352608ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [i_12] [i_1])) - (arr_33 [i_1] [i_1] [i_12] [i_12] [i_12]))))));
        }
        arr_37 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3487107999U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1793639365101073334LL)))));
        arr_38 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) >> (((var_4) - (2687784607937615143ULL))))) | (((/* implicit */int) arr_12 [i_1] [i_1]))));
        var_36 = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [(short)3] [(signed char)2] [i_1])) <= (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(short)2])) ? (((/* implicit */int) arr_17 [i_1] [6] [i_1] [1ULL] [(short)5] [i_1])) : (((/* implicit */int) var_7))))));
    }
    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) ((short) var_6)))))));
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) 2147483647)) : (122248281U)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
    var_39 |= ((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (337999125) : (((/* implicit */int) var_12)))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_1)))))))));
}
