/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137310
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0 + 2])) && (((/* implicit */_Bool) (~(786210555)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_1])) >= (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 1])) : ((+(((/* implicit */int) arr_2 [i_1] [i_1] [i_0 + 1]))))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 - 1])), (72057594037927936ULL)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0 + 3] [i_2])))), ((~(((/* implicit */int) arr_0 [i_2 + 2] [i_0 + 2]))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            arr_13 [i_2] [i_3] = ((/* implicit */int) var_10);
                            var_13 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (arr_6 [i_3 - 3] [(signed char)0] [i_2] [(signed char)0])))))))) ^ (max((((/* implicit */long long int) arr_11 [i_0 + 1] [i_0 - 1])), (var_3)))));
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_0] [i_5] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_14 [(unsigned short)12] [1])) * (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) - (((/* implicit */int) var_2)))))));
                            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_0)))));
                        }
                        var_15 += ((/* implicit */unsigned long long int) ((unsigned int) (-(((((/* implicit */_Bool) 0LL)) ? (-3734200281505052529LL) : (((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2])))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)2] [i_3])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (signed char)87)) - (80)))))), (max((var_1), (((/* implicit */unsigned long long int) 829649470U)))))) : (0ULL)));
                        arr_17 [i_2] [i_3] [i_2 + 3] = ((/* implicit */signed char) ((var_3) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (arr_3 [i_0 - 1]))))));
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) 536805376U)) + (arr_6 [(signed char)6] [i_1] [i_2] [i_3])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned char) (!(arr_18 [i_0] [i_0] [(short)12] [i_0])))))));
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) + (((/* implicit */int) var_7)))) / (((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 1]))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) var_5)))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_23 [10] [10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_5);
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_7] = ((((/* implicit */unsigned long long int) arr_21 [i_6 - 2])) / (2733853059905793875ULL));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((long long int) ((arr_4 [i_0] [i_6]) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_27 [i_0] [4ULL] [i_6 - 1])))));
                            var_22 = ((/* implicit */unsigned char) ((unsigned int) arr_7 [i_0 + 2] [i_2 + 2] [i_2 + 2] [i_8]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_18 [i_9] [i_2] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_9]))))) + (arr_19 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0])));
                            var_24 ^= ((/* implicit */_Bool) ((arr_7 [i_6] [i_6 + 2] [i_2 + 2] [i_2 + 2]) ? ((+(((/* implicit */int) arr_28 [(signed char)1] [(signed char)1] [(signed char)1] [i_6] [i_1] [i_2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
                            arr_30 [i_0] [i_2] [i_9] = arr_9 [i_0] [i_0] [i_2];
                        }
                    }
                    for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        arr_33 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [10LL] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [3U] [3U] [3U]))) + (2147483648U))));
                        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((14853468964787146017ULL), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) arr_11 [i_2] [i_1])))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_27 [i_10 + 1] [i_1] [i_0 + 2])))) : (((/* implicit */int) arr_14 [i_10] [i_2]))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)23257)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (9223372036854644736ULL))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (14600097828081635370ULL)))))) ? ((-(((((/* implicit */int) arr_28 [i_10] [i_10] [7U] [i_1] [i_1] [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-14)))))) : (((/* implicit */int) arr_14 [i_2 - 1] [i_0 + 3])))))));
                    }
                    for (signed char i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1563132441U)) != (var_1))))) : (((((/* implicit */unsigned long long int) max((3296491010U), (((/* implicit */unsigned int) var_10))))) % (16373675387454421177ULL)))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (arr_20 [i_11] [i_11] [i_11] [i_11] [i_11])));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (_Bool)1))));
                        var_30 ^= ((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_2] [i_0] [i_0]);
                    }
                }
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7157435418005270845LL))))) : (((/* implicit */int) var_0))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_35 [i_1])) != (((/* implicit */int) var_4))))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) (~((((-(((/* implicit */int) var_2)))) / (((860931569) << (((((/* implicit */int) var_5)) - (49770)))))))));
}
