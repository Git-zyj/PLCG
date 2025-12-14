/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186664
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_10 [(unsigned short)3] [13] [i_2] [i_0] = ((/* implicit */_Bool) 288230367561777152LL);
                    var_12 = ((((((/* implicit */_Bool) ((-514463425) / (arr_5 [i_1 - 2] [i_1])))) ? (((/* implicit */long long int) var_6)) : (-288230367561777152LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0])) ? (arr_6 [i_2] [i_1 + 1] [i_0]) : (arr_6 [i_0] [i_1] [i_2])))));
                    var_13 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (288230367561777138LL) : (((/* implicit */long long int) arr_9 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21964)) / (arr_5 [i_0] [i_0])))) : (((unsigned int) arr_0 [i_2])))) != (((/* implicit */unsigned int) max((min((arr_1 [i_0]), (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) 288230367561777148LL)) && (((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1]))))))))));
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((min((((/* implicit */long long int) arr_1 [i_1 - 1])), (-4343225122389755025LL))) + (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9166))) - (-288230367561777139LL))), (max((-288230367561777152LL), (288230367561777153LL))))));
                    arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) ((((446311256) != (((arr_0 [i_3]) - (2054489569))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_6 [i_0] [i_1] [i_3]) : (((/* implicit */int) var_9))))) ? ((-(var_0))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_5)) : (var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (288230367561777152LL) : (((/* implicit */long long int) 4294967295U))))) ? (min((((/* implicit */long long int) var_1)), (-288230367561777138LL))) : (((/* implicit */long long int) max((var_7), (arr_4 [i_0] [i_3]))))))));
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    var_14 &= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (_Bool)1)), (288230367561777151LL))), (arr_13 [5LL] [i_1])));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_4]))));
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_16 ^= ((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [i_0] [i_5] [i_0] = arr_3 [i_1] [i_1] [i_1 - 1];
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [i_5] [i_5] [i_6] [12] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_1 - 2])));
                            arr_30 [i_5] [i_5] [i_5] [7LL] [i_5] [15] = ((/* implicit */short) ((arr_19 [i_0] [i_6] [i_0]) >> (((arr_19 [i_1] [i_5] [i_6]) - (1591688704005192263LL)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_17 = ((arr_33 [(_Bool)0] [i_1 - 2] [i_5] [i_1 - 2] [i_8] [i_1 - 1]) ? (((/* implicit */int) arr_33 [i_1 - 2] [i_1 + 1] [i_8] [i_6] [i_8] [i_1 - 2])) : (((/* implicit */int) var_2)));
                            arr_34 [i_8] [i_6] [i_1] [i_1] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1]))));
                            var_18 ^= ((/* implicit */_Bool) (~(arr_16 [i_0] [i_1] [i_5] [i_1 - 1])));
                            arr_35 [i_5] [i_6] [i_5] [11] [i_5] = ((/* implicit */unsigned short) (~(((var_4) << (((((-288230367561777139LL) + (288230367561777141LL))) - (2LL)))))));
                        }
                        for (int i_9 = 2; i_9 < 15; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((int) 0))) ? (((/* implicit */long long int) 1922313475)) : (288230367561777129LL))))));
                            var_20 = ((/* implicit */int) min((var_20), ((~(var_5)))));
                        }
                        for (int i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            arr_40 [13] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) && (((_Bool) -719397204))));
                            arr_41 [i_10] [i_5] [i_5] [i_6] [i_10] [i_5] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_10] [i_0] [i_0])))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 564664808)) ? (((var_2) ? (arr_22 [i_0] [i_5]) : (((/* implicit */int) arr_33 [i_0] [i_0] [2U] [14] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_0] [10] [i_5] [i_6] [11] [i_5])) : (arr_38 [i_5] [i_10] [i_0] [i_6] [i_1])))));
                            arr_42 [i_0] [i_10] [i_10] [i_6] [i_6] [16] [i_5] = ((/* implicit */int) ((unsigned int) var_9));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        var_23 -= ((/* implicit */_Bool) (~(arr_36 [i_1 + 1] [i_0])));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_1 + 1])))))));
                    }
                    for (int i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (short)21392))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_5] [i_1 - 1])) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 288230367561777139LL)) ? (-288230367561777152LL) : (((/* implicit */long long int) 1618812716)))) : (((8271611864591498611LL) | (((/* implicit */long long int) 2659484764U)))))))))));
                        arr_45 [i_5] [i_1] [i_1] [i_1] = arr_11 [i_0] [i_0] [i_11 + 1];
                        var_27 = ((/* implicit */short) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                arr_50 [i_0] [i_5] [i_5] = (i_5 % 2 == zero) ? (((((/* implicit */int) ((arr_22 [i_1 - 1] [i_5]) >= (var_5)))) << (((((((/* implicit */_Bool) var_3)) ? (arr_22 [i_1 - 2] [i_5]) : (((/* implicit */int) var_2)))) - (1195495351))))) : (((((/* implicit */int) ((arr_22 [i_1 - 1] [i_5]) >= (var_5)))) << (((((((((/* implicit */_Bool) var_3)) ? (arr_22 [i_1 - 2] [i_5]) : (((/* implicit */int) var_2)))) + (1195495351))) + (404696433)))));
                                arr_51 [i_5] [i_5] [i_5] [i_13] [i_5] [i_12 - 2] [8] = max((((unsigned int) 3418523167U)), (((/* implicit */unsigned int) arr_21 [i_12 - 1] [i_1 - 2])));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (!(arr_12 [i_1] [i_1 - 2] [i_1 + 1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((-288230367561777139LL), (((/* implicit */long long int) (short)-22126)))))))))))));
                }
                var_29 -= ((/* implicit */int) (short)-32765);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_30 += (-(((/* implicit */int) (unsigned short)40894)));
                    var_31 ^= ((/* implicit */short) (~(((unsigned int) arr_8 [i_14] [i_14] [i_14] [i_14]))));
                    arr_56 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    arr_57 [(signed char)16] [i_0] [i_1 + 1] [i_14] = (~(arr_16 [7] [i_1 + 1] [i_1 - 1] [i_1 + 1]));
                }
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_48 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */long long int) var_0)) : (min((min((288230367561777139LL), (((/* implicit */long long int) 536805376U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) & (var_10))), (var_10)))) ^ (((((/* implicit */_Bool) max((-1), (1483141299)))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_9))))))))))));
}
