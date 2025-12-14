/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161868
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_2)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)212)), (var_0)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
        var_21 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) var_18);
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_22 = ((unsigned short) ((int) ((((/* implicit */int) (unsigned char)43)) << (((((/* implicit */int) (unsigned char)212)) - (189))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned int) arr_14 [i_5] [i_0] [i_3] [i_2] [i_0] [i_0])))));
                            var_24 = ((/* implicit */long long int) var_17);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) arr_3 [13] [i_2] [i_3]);
                var_26 = ((/* implicit */unsigned char) var_10);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_13))));
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 24; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_7] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) var_14));
                            var_28 = arr_19 [i_6] [i_6];
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) var_17);
                            var_30 ^= ((/* implicit */signed char) arr_22 [i_0] [i_2] [i_6] [i_7] [0] [i_6 - 1]);
                            arr_29 [i_0] [i_6] [i_6 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) > (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((2031616), (((/* implicit */int) (unsigned short)52198)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                        var_31 = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_34 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_0] [i_0] [i_7] [i_10]))) * (arr_22 [i_0] [i_2] [i_2] [i_7] [i_7] [i_10]))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10] [i_2] [i_2] [i_2] [1LL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_0] [i_2] [i_6] [i_7]))))) & (min((var_12), (((/* implicit */unsigned int) var_2)))))))));
                            var_32 &= ((/* implicit */unsigned int) max((((/* implicit */int) ((max((((/* implicit */long long int) var_16)), (1025469576162203883LL))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))), (((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)43)))) * (((/* implicit */int) ((((/* implicit */long long int) var_9)) < (-2373223284618670439LL))))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                            arr_37 [i_0] [i_6] [i_6 - 2] [i_6 - 2] [i_7] [i_11] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_11] [i_7] [i_6 - 2] [i_2] [i_0]))) - (-1LL)));
                        }
                        for (unsigned long long int i_12 = 4; i_12 < 22; i_12 += 4) 
                        {
                            arr_40 [i_6] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (18446744073709551615ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_6 + 1] [i_12]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 3109415783U)) ? (var_17) : (((/* implicit */int) var_13))))))));
                            var_34 = ((/* implicit */long long int) ((((arr_3 [i_12 - 1] [i_6 - 2] [i_6 - 1]) ^ (arr_3 [i_12 + 3] [i_6 - 2] [i_6 - 2]))) >> (((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_12 - 2] [i_6 + 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 - 1]))))) - (2054305445U)))));
                            var_35 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)11806)), (1245860358)));
                        }
                        arr_41 [i_7] [i_6 - 1] [i_7] [i_7] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_35 [i_0] [i_2] [i_2] [(signed char)1] [i_6 - 2] [i_0] [i_7]);
                    }
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
        {
            var_36 = ((int) (+(((/* implicit */int) var_16))));
            var_37 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_7) != (arr_18 [i_0]))))));
            var_38 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) arr_39 [i_13] [i_13] [i_0] [17] [i_0] [i_0])) : (562949953421311LL)))));
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)64364)) ? (((/* implicit */unsigned int) var_17)) : (var_12))))))));
            arr_44 [i_0] [i_13] [i_0] &= arr_27 [(signed char)13] [i_0] [i_0] [i_0] [i_0] [i_0];
        }
        for (unsigned short i_14 = 1; i_14 < 24; i_14 += 1) 
        {
            var_40 += ((((/* implicit */int) ((unsigned short) (~(var_10))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0] [i_14]))) & (var_4))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    var_41 += ((/* implicit */unsigned char) var_15);
                    var_42 = ((/* implicit */long long int) ((arr_1 [i_15 + 2]) << (((1933280365087685002LL) - (1933280365087684977LL)))));
                    arr_53 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [9] [i_0] [i_0] [i_14] [i_15] [i_16])) ? (((/* implicit */long long int) arr_49 [i_14 - 1])) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_14 + 1] [i_15] [i_15]))) & (arr_12 [i_0] [i_0])))));
                }
                for (int i_17 = 2; i_17 < 23; i_17 += 2) 
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) > (((/* implicit */int) (signed char)127))));
                    var_44 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)101)) && (((/* implicit */_Bool) arr_51 [i_17] [i_14 - 1] [i_17] [i_14 - 1])))));
                    arr_58 [i_14] [i_14] [i_14] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
                }
                var_45 = var_13;
                arr_59 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_14]);
                /* LoopSeq 1 */
                for (unsigned char i_18 = 4; i_18 < 23; i_18 += 4) 
                {
                    var_46 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_18 - 2] [i_14] [i_0] [i_14] [i_14] [i_14] [i_0])) || (((/* implicit */_Bool) arr_21 [i_14 - 1] [i_18] [i_0] [i_15] [i_14 - 1] [i_0]))))) == (((((/* implicit */int) var_8)) + (var_17)))));
                    arr_62 [i_14] = ((/* implicit */_Bool) ((int) ((signed char) (short)0)));
                    arr_63 [i_0] [i_14] [i_0] [i_14] [i_14] = ((/* implicit */_Bool) var_18);
                    var_47 = ((/* implicit */unsigned int) ((_Bool) arr_54 [i_15] [i_18 + 1] [i_18 + 1] [i_18] [i_18] [i_18 - 1]));
                }
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2199023255552LL)) ? (((/* implicit */int) ((signed char) (signed char)-19))) : (((/* implicit */int) (short)0))));
                            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_17)) : (((arr_33 [i_14 + 1] [21U] [i_19 - 1] [i_19 - 1] [i_21] [i_21] [i_21]) + (arr_33 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_19 - 1] [i_21] [i_14 - 1] [i_21]))))))));
                        }
                    } 
                } 
                arr_71 [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)15);
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_22 = 1; i_22 < 23; i_22 += 3) 
        {
            arr_75 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_22] [i_22] [i_22] [i_22]))) ^ (((((((/* implicit */_Bool) arr_54 [i_0] [i_0] [12] [i_0] [i_0] [i_22])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13337))))) + (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_22])) ? (arr_33 [i_0] [i_0] [i_0] [i_22] [i_0] [i_0] [i_22]) : (((/* implicit */long long int) 422381996))))))));
            arr_76 [i_22] [i_22] = ((/* implicit */_Bool) ((arr_36 [i_0] [i_22] [i_0] [i_0] [i_0] [i_22 + 1] [i_22 + 2]) | (min((arr_36 [i_22] [i_22] [i_22] [i_0] [i_0] [i_22] [i_22 + 2]), (arr_36 [i_0] [i_22 + 1] [i_0] [i_0] [i_22] [i_22] [i_22 - 1])))));
        }
        for (signed char i_23 = 1; i_23 < 23; i_23 += 4) 
        {
            var_50 = ((((/* implicit */_Bool) (unsigned short)870)) ? (((/* implicit */int) (unsigned short)1171)) : (((/* implicit */int) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                for (signed char i_25 = 2; i_25 < 24; i_25 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_26 = 2; i_26 < 24; i_26 += 4) 
                        {
                            var_51 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) + (min((((/* implicit */long long int) var_18)), (arr_18 [i_24]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_18)), (((arr_45 [i_0]) << (((((/* implicit */int) var_8)) - (64165))))))))));
                            var_52 = ((/* implicit */signed char) ((min((((/* implicit */int) ((unsigned char) (unsigned short)1172))), (((var_2) / (((/* implicit */int) var_8)))))) / (((((/* implicit */int) ((_Bool) (signed char)-54))) & (((/* implicit */int) arr_65 [i_25 - 2] [i_24]))))));
                            var_53 = (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_1)))))));
                        }
                        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 4) 
                        {
                            var_54 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_24] [i_25])))));
                            var_55 = ((/* implicit */long long int) (((+(0U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1377830236U))))))));
                            arr_92 [i_0] [i_23 + 2] [i_24] [i_24] [i_25] [i_27] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_27] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned short)52198))))) ? (((arr_33 [i_27] [i_0] [i_0] [i_23] [i_23 + 1] [i_0] [i_0]) / (((/* implicit */long long int) arr_25 [i_0] [i_23] [i_24] [i_27] [i_24] [i_27])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (-89181531) : (((/* implicit */int) (!(((/* implicit */_Bool) 9549640667203143519ULL)))))))));
                        }
                        var_56 = ((/* implicit */signed char) var_13);
                        var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((min((133991195U), (((/* implicit */unsigned int) arr_78 [3LL] [i_25 - 2])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_84 [i_0] [i_0] [i_0])) ? (var_18) : (((/* implicit */int) var_16))))))))))));
                        var_58 = ((/* implicit */int) var_0);
                        arr_93 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) ^ (8897103406506408096ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) 3182412286U))))))));
                    }
                } 
            } 
            arr_94 [3LL] = ((/* implicit */long long int) var_16);
        }
        for (unsigned int i_28 = 1; i_28 < 24; i_28 += 3) 
        {
            var_59 ^= ((/* implicit */_Bool) (~(max((((/* implicit */int) var_16)), (1089252033)))));
            var_60 = ((/* implicit */long long int) ((_Bool) arr_22 [i_28] [i_28] [i_28] [i_28] [i_28 + 1] [i_28 + 1]));
            arr_98 [i_0] = ((long long int) (short)0);
            var_61 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) var_4)), (35465847065542656LL))))) ? (((/* implicit */long long int) min((arr_32 [i_28] [i_28] [i_28] [i_0] [i_0]), (((/* implicit */unsigned int) var_3))))) : (var_7)));
            /* LoopSeq 2 */
            for (unsigned short i_29 = 1; i_29 < 23; i_29 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_30 = 1; i_30 < 24; i_30 += 3) 
                {
                    for (int i_31 = 0; i_31 < 25; i_31 += 4) 
                    {
                        {
                            var_62 = ((/* implicit */long long int) min((282222607), (((/* implicit */int) (unsigned short)27123))));
                            var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_30] [i_28] [i_30 + 1] [i_30] [i_30 + 1] [i_28 + 1] [i_28])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_28] [i_28 - 1] [i_28] [i_30] [i_30 - 1] [i_28 - 1] [i_28 - 1])) ? (((/* implicit */int) arr_68 [i_0] [i_0] [i_29 + 1] [i_0] [i_30 - 1])) : (((/* implicit */int) (unsigned short)58827)))))));
                            var_64 &= ((/* implicit */signed char) ((unsigned short) (+(89181530))));
                            var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_56 [i_28 + 1] [i_28 - 1] [i_29 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((arr_70 [i_28 + 1] [i_28]) ? (((/* implicit */int) arr_70 [i_28 + 1] [i_28])) : (((/* implicit */int) arr_70 [i_28 + 1] [i_28 + 1])))))));
                        }
                    } 
                } 
                var_66 = arr_64 [i_0] [i_0] [i_0] [i_0];
                var_67 = ((/* implicit */_Bool) min((var_67), ((_Bool)1)));
            }
            for (unsigned char i_32 = 0; i_32 < 25; i_32 += 2) 
            {
                var_68 = ((/* implicit */long long int) min((var_68), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (var_2)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_19)))) == (((/* implicit */int) ((_Bool) (+(var_17))))))))));
                var_69 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)79)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_18)));
            }
        }
    }
    var_70 = ((/* implicit */long long int) var_6);
}
