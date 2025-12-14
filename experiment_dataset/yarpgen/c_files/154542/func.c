/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154542
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_8)) + (19391))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 - 1]))))), (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((((/* implicit */signed char) var_11)), (((signed char) min((((/* implicit */short) (signed char)44)), ((short)-26808))))));
                                arr_16 [i_1] &= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-26808)) ? (((/* implicit */unsigned int) var_2)) : (((unsigned int) 933204739U))))));
                                var_15 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (short)25652)) ^ (((/* implicit */int) (short)-26801)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 3; i_6 < 9; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        var_17 = ((/* implicit */unsigned char) 5462704562479823659LL);
                    }
                    arr_22 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)26800)) / (arr_14 [i_0] [9U] [i_5] [i_0] [i_0]))))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_26 [i_0] [i_0] [i_7] [i_7]))) ? (((/* implicit */int) ((_Bool) 16838804709530329413ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) var_9))), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) * (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (short)24449))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(min(((_Bool)1), (((arr_6 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                            arr_31 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)80)), (((unsigned int) ((signed char) arr_4 [i_7] [i_7])))));
                        }
                        for (int i_10 = 2; i_10 < 6; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-28388)))) ? ((-(((/* implicit */int) ((unsigned char) 16838804709530329401ULL))))) : (((/* implicit */int) arr_11 [i_8])))))));
                            var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) arr_26 [(_Bool)1] [i_7] [i_8] [i_10])))))))), (arr_10 [i_10] [i_8] [i_0] [i_1] [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (unsigned short)7);
                        var_24 = ((/* implicit */unsigned char) ((1271030727086345279ULL) >> (((/* implicit */int) arr_24 [i_0] [i_1] [i_7]))));
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (short)26823))));
                    }
                    for (unsigned int i_12 = 3; i_12 < 7; i_12 += 1) 
                    {
                        arr_39 [i_0] [i_0] [5U] [i_12] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                        arr_40 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)11581)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26824)))))) : (4294967295U)))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_26 |= ((((/* implicit */_Bool) ((short) ((short) arr_32 [4U] [1] [(signed char)8] [i_13] [(short)3])))) ? (((((((/* implicit */int) (signed char)3)) << (((((/* implicit */int) var_7)) - (40))))) ^ (((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_15 [i_0] [i_1] [i_1] [(unsigned char)4] [(unsigned char)4] [i_13])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11582))))) : (((/* implicit */int) max(((short)11581), (((/* implicit */short) var_7))))))));
                        arr_43 [4U] [i_0] [4U] [i_7] [i_0] [i_13] = ((short) arr_29 [i_0] [i_1] [i_1] [i_7] [5] [5] [i_13]);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_19 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)-1)), (arr_12 [i_0]))) < (arr_6 [i_0] [i_1]))))) : (max((((((/* implicit */_Bool) 4149865539897093081ULL)) ? (-7944020076501461033LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)11605))) != (3262282429102353053LL))))))));
                    }
                    var_28 = ((/* implicit */signed char) ((var_9) >> (((((/* implicit */int) ((short) var_4))) - (2702)))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                arr_48 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (arr_20 [i_0] [i_1] [i_7] [i_14] [i_15 + 1])));
                                var_29 ^= ((/* implicit */long long int) (signed char)-7);
                            }
                        } 
                    } 
                    arr_49 [i_1] [4U] [i_1] [(_Bool)1] |= ((/* implicit */signed char) arr_42 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned short) ((unsigned int) min((var_1), (arr_0 [i_7]))))))));
                                var_31 = ((/* implicit */signed char) var_2);
                                arr_55 [i_17] [i_1] [i_1] [(short)6] [4U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7944020076501461056LL)) ? (((/* implicit */int) arr_51 [i_0] [i_0] [i_1] [i_17])) : (((/* implicit */int) arr_50 [(signed char)4] [(short)2] [i_7] [i_7] [(_Bool)1] [i_7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) arr_53 [(unsigned short)1] [i_16] [3U] [3U] [i_1] [i_0]))))) : ((-(var_0)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)120)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)31980))))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    var_32 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_58 [i_1])))));
                    var_33 -= ((((_Bool) ((2064134245U) <= (var_0)))) ? ((-(((arr_20 [i_0] [(signed char)3] [i_18] [(signed char)3] [i_18]) - (((/* implicit */unsigned int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5786)) ? (-1) : (((/* implicit */int) (unsigned char)59))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26825))) : (((unsigned int) (unsigned short)4603)))));
                }
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-256)), (5299832727191209816LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26800))) : (4553983736794415538ULL)))))) : (min((((/* implicit */int) ((unsigned char) (unsigned short)25321))), ((-(((/* implicit */int) arr_44 [i_1] [(_Bool)1] [2U] [(_Bool)1]))))))));
                    arr_61 [i_0] [i_19] [(signed char)9] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_24 [i_0] [6U] [6U]))))));
                }
                /* vectorizable */
                for (unsigned int i_20 = 2; i_20 < 8; i_20 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) (-(arr_41 [i_0] [i_20 + 1] [(short)0] [i_20] [(_Bool)1])));
                    var_36 = ((/* implicit */signed char) (+(((long long int) (_Bool)1))));
                }
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_0] [(unsigned char)6] [(signed char)3]))) * (arr_56 [i_0] [i_1])));
                    arr_68 [i_21] [i_1] [i_0] [i_21] = ((/* implicit */long long int) var_7);
                }
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) var_1);
    var_39 += ((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (var_5)))) <= (((var_11) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)21229))))) : (var_4))));
}
