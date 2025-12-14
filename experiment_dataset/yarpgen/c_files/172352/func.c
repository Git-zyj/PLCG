/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172352
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
    var_19 |= var_11;
    var_20 = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) (signed char)103)), (var_10))) - (7681008479171323630ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)103))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (signed char)103);
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((2147483629) | (((/* implicit */int) (signed char)89))));
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (signed char)-118)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2935)))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2935)) + (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-4))));
                        arr_12 [i_1] [i_2] = ((/* implicit */unsigned long long int) -1056306616);
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (var_10) : (11308647725280276754ULL))) & (((/* implicit */unsigned long long int) arr_6 [i_2 + 1]))));
                    }
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                        arr_16 [i_5] [i_2] [i_5] [i_2] [i_5] [i_5] = ((/* implicit */int) var_15);
                    }
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) arr_8 [i_3 - 1] [i_2] [i_2] [i_2 + 1] [i_1] [i_1]));
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */short) var_3);
                        var_27 = ((/* implicit */signed char) (~((-2147483647 - 1))));
                        arr_21 [i_3] [i_2] = (((~(-2147483647))) >= (((/* implicit */int) ((arr_4 [i_1] [i_3] [i_3]) || (((/* implicit */_Bool) var_15))))));
                    }
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25383))))) >= (((var_7) ? (((/* implicit */int) (short)-2935)) : (var_11)))));
                }
                var_29 = ((/* implicit */int) 755412663U);
                arr_22 [i_0] [i_2] [i_0] = (~(((/* implicit */int) (short)-13612)));
            }
            var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1]))) > (((((/* implicit */_Bool) arr_9 [10] [i_1] [i_0] [10])) ? (((/* implicit */unsigned int) 554352462)) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            arr_23 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)176))));
            arr_24 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) 536870911U)) > (3760265536777706782ULL)))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_7] [i_0] [i_7] [i_10] [i_0] = ((((/* implicit */_Bool) (-(arr_35 [i_0] [i_0] [i_8] [i_8] [i_7] [i_0])))) ? (((/* implicit */int) ((short) 726499608217702025ULL))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_2)) : (var_11))));
                            arr_37 [i_0] [i_0] [i_0] [i_9] [i_0] &= ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (short)7359)))));
                        }
                    } 
                } 
                arr_38 [2ULL] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) + (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) + (var_6))) : (((/* implicit */unsigned long long int) (-(var_1)))));
            }
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        arr_44 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_26 [i_0] [i_11] [i_12]);
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15282)))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((8337594670854377246LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_7] [i_7])))));
                        arr_45 [i_0] [i_12] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)51))));
                        arr_46 [i_0] [i_0] [i_0] [i_7] [(_Bool)1] [(short)13] = ((/* implicit */short) 0U);
                    }
                } 
            } 
            arr_47 [i_0] [i_7] [i_7] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_8))))));
        }
        for (signed char i_13 = 3; i_13 < 16; i_13 += 3) 
        {
            var_33 = ((/* implicit */_Bool) (signed char)107);
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-13629))));
                arr_53 [i_0] [i_13] [i_14] = ((/* implicit */signed char) arr_52 [i_0] [i_0] [i_0]);
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */int) arr_2 [i_13 - 1])) : (((/* implicit */int) (short)-7363))));
            }
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                arr_56 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_60 [i_0] [i_0] [i_13] [i_15] [i_15] = ((/* implicit */int) ((((unsigned long long int) (signed char)0)) * (((4ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7360)))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13 + 1] [i_15] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_42 [i_13 + 1] [i_0]))));
                    var_37 = ((((/* implicit */_Bool) (short)-25383)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30182)));
                    arr_61 [(unsigned char)7] [(unsigned char)7] [i_15] [i_16 + 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_16))))));
                }
            }
        }
        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1254411713)) ? (1217484696U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_0] [i_17] [i_0])))));
            var_39 = ((/* implicit */int) (_Bool)1);
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_2))))))));
            arr_64 [i_17] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_27 [i_0] [i_0] [i_17])) + (106)))))) > (((18446744073709551615ULL) << (((8160U) - (8134U)))))));
        }
        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))))) ? (((((/* implicit */_Bool) 2091669440U)) ? (1254411692) : (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            arr_67 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) > (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */int) arr_17 [i_0] [(signed char)16] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_16))));
            /* LoopSeq 1 */
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 3; i_20 < 17; i_20 += 3) 
                {
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_19])))))))));
                    arr_73 [i_0] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) var_5);
                }
                arr_74 [i_19] = ((/* implicit */long long int) var_7);
                arr_75 [i_19] = ((/* implicit */unsigned int) (~(-2245205640521304241LL)));
            }
        }
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_78 [i_21] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (_Bool)1)), (arr_49 [i_21]))), (((arr_49 [i_21]) / (arr_49 [3ULL])))));
        var_43 = max((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)1)))))), (max((((((/* implicit */int) arr_0 [i_21] [10U])) << (((/* implicit */int) (unsigned char)12)))), (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_8)))))));
        arr_79 [i_21] [i_21] = ((/* implicit */int) (~(422674596912535490ULL)));
        arr_80 [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_69 [i_21] [i_21] [i_21] [i_21])), (((((/* implicit */_Bool) arr_2 [i_21])) ? (var_6) : (((/* implicit */unsigned long long int) var_18))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_62 [i_21] [i_21] [i_21])) : (((/* implicit */int) (unsigned char)201)))) >> ((((_Bool)1) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) 712036373)) ? (((/* implicit */unsigned int) 712036372)) : (((2203297864U) << (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (signed char i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    {
                        arr_90 [i_25] [i_24] |= ((/* implicit */short) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) arr_69 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_69 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1])))) : (((/* implicit */int) max((arr_68 [i_23] [i_23 - 1] [i_23]), (arr_68 [i_23] [i_23 - 1] [i_23 - 1]))))));
                        var_44 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_16)), ((short)17))))))), (var_1)));
                        var_45 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))))), (min((((3758096384U) % (((/* implicit */unsigned int) 712036372)))), (max((arr_84 [i_23] [i_24]), (((/* implicit */unsigned int) (signed char)102))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_26 = 2; i_26 < 10; i_26 += 4) 
            {
                var_46 = ((/* implicit */short) max(((unsigned char)224), (((/* implicit */unsigned char) (signed char)-18))));
                var_47 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((long long int) var_18)) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_34 [i_26] [i_23] [i_26])), (((var_18) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))))))));
                var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 9082644652757137408ULL)) ? ((~(((/* implicit */int) (signed char)-19)))) : (((/* implicit */int) arr_92 [i_22] [i_23] [i_22] [i_22])))) % (((int) (unsigned char)11))));
            }
            /* vectorizable */
            for (signed char i_27 = 0; i_27 < 12; i_27 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                {
                    arr_98 [i_27] [i_23 - 1] [i_27] [i_27] &= ((/* implicit */short) ((unsigned int) arr_9 [i_23 - 1] [i_23 - 1] [i_27] [i_28 - 1]));
                    var_49 ^= ((/* implicit */int) arr_95 [i_22] [i_23] [i_27]);
                    arr_99 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_22])) ? (arr_40 [i_22]) : (arr_40 [i_22])));
                }
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) /* same iter space */
                {
                    var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_22] [i_22] [i_22])))))) % (var_1)));
                    var_51 = ((/* implicit */long long int) arr_65 [i_22] [i_22]);
                }
                var_52 = ((/* implicit */unsigned long long int) ((0) * (((((((/* implicit */int) var_14)) + (2147483647))) << (((arr_97 [i_27] [i_27] [i_27] [i_27]) - (858272077)))))));
                /* LoopSeq 1 */
                for (short i_30 = 0; i_30 < 12; i_30 += 2) 
                {
                    var_53 = ((/* implicit */short) arr_68 [i_22] [i_27] [i_30]);
                    arr_105 [i_22] [i_22] [i_23] [i_22] [i_27] [i_30] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) | (((((/* implicit */unsigned long long int) var_1)) * (var_6)))));
                    arr_106 [i_22] [i_23] [i_22] [i_27] [i_27] = ((/* implicit */_Bool) var_15);
                }
                /* LoopSeq 1 */
                for (short i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    var_54 = ((/* implicit */short) var_3);
                    arr_110 [i_22] [i_31] = var_10;
                    var_55 = (!(((/* implicit */_Bool) ((signed char) var_1))));
                    var_56 = ((((/* implicit */_Bool) ((signed char) 1747038573))) || (((((/* implicit */_Bool) arr_51 [8LL] [8LL] [(short)11])) && (((/* implicit */_Bool) 3016256205U)))));
                    /* LoopSeq 3 */
                    for (signed char i_32 = 0; i_32 < 12; i_32 += 1) 
                    {
                        arr_114 [i_22] [i_23] [i_27] [i_22] [i_32] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_102 [i_22] [i_22] [i_27] [i_31] [i_32])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))));
                        arr_115 [(signed char)10] [(_Bool)1] [i_27] [i_22] = ((/* implicit */unsigned int) (+(18446744073709551614ULL)));
                        arr_116 [i_22] [i_22] [i_22] [i_22] [i_32] = var_3;
                        arr_117 [i_22] [i_22] [i_23] [i_27] [i_27] [i_31] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_97 [i_22] [i_27] [i_31] [i_32]) : (arr_97 [i_22] [i_22] [i_22] [i_31])));
                    }
                    for (long long int i_33 = 0; i_33 < 12; i_33 += 1) 
                    {
                        var_57 = ((/* implicit */short) (-(((/* implicit */int) arr_112 [i_22] [i_23 - 1] [i_23 - 1] [i_23] [i_23 - 1]))));
                        arr_120 [i_22] [i_27] [i_33] = ((/* implicit */unsigned long long int) arr_43 [i_22]);
                        var_58 = ((/* implicit */short) 732657192);
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned int) (unsigned char)226);
                        arr_123 [i_22] [i_27] [i_34] [i_31] [i_23] [i_31] &= ((/* implicit */int) arr_96 [i_22]);
                    }
                }
            }
            arr_124 [i_22] [i_22] [i_23 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_101 [i_22] [i_22] [i_22]))))), ((-(((/* implicit */int) (short)0))))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_96 [i_22])), ((unsigned char)5)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-15556))))) : (3711347920U)))));
            arr_125 [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) < (max((var_18), (((/* implicit */unsigned int) (signed char)102))))))) & (max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-14))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_35 = 0; i_35 < 12; i_35 += 4) 
            {
                arr_128 [i_23] [i_35] |= ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)21))))), (arr_43 [i_35])));
                arr_129 [i_22] [i_35] [i_35] [i_22] &= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) max((var_17), (var_12)))) ^ (((/* implicit */int) max((arr_107 [i_35] [i_35] [i_35] [i_35]), ((signed char)64)))))));
            }
        }
        arr_130 [i_22] [i_22] = ((/* implicit */signed char) 13182640047860470641ULL);
        var_60 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_22] [(_Bool)1] [i_22] [i_22] [i_22])) + (((/* implicit */int) (short)23318)))))))));
    }
}
