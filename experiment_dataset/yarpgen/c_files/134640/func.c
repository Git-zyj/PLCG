/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134640
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) var_15);
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) -2147483646))));
                    var_20 = max((arr_1 [i_0 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0 + 3] [i_1 + 1])) != (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */int) max((arr_10 [i_1 - 1] [i_0 + 1]), (arr_10 [i_1 - 1] [i_0 + 1])))) >= (max((((/* implicit */int) (signed char)25)), (var_8)))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) (signed char)-16);
                        arr_15 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) > (arr_5 [i_1 - 2] [i_4 - 1]))));
                    }
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        arr_21 [i_6] [i_6] [i_2] [i_6] [6ULL] = ((/* implicit */signed char) min((arr_7 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 3] [i_6]), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_22 [i_0 - 1] [i_0 - 1] [i_0] [i_6] [i_0] = var_18;
                        arr_23 [i_0 - 1] [i_6] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = var_6;
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2]);
                        arr_27 [i_7] = 7704381065914608893ULL;
                        var_23 = ((/* implicit */_Bool) var_18);
                        var_24 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0]);
                    }
                    var_25 = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_5]);
                    var_26 = ((/* implicit */unsigned char) var_5);
                    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_1] [i_1])) & (((/* implicit */int) arr_10 [i_1] [i_1])))) | (arr_13 [i_1] [i_1] [i_1 - 1])));
                    arr_28 [i_0] [i_0 - 1] [i_0 + 1] = var_4;
                }
                var_28 = ((/* implicit */_Bool) (signed char)-16);
                var_29 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)63));
            }
            for (int i_8 = 3; i_8 < 11; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 3; i_9 < 14; i_9 += 3) 
                {
                    arr_33 [i_0] [i_8] [i_1] [i_1] [i_9 - 3] = ((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_1] [i_8 - 3]);
                    var_30 = arr_32 [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0];
                }
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_36 [i_0] [i_0] [i_8] [i_0] [i_10] = ((/* implicit */unsigned char) ((int) ((unsigned long long int) 6832208470398038630ULL)));
                    arr_37 [i_8] [11] = ((/* implicit */_Bool) -1102650964);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((16091060364426723869ULL) | (((/* implicit */unsigned long long int) -952206242))))) || (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_1 + 1]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 2) 
                {
                    var_32 = 9409798789968641193ULL;
                    arr_40 [i_8] [i_8] = min((6227124434873348761ULL), (var_0));
                }
                var_33 = arr_19 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_8] [i_1] [i_1];
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 4; i_13 < 14; i_13 += 3) 
                    {
                        {
                            arr_46 [i_8] [i_12] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */int) ((unsigned long long int) arr_20 [i_8] [i_1] [i_1 - 1] [i_1] [i_1]));
                            arr_47 [i_8] [i_1] [i_8] [i_8] [i_13 - 4] = ((/* implicit */int) ((signed char) arr_4 [i_1 + 1] [i_1 + 1] [i_12]));
                        }
                    } 
                } 
                var_34 = (unsigned char)146;
            }
            for (int i_14 = 3; i_14 < 13; i_14 += 1) 
            {
                var_35 = var_8;
                arr_51 [i_0 + 3] [i_1] [i_0 + 3] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1]))) >> (((max((arr_7 [i_0 + 1] [i_0 + 3] [i_1] [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_0 + 1])))) - (14980258286959440760ULL)))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 2; i_15 < 14; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 3; i_16 < 13; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */_Bool) arr_6 [i_15] [i_15] [i_1 + 1] [i_0 + 1]);
                        var_37 = var_6;
                    }
                    /* LoopSeq 3 */
                    for (signed char i_17 = 2; i_17 < 14; i_17 += 2) /* same iter space */
                    {
                        var_38 = arr_32 [i_0] [3] [3] [i_0] [3];
                        arr_61 [i_0 + 2] [i_0] [i_14] [(signed char)7] [(signed char)10] = ((int) min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)15))), (arr_29 [i_14])));
                        var_39 = ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                    }
                    for (signed char i_18 = 2; i_18 < 14; i_18 += 2) /* same iter space */
                    {
                        arr_64 [i_0] [i_14] [i_14] [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned char) 2085445102586992189ULL);
                        var_40 = ((/* implicit */unsigned char) var_9);
                    }
                    for (signed char i_19 = 2; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned char) 2954492680782308841ULL);
                        var_42 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) -1)) >= (14624207674270796320ULL))));
                        var_43 = ((/* implicit */unsigned char) (signed char)15);
                        var_44 = min((arr_63 [i_0] [i_1] [i_1 + 1] [i_15] [i_14] [i_15 - 2]), (((((/* implicit */int) (unsigned char)153)) / (arr_63 [i_0] [i_0 + 3] [i_1 + 1] [i_1] [i_14] [i_0 + 3]))));
                    }
                    arr_69 [i_14] = var_7;
                    arr_70 [i_0 + 3] [i_0 + 3] [i_14] [i_0] = 14624207674270796320ULL;
                }
            }
            var_45 = ((/* implicit */unsigned char) var_11);
        }
        for (unsigned char i_20 = 2; i_20 < 14; i_20 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
            {
                arr_75 [i_20] [i_21] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)241)) & (((/* implicit */int) (unsigned char)70))));
                var_46 = ((/* implicit */unsigned char) ((6196245765074294893ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))));
                arr_76 [i_21] [i_20] [i_20] [i_0] = ((/* implicit */int) (unsigned char)255);
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 15; i_22 += 3) 
            {
                var_47 = ((/* implicit */signed char) var_1);
                arr_79 [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) -952206233);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 3; i_24 < 12; i_24 += 3) 
                    {
                        {
                            arr_86 [i_20] [i_0] [(unsigned char)5] [i_22] [i_20] [i_20] = var_17;
                            var_48 = ((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_0 - 1] [i_24 - 3] [i_24 + 2] [i_20 + 1] [i_0 - 1] [i_0 - 1]));
                            var_49 = ((/* implicit */unsigned char) ((int) 952206241));
                        }
                    } 
                } 
                var_50 = ((unsigned char) arr_17 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]);
            }
            /* LoopNest 2 */
            for (unsigned char i_25 = 0; i_25 < 15; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 15; i_26 += 3) 
                {
                    {
                        arr_91 [i_0] [i_20] [i_25] [i_0] = ((/* implicit */int) ((unsigned char) -1));
                        arr_92 [i_20] [i_20] [i_20] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_26] [i_0 - 1]);
                        var_51 = ((/* implicit */signed char) var_8);
                    }
                } 
            } 
        }
        for (unsigned char i_27 = 2; i_27 < 14; i_27 += 1) /* same iter space */
        {
            arr_95 [i_27] = ((/* implicit */unsigned long long int) arr_56 [i_27 + 1] [i_27 + 1] [i_27] [i_27 - 2] [i_27]);
            arr_96 [i_27 + 1] = 4005018911204499656ULL;
            var_52 = var_7;
            var_53 = ((/* implicit */unsigned char) 0ULL);
        }
        var_54 = ((/* implicit */_Bool) arr_87 [i_0 - 1] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (int i_28 = 3; i_28 < 10; i_28 += 1) 
    {
        for (signed char i_29 = 1; i_29 < 13; i_29 += 3) 
        {
            for (int i_30 = 1; i_30 < 11; i_30 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 0; i_31 < 14; i_31 += 2) 
                    {
                        var_55 = var_6;
                        arr_107 [i_28] [i_28] [i_30] = ((/* implicit */unsigned long long int) -1717148883);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_32 = 0; i_32 < 14; i_32 += 3) 
                    {
                        var_56 = ((/* implicit */unsigned long long int) ((unsigned char) arr_94 [i_30 + 1] [i_29 - 1]));
                        arr_110 [i_28] [i_28] = ((/* implicit */unsigned char) arr_1 [i_28 + 2]);
                        /* LoopSeq 1 */
                        for (unsigned char i_33 = 1; i_33 < 13; i_33 += 1) 
                        {
                            var_57 = ((unsigned char) arr_103 [i_28 + 2] [i_28 + 4] [i_28 - 1]);
                            arr_113 [i_28] = ((/* implicit */unsigned long long int) arr_63 [i_33 + 1] [i_28] [i_33] [i_28 - 3] [i_28] [i_28 - 3]);
                            arr_114 [i_28] = ((/* implicit */unsigned char) arr_12 [i_28] [i_29] [i_30] [i_32] [i_33] [i_33]);
                        }
                    }
                    for (unsigned char i_34 = 3; i_34 < 10; i_34 += 4) 
                    {
                        arr_117 [i_28] [i_28] [i_28] [i_28] = ((/* implicit */_Bool) 12250498308635256747ULL);
                        arr_118 [i_28] [i_28] [i_28 + 3] [i_28 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-110)), (6ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_35 = 0; i_35 < 14; i_35 += 2) 
                        {
                            arr_122 [i_28] [i_29] [i_28] [i_34] = arr_54 [i_34 + 3] [i_34] [i_34] [i_30 + 3] [i_29 + 1] [(_Bool)1];
                            var_58 = ((/* implicit */signed char) ((unsigned char) arr_73 [i_29 + 1] [i_29 - 1] [i_29 + 1] [i_29 - 1]));
                            arr_123 [i_28] [i_28] [i_28] [i_29] [i_30] [i_34] [i_35] = ((/* implicit */unsigned long long int) -2147483632);
                            var_59 = ((/* implicit */unsigned long long int) arr_111 [i_35] [i_34 - 1] [i_29] [i_29] [i_28]);
                        }
                    }
                    for (int i_36 = 0; i_36 < 14; i_36 += 1) 
                    {
                        var_60 = ((/* implicit */_Bool) ((unsigned char) -295341680));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_37 = 0; i_37 < 14; i_37 += 2) 
                        {
                            var_61 = ((/* implicit */int) 2679670825630458282ULL);
                            arr_130 [i_28] [i_28] [i_28] [i_28] = (((_Bool)0) || (((/* implicit */_Bool) var_10)));
                            var_62 = ((/* implicit */int) (unsigned char)187);
                            arr_131 [i_28] [i_28] [i_30 - 1] [i_37] = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
                        }
                        var_63 = ((/* implicit */unsigned long long int) var_16);
                        /* LoopSeq 2 */
                        for (int i_38 = 3; i_38 < 13; i_38 += 2) 
                        {
                            var_64 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_39 [i_28] [i_28])));
                            arr_136 [i_28] [i_29] [i_30] [i_36] [1ULL] [i_36] = ((/* implicit */unsigned char) -2147483633);
                            var_65 = 12250498308635256722ULL;
                            arr_137 [i_28] [i_36] [i_30] [i_28] [i_28] = var_6;
                        }
                        for (_Bool i_39 = 0; i_39 < 0; i_39 += 1) 
                        {
                            var_66 = max((((var_12) / (6196245765074294868ULL))), (((/* implicit */unsigned long long int) ((_Bool) 2147483641))));
                            arr_140 [i_28] [i_36] [i_30] [i_29] [i_28] = ((unsigned long long int) 13273671365634221991ULL);
                            var_67 = ((int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)254))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_40 = 3; i_40 < 13; i_40 += 1) 
                        {
                            var_68 = (unsigned char)77;
                            var_69 = ((/* implicit */unsigned char) var_2);
                            arr_145 [i_28] [i_29] [i_29] [i_29 - 1] [i_29] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_14)) >= (arr_39 [8] [i_29])));
                        }
                    }
                }
            } 
        } 
    } 
    var_70 = ((/* implicit */unsigned char) ((_Bool) min((var_7), (var_3))));
}
