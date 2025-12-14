/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155980
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 *= ((/* implicit */_Bool) arr_4 [10]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (var_4) : (var_4)))))));
                arr_7 [i_2] [i_1] = ((/* implicit */unsigned char) ((int) arr_5 [i_0] [i_2] [i_2]));
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_2]))));
                arr_8 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_0]));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_6))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_11 [7U] = ((/* implicit */short) var_6);
            var_17 = ((/* implicit */signed char) arr_2 [i_0] [i_3]);
        }
        var_18 *= ((/* implicit */short) ((_Bool) max((min((arr_6 [i_0] [i_0] [i_0] [(unsigned char)10]), (((/* implicit */unsigned int) var_8)))), (arr_9 [i_0] [1ULL] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 3; i_5 < 7; i_5 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_5)))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_6] [i_0] [i_0]) ? (arr_16 [i_0] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_5] [i_6])))))) : (arr_2 [i_0] [i_5 + 1])))) ? (((/* implicit */unsigned int) max((1306622149), (((/* implicit */int) arr_1 [i_5 + 4]))))) : (((arr_16 [i_0] [i_4] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(_Bool)1] [i_0] [i_5 + 4])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_21 [i_5] [i_5] [i_5 - 3] [i_6] [i_7] = ((/* implicit */_Bool) ((arr_20 [i_5 + 3] [i_5 + 2] [i_5 + 4] [i_5 - 3] [(_Bool)1]) + (((/* implicit */unsigned int) var_8))));
                            var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)-7541)) / (((/* implicit */int) var_6))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 3) 
                        {
                            var_21 -= ((/* implicit */long long int) var_8);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_13 [i_0] [i_5] [i_8]))));
                            arr_26 [i_4] [i_4] [3ULL] [i_4] [4ULL] [i_4] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_23 [i_5] [i_5] [i_8 - 1] [i_5 + 3] [i_6]), (arr_23 [i_5] [9U] [i_8 + 2] [i_5 - 1] [9U]))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)63))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) : (1268991520U)));
                        }
                        for (signed char i_9 = 2; i_9 < 9; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((arr_2 [(short)9] [i_6]) + (var_5)))) ? (((/* implicit */int) (unsigned char)229)) : (max((var_2), (((/* implicit */int) arr_18 [i_0] [i_5] [i_5])))))))))));
                            arr_29 [i_0] [i_4] [i_5] [i_6] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-55)), (min((((/* implicit */unsigned short) (short)-63)), ((unsigned short)61440)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) -1150225488)) ? (((/* implicit */int) (unsigned short)53516)) : (((/* implicit */int) (unsigned short)12020)))), (((/* implicit */int) (signed char)115))))) : (9223372036854775787LL)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_33 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 1071644672)) + (arr_6 [(signed char)9] [i_5 + 1] [i_6] [i_10]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_4] [i_4] [i_5 + 3] [i_10] [i_6])))));
                            arr_34 [i_0] [i_5] [i_0] [i_0] [i_10] = min((((((/* implicit */_Bool) arr_31 [i_5 - 1] [i_5 - 3] [i_5 + 3] [i_5 + 3] [i_5 - 3] [i_5])) ? (min((((/* implicit */unsigned long long int) arr_23 [i_5] [i_4] [i_5 + 4] [i_6] [i_10])), (var_5))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_6] [i_4]) : (arr_27 [0LL] [0LL] [i_5]))))), (max((((var_10) ? (((/* implicit */unsigned long long int) var_7)) : (var_5))), (((/* implicit */unsigned long long int) -7532396782166870153LL)))));
                        }
                        arr_35 [i_5] [i_5] [i_5] [(_Bool)1] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_8) : ((-(var_12)))))), (arr_31 [i_0] [i_4] [i_4] [(unsigned short)8] [i_5] [i_5])));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_39 [i_0] [i_5] [i_5] [i_11] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_18 [i_0] [i_4] [i_4])) ^ (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_4]))))))), (((/* implicit */int) ((short) var_5)))));
                        var_25 -= arr_9 [i_0] [i_5 - 2] [i_11];
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 2; i_13 < 10; i_13 += 4) 
                        {
                            arr_46 [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_5 - 1] [i_13 + 1] [i_13 + 1] [i_13 - 2])), (((((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0]) : (((/* implicit */int) arr_38 [i_0] [i_0] [i_5] [i_12] [i_5])))) / (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (_Bool)1))))))));
                            var_26 = (-(((((/* implicit */_Bool) arr_42 [i_5 + 4] [i_13 - 2] [(_Bool)0] [i_13 - 2])) ? (var_8) : (((/* implicit */int) arr_42 [i_5 + 2] [i_13 - 2] [i_13 - 1] [i_13 - 1])))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_27 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_25 [i_0] [i_5 + 1] [i_0] [i_5 - 3] [i_5 + 3])))));
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-125)), (1973979143))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3284654437U), (((/* implicit */unsigned int) (unsigned short)4080))))) ? (((/* implicit */int) arr_41 [i_4] [i_4] [i_5 - 1] [i_5 + 3] [i_5 - 3] [i_5 - 2])) : (((/* implicit */int) arr_42 [i_12] [i_5 + 2] [i_5 + 3] [i_5 - 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_27 [i_4] [6U] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((143040017) != (((/* implicit */int) (unsigned short)12000)))))) : ((~(arr_16 [i_0] [i_0] [i_14]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))))));
                        }
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_4] [i_12])))))))))))));
                        var_31 = ((/* implicit */unsigned short) var_3);
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */int) ((arr_36 [i_5] [i_5 + 2] [i_15]) - (((((/* implicit */_Bool) arr_36 [i_5] [i_5 + 2] [i_4])) ? (arr_36 [i_5] [i_5 + 4] [i_5]) : (((/* implicit */long long int) var_8))))));
                            var_33 -= ((/* implicit */_Bool) var_9);
                        }
                        for (int i_16 = 1; i_16 < 8; i_16 += 4) 
                        {
                            var_34 = (+(((/* implicit */int) var_0)));
                            arr_55 [7ULL] [i_0] [i_4] [i_5] [i_0] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_5] [i_4] [0] [0] [i_12] [i_16] [i_16 - 1])) && (((/* implicit */_Bool) (~(var_2))))));
                            var_35 = ((/* implicit */unsigned long long int) arr_6 [5] [i_5] [5] [5]);
                            arr_56 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_54 [i_5]);
                        }
                    }
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 4) 
                        {
                            arr_62 [i_5] [i_5] [i_18 - 2] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_17])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))) % (arr_14 [i_5] [i_18]))), (((/* implicit */unsigned int) var_3))));
                            arr_63 [i_5] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_54 [i_5 + 4])) : (((/* implicit */int) arr_54 [i_5 + 1]))))), (max((((/* implicit */long long int) arr_54 [i_5 + 1])), (-6784081515417822978LL)))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_9), (arr_54 [i_18]))), (((/* implicit */signed char) var_0))))) ? (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned short)61440))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11551))) : (((((/* implicit */_Bool) arr_12 [i_17] [i_18])) ? (-67529359148179733LL) : (0LL))))) : (((((/* implicit */_Bool) 12548016074590928855ULL)) ? (max((((/* implicit */long long int) arr_5 [i_5] [i_5] [i_18])), (arr_47 [i_5]))) : (max((arr_47 [i_5]), (((/* implicit */long long int) arr_17 [i_18 - 4] [i_5 + 2] [i_0] [i_0]))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            arr_68 [i_4] [i_17] [i_5] [i_4] |= var_7;
                            arr_69 [i_19 - 1] [(unsigned short)1] [i_5] [i_5] [i_5] [i_4] [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) (_Bool)1)), (-1LL))) ^ (((/* implicit */long long int) arr_16 [i_0] [i_5 + 4] [i_0]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        for (short i_21 = 1; i_21 < 10; i_21 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (arr_53 [i_5 + 3] [i_5] [i_5 + 2] [i_5] [i_21 + 1] [i_21 - 1] [i_21])))) ? (min((((/* implicit */long long int) var_8)), (arr_53 [i_5 + 3] [i_5] [i_5 + 2] [i_5] [i_21 + 1] [i_21 - 1] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))));
                                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) min((((((/* implicit */_Bool) arr_48 [1] [i_4] [1] [i_20] [i_21])) ? (max((((/* implicit */unsigned long long int) 21LL)), (arr_0 [i_4] [i_21]))) : (((/* implicit */unsigned long long int) arr_43 [i_0] [i_5] [i_21 + 1] [10] [i_21])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                                arr_78 [i_0] [i_4] [(_Bool)1] [i_20] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_0] [i_4] [i_5 + 2] [4] [i_4])), (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(arr_2 [i_0] [i_4]))) : (min((arr_0 [i_0] [(_Bool)1]), (var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_45 [6ULL]) : (max((arr_0 [i_0] [1U]), (((/* implicit */unsigned long long int) arr_76 [4LL] [4LL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)21933))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_0]))) != (arr_74 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [(short)6] [i_0] [(short)6])), ((unsigned char)17))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_2)) : (arr_67 [i_0] [(short)0] [(_Bool)0]))))))))));
    }
    for (int i_22 = 2; i_22 < 23; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
        {
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                {
                    arr_87 [i_24] [i_22 + 1] [i_23] [2U] = ((/* implicit */unsigned int) ((var_11) ? ((-(var_8))) : (((/* implicit */int) arr_82 [i_23] [i_24]))));
                    /* LoopNest 2 */
                    for (signed char i_25 = 4; i_25 < 23; i_25 += 4) 
                    {
                        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                        {
                            {
                                arr_92 [i_22] [i_23] [i_24] [i_25] [i_24] = ((/* implicit */unsigned int) var_10);
                                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+(var_4))))));
                                arr_93 [i_22] [i_23] [(unsigned short)19] [i_25] [i_24] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)17)))), (((((/* implicit */_Bool) -5329761586492434107LL)) ? (1649685758) : (((/* implicit */int) (short)63)))))) + (((/* implicit */int) (short)25418))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_89 [20] [23LL] [i_22] [i_22])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_90 [i_22 - 1] [i_22] [i_22] [i_22] [i_22] [i_22] [23LL])) ? (arr_79 [(_Bool)1]) : (((/* implicit */int) arr_82 [i_22] [i_22]))))) : (((((/* implicit */_Bool) (short)-63)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_22]))))))));
    }
    var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (143974450587500544ULL))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)59109))))), (max((var_1), (((/* implicit */unsigned int) var_0))))))));
}
