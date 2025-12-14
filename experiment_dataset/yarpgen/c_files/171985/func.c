/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171985
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_11 [i_3] = ((unsigned long long int) min((arr_4 [i_2 + 1]), (arr_4 [i_2 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_20 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) ((arr_9 [i_0]) == (((/* implicit */unsigned long long int) var_9)))))))), (min((min((var_18), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((unsigned char) var_19)))))));
                            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_19)) / (max((var_1), (arr_3 [i_0] [(unsigned char)14] [i_4])))))), (max((((/* implicit */unsigned long long int) (~(var_11)))), (((unsigned long long int) var_7))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            arr_19 [i_3] = ((/* implicit */long long int) var_7);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (+(var_14)))), (((arr_3 [i_1] [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */short) var_10))))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) ((signed char) 4416939843855902584LL)))))))))));
                        }
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (var_19)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (var_7))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) ((((var_15) + (var_7))) >> (((((/* implicit */int) var_0)) + (78)))));
                        arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)133)), (4416939843855902584LL)));
                    }
                    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        arr_27 [12ULL] [i_7] [9] [i_2] [i_1] [9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), ((+(var_15)))));
                        arr_28 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_1)))))) * (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_15 [i_0] [i_1] [(signed char)17] [i_7 - 2] [i_2]))), (((/* implicit */long long int) var_14))))));
                        arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */int) var_14);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */int) (-(max((((var_6) ? (((/* implicit */long long int) arr_31 [12LL] [i_1] [12LL] [12LL] [i_9])) : (var_5))), (((/* implicit */long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                            arr_36 [i_0] [i_0] [4LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((-4416939843855902593LL), (((/* implicit */long long int) (signed char)112))));
                            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_10 [i_2 + 1] [i_0 + 1]) == (arr_6 [i_0 + 2] [i_2 + 1])))), (((int) ((int) var_3)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)96))))) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))));
                            arr_40 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1] [2U] [4LL] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_22 [i_0] [i_1] [i_2] [8U]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */int) var_15);
                            arr_43 [i_11] = ((/* implicit */long long int) var_7);
                            var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                            arr_47 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1] |= ((/* implicit */long long int) min((arr_8 [i_0] [i_0] [i_2 - 1] [6LL] [i_12]), (min((((/* implicit */unsigned long long int) ((_Bool) var_14))), (max((var_18), (((/* implicit */unsigned long long int) var_4))))))));
                            arr_48 [i_12] [i_12] [i_12] [i_2 + 1] [i_8] [i_8] [i_12] = ((unsigned char) ((max((((/* implicit */long long int) var_12)), (arr_7 [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 1] [i_1] [i_2 + 1] [i_0 + 2])))));
                            var_32 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11))))) << (((var_14) - (1515682553U)))));
                            arr_49 [i_12] = ((/* implicit */unsigned long long int) ((long long int) min((arr_42 [16ULL] [16ULL] [i_12] [i_8]), (var_15))));
                        }
                        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) 4416939843855902595LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6852))) : (4416939843855902593LL))) : (var_5)));
                        var_34 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_19)))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) min((var_19), (var_19)))))));
                        var_35 |= ((/* implicit */signed char) ((((max((((/* implicit */unsigned int) var_10)), (var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8])) && (((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (-6061542055322963824LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))) : (((min((var_5), (((/* implicit */long long int) var_12)))) * (min((var_5), (((/* implicit */long long int) var_14))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 18; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) arr_34 [i_2] [i_14]);
                                arr_55 [i_0 + 2] [2ULL] [i_0 - 2] [i_0 + 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) max((var_11), (var_14))))) % (((((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) - (((unsigned long long int) var_7))))));
                                var_37 |= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))));
                                arr_56 [i_13 + 1] [i_1] [i_2] [i_13 + 1] [i_2] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_19)) ? (arr_38 [i_0 - 2] [i_1] [i_0 - 2] [i_1] [i_14] [i_0 - 2] [i_1]) : (((/* implicit */unsigned long long int) arr_32 [1])))), (((/* implicit */unsigned long long int) arr_41 [i_0 + 1])))), (((/* implicit */unsigned long long int) var_14))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (var_9)))) : (arr_7 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_0] [i_0] [i_2]))))))));
                            }
                        } 
                    } 
                    var_39 -= ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_12), (var_3)))) << (((min((var_11), (((/* implicit */unsigned int) var_19)))) - (1647694859U)))))) ^ (min((arr_38 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2]), (var_18))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        var_40 = ((/* implicit */unsigned long long int) var_12);
        arr_59 [i_15] = ((/* implicit */long long int) var_18);
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (long long int i_18 = 2; i_18 < 9; i_18 += 3) 
                {
                    {
                        arr_69 [i_15] [i_15] [i_17] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1883560530142673491LL)) ? (4416939843855902581LL) : (((/* implicit */long long int) 0U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_12))))) : (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) arr_67 [(unsigned char)6] [i_16] [2U] [i_18])) < (var_19)))), (var_4))))));
                        var_41 *= ((/* implicit */_Bool) var_16);
                        arr_70 [i_15] [i_16] [i_16] [i_15] |= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_11))), ((~(((/* implicit */int) arr_50 [i_18 + 1] [i_18] [i_18 - 1] [i_18] [i_18] [i_18]))))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */int) ((unsigned int) (short)6859));
}
