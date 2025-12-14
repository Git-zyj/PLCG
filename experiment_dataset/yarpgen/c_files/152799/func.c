/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152799
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((~(-1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) <= (0ULL)))))))))));
    var_20 = min((((/* implicit */unsigned long long int) (_Bool)1)), (min((var_6), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_0 [7ULL] [i_0])) % (var_17)))) > (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((arr_0 [i_0] [i_0 + 2]) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [2ULL]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_0]))))));
            arr_6 [i_0] [i_1] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0 + 2] [8])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (arr_0 [i_0] [i_0])))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (4831015594598713048ULL))))) | (((/* implicit */unsigned long long int) (((~(23U))) << ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)3568))) : (-5125996135473840832LL))) - (3556LL)))))));
            arr_7 [12U] |= ((/* implicit */unsigned char) var_2);
            var_22 |= (+(((/* implicit */int) ((16383ULL) != (((/* implicit */unsigned long long int) 23U))))));
        }
        arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_5 [i_0 + 2]))))) : (((/* implicit */int) (unsigned char)2))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_23 -= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [19ULL] [i_3] [i_2])) && (((/* implicit */_Bool) arr_13 [14ULL] [i_2] [i_2])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_23 [0ULL] [i_5] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((var_2) / (((/* implicit */unsigned long long int) arr_9 [i_4] [i_6])))));
                            var_24 *= ((var_10) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 100857220)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(_Bool)1])))))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 3])) ? (arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 3]) : (arr_14 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 3])));
                            var_26 *= ((/* implicit */int) ((short) ((((/* implicit */_Bool) 0ULL)) ? (-1405789646) : (((/* implicit */int) arr_15 [i_3])))));
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)59)))))));
                        }
                        var_28 += ((/* implicit */_Bool) (-(arr_11 [i_2] [i_3] [(_Bool)1])));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_27 [i_4 + 1] [i_4] [i_2] = ((/* implicit */long long int) 1627848379);
                        arr_28 [i_4] [i_4 + 1] [(short)7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [7ULL] [(_Bool)1] [7ULL] [5ULL] [i_4 + 1] [i_7] [i_4 + 1])) ? (8074672258219967764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)14] [i_3])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_2] [i_3] [i_4] [i_7] [i_3] [i_4])) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_16))));
                        arr_29 [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4 - 1] [i_7]))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_29 *= ((/* implicit */unsigned int) (+(arr_25 [i_2])));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_4 - 1] [i_3] [i_4 - 1] [(_Bool)1] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3]))) : (((((/* implicit */_Bool) -8445427535396212923LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))) : (arr_11 [i_2] [i_3] [14U]))))))));
                        var_31 &= ((/* implicit */unsigned long long int) ((5125996135473840831LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (10372071815489583832ULL) : (11996966953897099104ULL)))))));
                        var_33 = ((/* implicit */unsigned char) arr_14 [i_2] [i_2] [i_4 + 1] [i_8]);
                    }
                    arr_32 [i_4] = ((/* implicit */unsigned int) arr_10 [i_3] [(short)6]);
                }
                /* vectorizable */
                for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
                    arr_37 [i_2] [i_2] = ((/* implicit */unsigned int) ((var_9) != (((/* implicit */int) ((arr_26 [i_2] [i_3] [i_9] [i_9 - 2] [i_9 + 2]) < (arr_9 [i_2] [i_2]))))));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    arr_41 [i_2] [(short)5] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((_Bool) ((11698357103374118864ULL) != (((/* implicit */unsigned long long int) var_18)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8074672258219967764ULL)) ? (arr_16 [i_2] [i_2] [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((arr_35 [i_12] [i_11] [i_3] [i_2]) < (1405789646))) ? (((/* implicit */int) ((-2418351985576950105LL) != (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12] [i_11] [i_11] [20ULL] [i_3] [i_2])))))) : (((/* implicit */int) (_Bool)1))));
                            var_37 += ((/* implicit */unsigned int) ((8445427535396212901LL) % (((/* implicit */long long int) arr_26 [i_10 + 1] [i_11] [i_11] [i_12] [i_12]))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_38 *= ((/* implicit */unsigned long long int) var_5);
                            var_39 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [(short)18] [20ULL] [i_11] [i_10] [10] [i_2] [(_Bool)1])) ? (-4569451620458278052LL) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [8LL] [i_3] [i_10] [i_11] [i_13]))))) | (((/* implicit */long long int) arr_11 [i_2] [i_13 - 1] [i_10]))));
                            var_40 = var_3;
                            var_41 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_43 [i_10 - 2] [i_13 - 1] [i_10]));
                        }
                        for (int i_14 = 1; i_14 < 20; i_14 += 3) 
                        {
                            arr_52 [7LL] [3LL] [i_10 - 1] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((465963956) < (((/* implicit */int) arr_20 [i_2] [i_3] [i_10] [i_11] [i_14 + 2] [i_10]))))) + (arr_35 [13] [i_3] [i_3] [(short)13])));
                            arr_53 [i_2] [i_3] [i_10 - 3] [i_10] [i_11] [i_14] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (arr_48 [i_2] [i_3] [i_10 - 3] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))));
                        }
                    }
                    var_42 = ((/* implicit */int) ((_Bool) (-(var_18))));
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_30 [i_10] [i_10] [i_10] [i_10 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_10] [i_3]))))))));
                    arr_54 [i_3] |= ((/* implicit */short) ((((/* implicit */int) arr_46 [i_10 - 3] [i_10 - 3] [i_10 + 1] [i_10] [i_10])) <= (var_14)));
                }
                arr_55 [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)459)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : (18446744073709551615ULL))), (((var_3) << (((-7196532175391340183LL) + (7196532175391340242LL)))))))) ? ((((!(((/* implicit */_Bool) -1627848377)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL))))) : (max((((((/* implicit */_Bool) var_10)) ? (var_3) : (arr_18 [i_2] [i_3] [i_3] [i_2] [14]))), (((/* implicit */unsigned long long int) min((arr_48 [(short)16] [(_Bool)1] [2] [i_3]), (arr_48 [i_2] [i_3] [18ULL] [i_3]))))))));
            }
        } 
    } 
}
