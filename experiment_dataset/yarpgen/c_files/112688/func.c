/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112688
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 4287873258U))))))))))));
        arr_2 [i_0 + 2] [i_0] = min((((/* implicit */long long int) arr_1 [8LL])), (5158379081935681819LL));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */_Bool) var_17);
            var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) >> (0LL))) > (((/* implicit */int) arr_5 [i_1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_1])) || (((/* implicit */_Bool) 268435455U))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) - (268435450U))))));
            }
            for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
            {
                var_22 = ((/* implicit */long long int) var_7);
                var_23 = 5158379081935681819LL;
            }
            arr_18 [i_1] [i_3] &= ((/* implicit */int) (-((-(arr_9 [i_3])))));
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_9 [i_7])))))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7]))) : (arr_9 [i_1])))));
                arr_23 [i_1] [i_6] = ((/* implicit */unsigned char) arr_3 [i_6] [i_7]);
            }
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 3; i_10 < 21; i_10 += 2) 
                        {
                            arr_31 [(unsigned short)22] [i_6] [17LL] [i_9] [i_10] [i_6] = ((/* implicit */long long int) ((var_5) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_5 [i_10])))))));
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_8]))));
                            var_26 = ((/* implicit */long long int) arr_30 [i_10 + 3] [i_10] [i_10] [i_9 + 3] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            arr_34 [i_1] [i_1] [i_6] [i_8] [i_9 - 1] [i_11] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)81)) == (((/* implicit */int) var_10)))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) arr_16 [(unsigned short)13] [(unsigned short)13])) ? (((/* implicit */long long int) arr_33 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 + 2])) : ((~(0LL)))))));
                        }
                        arr_35 [4U] [i_6] [i_8] [i_9] = ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) 268435452U)) & (arr_14 [i_8]))));
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) 4026531821U);
                            var_29 -= ((/* implicit */int) arr_11 [i_1] [i_1]);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1] [i_6] [i_8] [i_12])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                            arr_38 [i_1] [i_1] [16LL] [i_9] [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39009)) ? (((/* implicit */int) arr_12 [(unsigned char)19])) : (((/* implicit */int) (signed char)76))))) ? (1142032216) : (((/* implicit */int) (unsigned char)38))));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [19LL] = arr_28 [i_1] [7LL] [7LL] [i_9];
                        }
                        for (unsigned char i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 268435458U))));
                            arr_43 [i_1] [i_1] [i_6] [i_13] [i_9] [i_13] [i_1] = ((/* implicit */_Bool) 0);
                            arr_44 [i_13] [i_6] [i_8] [i_9 - 1] [i_9 - 1] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_41 [i_9 + 1] [i_6] [i_8] [i_9]))));
                            arr_45 [i_1] [i_1] [i_13] = ((/* implicit */int) 268435455U);
                        }
                        arr_46 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_1] [i_6] [i_1] [i_1])) ? (arr_33 [i_1] [i_6] [i_8] [i_9 - 1]) : (arr_33 [i_1] [i_1] [i_1] [i_1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 2; i_14 < 24; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_55 [i_14] [i_6] [i_14] [i_15] [i_16] [i_16] = ((unsigned short) (unsigned short)52581);
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(arr_21 [i_1] [i_1] [i_1])));
                            var_32 = ((((/* implicit */_Bool) arr_52 [i_1] [i_16] [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */int) arr_52 [i_14] [i_1] [i_14] [i_14 + 1] [21LL])) : (((/* implicit */int) arr_52 [i_16] [i_6] [9U] [i_14 - 2] [i_14 - 2])));
                            var_33 += ((/* implicit */long long int) arr_24 [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 2]);
                        }
                        for (unsigned short i_17 = 4; i_17 < 22; i_17 += 4) 
                        {
                            var_34 -= ((/* implicit */long long int) arr_19 [i_15] [i_15] [i_15]);
                            arr_59 [(unsigned short)11] [i_6] [i_14] [i_6] [i_15] [i_15] [i_17] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (arr_24 [i_15] [(unsigned short)21] [i_6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 9223372036854775788LL))))));
                        }
                        var_35 = ((/* implicit */int) ((((/* implicit */int) arr_48 [i_14 + 1] [i_14 + 1] [i_14])) == (((/* implicit */int) (signed char)-76))));
                    }
                } 
            } 
        }
        for (int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            arr_62 [i_1] [i_1] = 8147590688407065356LL;
            /* LoopSeq 4 */
            for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 23; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        {
                            arr_72 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_20 + 2] [i_20 + 2] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_69 [i_20 + 2] [i_18] [i_18])));
                            var_36 = ((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_19]);
                            var_37 = ((/* implicit */unsigned short) arr_5 [i_1]);
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) arr_6 [i_18] [i_18] [i_19]);
            }
            for (unsigned int i_22 = 3; i_22 < 24; i_22 += 1) 
            {
                var_39 ^= var_13;
                var_40 = ((/* implicit */unsigned char) arr_71 [i_1] [i_18] [(_Bool)1]);
            }
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                var_41 = ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2047))))) + (((11LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                var_42 = ((/* implicit */unsigned short) arr_14 [i_1]);
                arr_81 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) < (-11LL))))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) <= (1834297665U)))) == (((((/* implicit */int) arr_57 [i_1] [i_23])) >> (((((/* implicit */int) var_1)) - (94)))))));
                var_44 = ((/* implicit */long long int) arr_52 [23] [i_1] [i_18] [i_23] [23]);
            }
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    var_45 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (0) : (((/* implicit */int) arr_64 [i_25]))))));
                    var_46 = ((/* implicit */signed char) ((var_12) == (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_18] [i_24] [i_25])) ? (3118551383U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))));
                }
                for (unsigned char i_26 = 0; i_26 < 25; i_26 += 2) 
                {
                    var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1461372080532593462LL) : (((/* implicit */long long int) 470847743U)))))));
                    arr_89 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_86 [i_1] [i_18] [i_24] [i_18] [i_24] [i_18]);
                    var_49 = ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_58 [i_26])));
                }
                var_50 = 11LL;
                arr_90 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)211))));
                arr_91 [i_24] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (arr_32 [i_24])))) + (((/* implicit */int) (unsigned char)227))));
            }
            var_51 &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_76 [i_1] [i_1] [(unsigned char)20] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
            /* LoopSeq 2 */
            for (unsigned int i_27 = 0; i_27 < 25; i_27 += 4) 
            {
                arr_94 [i_1] [i_18] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_1] [i_18] [i_27] [i_27])) || (((/* implicit */_Bool) arr_76 [i_1] [i_18] [i_27] [i_27]))));
                var_52 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_21 [i_18] [i_18] [i_27])) && (((/* implicit */_Bool) 1238608145U)))));
            }
            for (long long int i_28 = 2; i_28 < 24; i_28 += 2) 
            {
                var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_28 - 2])) ? (((/* implicit */int) arr_12 [i_18])) : (((/* implicit */int) arr_12 [i_1])))))));
                arr_98 [i_28 - 1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) (signed char)-13));
            }
        }
        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (arr_6 [i_1] [i_1] [i_1]) : (var_5)));
        var_55 = ((/* implicit */unsigned int) arr_82 [i_1] [i_1] [i_1]);
    }
    for (long long int i_29 = 0; i_29 < 19; i_29 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_30 = 0; i_30 < 19; i_30 += 1) 
        {
            for (long long int i_31 = 0; i_31 < 19; i_31 += 3) 
            {
                {
                    arr_108 [i_29] [i_30] [i_31] [i_31] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_29] [i_30] [i_30] [i_30] [i_31]))) : (9223372036854775798LL))))), (max((min((arr_42 [i_31] [i_31] [10U] [i_30] [i_31]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (unsigned short)0))))));
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 19; i_32 += 2) 
                    {
                        for (long long int i_33 = 2; i_33 < 17; i_33 += 2) 
                        {
                            {
                                arr_114 [i_29] [i_31] [i_31] [i_31] = ((/* implicit */int) ((_Bool) (signed char)-125));
                                var_56 = ((/* implicit */long long int) arr_93 [i_29] [i_29] [i_29] [i_29]);
                                var_57 = ((/* implicit */int) arr_47 [i_29] [i_29] [i_29]);
                                var_58 ^= ((/* implicit */unsigned char) min(((+(-3646903190483555704LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)44923)) : (((/* implicit */int) arr_64 [i_29]))))) ? (((((/* implicit */_Bool) -6LL)) ? (((/* implicit */int) (unsigned short)3565)) : ((-2147483647 - 1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)92)), ((unsigned short)44923)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_59 = ((/* implicit */unsigned short) max((arr_68 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29]), (((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_111 [12LL] [i_29] [i_29] [i_29] [(signed char)10])) : (((/* implicit */int) (unsigned short)33440))))))));
    }
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
    {
        arr_117 [i_34] [i_34] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_76 [i_34] [i_34] [i_34] [7LL])))) || (((/* implicit */_Bool) min((var_1), (arr_29 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34] [i_34])))))))));
        arr_118 [i_34] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_34] [i_34] [i_34])) ? (arr_10 [i_34] [i_34]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33440)))))) != ((~(arr_9 [3U]))))))));
    }
    var_60 = ((/* implicit */unsigned short) min((1708870478959692629LL), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
    var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) 9223372036854775807LL))));
    var_62 = ((/* implicit */unsigned char) var_15);
}
