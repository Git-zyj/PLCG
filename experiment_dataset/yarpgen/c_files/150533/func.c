/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150533
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
    var_20 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((14493001055297367935ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (arr_1 [12U] [i_1]))))))))));
                arr_6 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3953743018412183689ULL)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2112)))))))) ? ((~(3953743018412183684ULL))) : (var_13)));
                var_21 |= min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [1U] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))), (((15846852939736604455ULL) * (((/* implicit */unsigned long long int) 18U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (4360699304792382159ULL) : (arr_1 [i_1] [(short)8]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_14 [i_3] [i_2] [i_4] [i_3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1]))));
                            var_22 = ((/* implicit */signed char) (!(((arr_7 [i_1] [i_2] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24969)))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((arr_2 [i_0] [i_0]) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [11U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17245))))));
                            arr_15 [i_3] = ((/* implicit */int) 1552804377U);
                        }
                        var_24 = ((/* implicit */signed char) var_11);
                        var_25 ^= ((/* implicit */unsigned int) ((unsigned short) ((var_2) && (((/* implicit */_Bool) arr_3 [i_0])))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((((int) arr_4 [7U] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)40567))));
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (~(22ULL)));
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39231)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [(short)7])) : (min((((/* implicit */unsigned long long int) (unsigned short)27558)), (var_17)))));
                    var_27 = ((/* implicit */short) var_8);
                    var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (15846852939736604455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned short)0] [i_1] [0U] [0U])))), (((((/* implicit */_Bool) 2271003465U)) && (((/* implicit */_Bool) (short)17244))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7]))) % (((unsigned int) arr_12 [i_6] [i_6] [i_5] [i_5] [i_1] [i_1] [i_6])));
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_5] [i_6])) : (var_6))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24982)) | (arr_2 [i_0] [i_7])));
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967294U))));
                            arr_27 [i_0] [5ULL] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((((/* implicit */_Bool) arr_9 [i_0] [7ULL])) || (((/* implicit */_Bool) var_12))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) max((((1939185507U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (var_10)))) ? (((/* implicit */int) min(((unsigned short)24976), (((/* implicit */unsigned short) (signed char)31))))) : (((((/* implicit */_Bool) 877731988U)) ? (((/* implicit */int) (unsigned short)40566)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_34 = ((/* implicit */int) arr_7 [i_8] [i_1] [i_0]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_35 -= var_19;
                            arr_34 [i_6] [i_1] [i_5] [2ULL] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_23 [i_0] [i_6] [i_5] [i_6] [i_9])) : (((/* implicit */int) arr_23 [i_0] [i_6] [i_5] [i_6] [i_0]))))) * (arr_13 [i_0] [i_6] [i_5] [i_6] [i_9] [i_9])));
                        }
                        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_36 *= ((/* implicit */unsigned long long int) ((unsigned int) var_8));
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (var_12)));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_38 = max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_1 [i_11] [i_1]) != (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned int) 2012697741)) % (4193790775U)))))), (((max((var_10), (var_17))) >> (((var_9) + (1184504774))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8152)) != (((/* implicit */int) (signed char)100))));
                        var_40 = ((/* implicit */_Bool) ((min((2ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) arr_8 [i_1] [11ULL]))))) && (((/* implicit */_Bool) arr_4 [i_1] [i_5] [i_11]))))))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_8 [i_11] [i_1])) * (877731988U)));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_42 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [(signed char)7] [i_0] [i_0] [i_1] [i_1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3417235292U)) || (var_18))))) : (var_1)));
                    var_43 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_7 [7U] [i_1] [i_12])))))));
                    var_44 -= ((/* implicit */unsigned int) ((var_12) >> (((((((/* implicit */_Bool) 2124538505U)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (short)-32765)))) - (32742)))));
                }
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 13; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_49 [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)-34)), (arr_11 [i_0] [i_13] [i_0]))))))));
                                var_45 = ((/* implicit */int) max(((((_Bool)1) ? (9669705422368845005ULL) : (((arr_3 [i_14]) + (8777038651340706606ULL))))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (4294967285U)))) + (min((((/* implicit */unsigned long long int) arr_32 [i_0] [(short)2] [i_13] [i_13] [i_14] [i_15] [i_14])), (3128837386928897985ULL)))))));
                            }
                        } 
                    } 
                    var_46 &= ((/* implicit */unsigned short) var_13);
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            {
                                arr_54 [i_16] [i_1] [i_13] [i_16] [i_13] = ((/* implicit */short) min((max((((/* implicit */unsigned short) arr_43 [i_13] [i_1] [i_1])), ((unsigned short)44893))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1665097690U)) ? (((/* implicit */int) arr_33 [11ULL] [i_1] [i_1] [i_16] [i_17] [i_0])) : (((/* implicit */int) (signed char)65))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (1665097690U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))))));
                                var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) 4294967291U))));
                            }
                        } 
                    } 
                    arr_55 [i_13] [i_13] = ((/* implicit */unsigned short) var_2);
                    arr_56 [i_13] [i_1] [i_13] = ((/* implicit */unsigned int) (_Bool)1);
                }
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned long long int) (_Bool)1);
}
