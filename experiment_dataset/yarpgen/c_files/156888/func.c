/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156888
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_2 [(_Bool)1] [i_3] [i_0]);
                                arr_10 [i_2] [i_4] = min((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_8 [(_Bool)1] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_9 [(unsigned short)5] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_6)) : (var_3)))))), (max((((/* implicit */long long int) ((2824454569780752004ULL) < (((/* implicit */unsigned long long int) -2030531563))))), (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_4))))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [(unsigned short)6] [i_2 + 1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((((/* implicit */int) arr_6 [6] [6])) << (((var_3) + (1434389680))))) : (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))) & (var_10)))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_6 [i_5] [i_1])))));
                    /* LoopSeq 2 */
                    for (int i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((531002291225220652LL) / (531002291225220652LL))))));
                        var_14 += ((var_6) && (arr_7 [i_6 - 3] [i_6 - 1] [i_6 - 3] [i_1]));
                        arr_18 [i_5] [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)10)) ? (4194296) : (((/* implicit */int) var_8)))) != (((/* implicit */int) arr_15 [i_6 - 2] [i_5] [i_6] [i_6 - 1]))));
                        var_15 = ((/* implicit */int) ((var_0) | (((((/* implicit */_Bool) var_9)) ? (arr_12 [i_1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) -4194284))))));
                    }
                    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_17 [i_7] [i_0] [3LL] [i_0]))))) : (var_0)));
                        var_16 = ((/* implicit */int) -531002291225220652LL);
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_17 |= ((/* implicit */signed char) var_5);
                            arr_28 [i_0] [i_1] [i_5] [i_7] [i_5] = ((/* implicit */signed char) arr_4 [i_0] [i_5] [i_0]);
                            var_18 = arr_4 [i_5] [i_5] [i_8];
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4194296)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_8))))));
                            var_20 = ((/* implicit */int) ((signed char) 3937132772622137446LL));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((531002291225220667LL) / (-531002291225220647LL)));
                            var_22 = ((/* implicit */_Bool) min((var_22), ((_Bool)0)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                arr_40 [i_1] [i_5] = arr_9 [i_0] [i_0] [i_5] [i_0] [i_12];
                                var_23 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_22 [i_11])))) | ((-(arr_29 [i_0] [i_0] [i_0] [3ULL] [i_12] [i_0] [i_11])))));
                                var_24 = ((/* implicit */signed char) arr_37 [i_0] [i_0] [i_0] [i_5] [i_0]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) var_8);
                    arr_41 [i_5] = arr_8 [(signed char)0] [i_5] [i_1];
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        {
                            arr_48 [i_14] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((arr_44 [i_0] [(short)2] [i_0] [i_0]) << (((((var_3) ^ (((/* implicit */int) (short)-1)))) - (1434389622))))));
                            arr_49 [i_0] [(signed char)4] [i_13] [i_14 - 1] [(_Bool)0] |= ((/* implicit */short) (+((-(((/* implicit */int) (short)-16384))))));
                        }
                    } 
                } 
                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)49632)) << (((((/* implicit */int) var_7)) - (92)))))));
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    var_27 = min((-531002291225220644LL), (((/* implicit */long long int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */short) arr_8 [i_0] [i_15] [i_15]);
                                var_29 -= ((((/* implicit */int) var_7)) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) || ((!(((/* implicit */_Bool) var_0))))))));
                                var_30 &= ((/* implicit */short) (-(((/* implicit */int) arr_53 [(signed char)2] [i_1] [i_15] [i_16 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_18 = 2; i_18 < 10; i_18 += 4) /* same iter space */
                    {
                        arr_60 [i_15] [i_15] [i_1] [i_15] [i_15] = min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((824978165779235881LL) ^ (((/* implicit */long long int) arr_58 [i_1])))))), (var_2));
                        var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_20 [i_0] [i_15])) ? (((/* implicit */unsigned long long int) arr_50 [i_18 + 2] [i_18 + 2] [i_18 - 2])) : (arr_56 [i_0] [i_1] [i_18]))), (((/* implicit */unsigned long long int) min((arr_47 [i_15] [i_15] [i_18] [i_18]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)66))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 2; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        var_32 |= ((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned short)7]);
                        var_33 = ((/* implicit */_Bool) ((int) -468830294));
                    }
                    /* LoopNest 2 */
                    for (long long int i_20 = 2; i_20 < 11; i_20 += 1) 
                    {
                        for (long long int i_21 = 2; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_34 = (-(-1378184030));
                                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) var_7))));
                                var_36 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-66)))) | (arr_37 [i_20 - 1] [i_1] [i_15] [i_1] [i_21 + 1])));
                            }
                        } 
                    } 
                    arr_69 [i_0] [i_1] [i_15] [i_15] = ((/* implicit */long long int) (-(arr_21 [i_0] [i_15])));
                }
                for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    var_37 += ((((((/* implicit */_Bool) -7802949814633769871LL)) || (((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_3)))))) && (((/* implicit */_Bool) var_3)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        for (short i_24 = 0; i_24 < 12; i_24 += 3) 
                        {
                            {
                                arr_79 [i_24] [i_23] [i_24] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -580582750)) ? (((/* implicit */long long int) -2030531563)) : (1068476421527975699LL)));
                                arr_80 [i_0] [i_24] [i_22] = ((/* implicit */unsigned short) arr_12 [i_23] [i_1] [i_1]);
                                arr_81 [i_22] [i_24] [4ULL] [i_23] [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_22] [i_22] [i_24] [i_22] [i_1])) && (var_6)))))) - (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23398))))));
                                var_38 *= ((/* implicit */unsigned long long int) arr_66 [i_1] [i_22] [i_22]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_25 = 2; i_25 < 11; i_25 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            arr_88 [i_0] [i_0] [i_22] [(_Bool)0] = ((_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_15 [i_0] [i_25] [i_22] [i_25 - 2])) : (((/* implicit */int) arr_82 [i_0] [i_0] [i_0] [i_0]))));
                            var_39 -= arr_51 [i_1] [i_25];
                            arr_89 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(arr_55 [i_0] [i_25])));
                            var_40 = ((/* implicit */_Bool) max((arr_24 [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_1] [i_25 - 2] [i_25 - 2]), (((2030531563) / (((/* implicit */int) (signed char)115))))));
                            var_41 *= ((/* implicit */int) max((min(((short)4556), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)1))));
                        }
                        for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_73 [i_25 - 1] [i_25 - 2] [i_25 - 2] [i_25 + 1] [i_25 + 1] [i_25 - 2])) - (((/* implicit */int) (signed char)115))))), (arr_30 [i_25] [i_25] [i_22] [i_25] [i_27]))))));
                            var_43 = (((((!(((/* implicit */_Bool) (short)-9960)))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (var_4) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_27] [i_27]))))) ^ (var_5));
                            var_44 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_44 [i_0] [i_25] [i_25 - 2] [i_25])) && (((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_25 + 1] [i_25]))))));
                            arr_92 [(_Bool)1] [(_Bool)1] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) arr_87 [(_Bool)1] [i_1] [i_22] [i_1] [i_1]);
                        }
                        /* vectorizable */
                        for (signed char i_28 = 0; i_28 < 12; i_28 += 4) 
                        {
                            var_45 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_86 [i_0] [i_25 - 1] [i_22] [i_0] [i_28] [(signed char)6] [i_28])) < (var_3)));
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10)))))) + ((+(var_5))))))));
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_47 ^= ((/* implicit */short) arr_6 [i_0] [i_0]);
                            arr_97 [(_Bool)1] [i_1] [i_29] [i_25] [i_29] [i_25] = var_1;
                        }
                        var_48 = (~(max((var_9), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (7340505619373982830LL)))))));
                        var_49 ^= max((((/* implicit */long long int) (signed char)-125)), (var_5));
                        var_50 &= ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_10)) ? (-7340505619373982826LL) : (var_0))), (((/* implicit */long long int) (unsigned short)13290)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_67 [i_0] [i_1] [i_22] [i_1] [i_0])), (arr_83 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_1] [1] [i_22] [i_25 + 1]))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    }
                    var_51 = ((/* implicit */unsigned long long int) 8295574262271918706LL);
                }
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned short) ((var_10) == (((/* implicit */unsigned long long int) ((-2030531556) | (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)1)) : (485091024))))))));
    var_53 = ((/* implicit */_Bool) 2030531573);
}
