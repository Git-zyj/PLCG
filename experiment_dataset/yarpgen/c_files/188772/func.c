/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188772
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((0ULL), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) var_4))))) : (((/* implicit */int) var_13)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0]))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_1 [(short)8])));
                        var_17 = ((/* implicit */unsigned char) ((21ULL) ^ (0ULL)));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)72)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26350)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))))) ? (min((min((arr_12 [i_0] [0U] [0U] [i_0] [i_0]), (18446744073709551595ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)5))))));
                                var_20 ^= ((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_2] [i_4] [i_5]);
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_0]))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4])))));
                                arr_17 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)-1))) ? (((((/* implicit */unsigned long long int) var_3)) / (arr_4 [i_0]))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((((unsigned long long int) 15ULL)) != (12ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)));
                        arr_20 [(signed char)13] [(signed char)13] [(signed char)11] [(signed char)13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_2)))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_1] [i_2] [i_1]))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((unsigned long long int) ((((/* implicit */int) arr_14 [(short)5])) >= (((/* implicit */int) (unsigned char)147))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2])) >= (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_5)) ? (15ULL) : (arr_1 [5ULL]))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 4; i_7 < 12; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1652)) << (((14573408401805247339ULL) - (14573408401805247320ULL)))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))));
                            arr_27 [i_2] [i_7] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17963189047120759705ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_7] [11ULL])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_7 + 2] [i_8] [(signed char)3] [i_8 + 1])) : (((/* implicit */int) (signed char)24))));
                            var_26 ^= ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_2] [(_Bool)1] [i_8] [i_8]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_27 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7 - 4] [i_7] [i_1]))) + (18446744073709551603ULL));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 2])) ? (((unsigned long long int) 23U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            arr_32 [i_1] [i_7] [i_0] [i_1] [i_1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) arr_8 [i_7 + 2] [(unsigned char)13] [i_1] [(signed char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_7]))) : (var_12)))));
                            var_29 |= ((/* implicit */unsigned long long int) var_11);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(34359738367LL)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_31 [i_0] [i_0] [i_0] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7] [i_7 + 2] [i_7 - 3] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))) : (15ULL))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_10 [i_0] [i_0] [0LL] [i_0]))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_34 [i_7 + 2] [i_10] [(short)0] [i_7 - 4]) : (arr_34 [i_7 - 2] [i_10] [(_Bool)1] [i_7 - 3])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (18446744073709551611ULL)))));
                            var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)30159))));
                            arr_39 [i_0] [i_1] [i_1] [i_1] [i_2] [i_7] [i_11] = ((/* implicit */short) ((arr_19 [i_0] [i_7 - 2] [i_2] [i_2] [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)4] [i_7 - 4] [i_7] [i_7 - 3] [i_7 - 1] [i_0])))));
                            arr_40 [i_0] [i_7] [9ULL] [i_0] [i_0] = ((/* implicit */unsigned char) 21ULL);
                        }
                        var_35 = 10102262776410839248ULL;
                    }
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (((~(((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned char)139)))))) < (((arr_25 [i_0] [i_1] [i_0] [i_12] [i_12] [i_1] [(_Bool)1]) ? (((/* implicit */int) arr_42 [7ULL] [7ULL] [i_2] [6ULL])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [(signed char)10] [i_0] [i_0])))))))));
                        var_37 = ((/* implicit */unsigned char) (_Bool)0);
                        arr_43 [i_0] [(unsigned char)3] [i_2] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) arr_10 [i_12] [(signed char)1] [(signed char)1] [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [10U] [i_0]))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)4]))) : (8544484323068164491ULL)))))));
                        arr_44 [i_0] [i_1] [i_2] [i_12] = ((/* implicit */unsigned int) ((((unsigned long long int) -9223372036854775797LL)) <= (min((((/* implicit */unsigned long long int) min((var_2), (var_8)))), (var_6)))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) >> (((max((var_6), (18446744073709551601ULL))) - (18446744073709551571ULL)))));
}
