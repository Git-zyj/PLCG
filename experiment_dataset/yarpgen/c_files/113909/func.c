/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113909
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_15 += var_2;
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */short) ((unsigned short) ((arr_1 [(signed char)14]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)0)))));
        arr_3 [(short)14] |= ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((long long int) max((11931758761016855269ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (short)4296)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */signed char) min(((short)-2496), (((/* implicit */short) (unsigned char)153))));
                                var_18 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3 + 2] [i_4] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-14246)) != (((/* implicit */int) (short)14245))))) : (((((/* implicit */int) (short)14245)) * (((/* implicit */int) var_2)))))));
                                arr_20 [(_Bool)1] [i_1] [i_2] [i_3 + 1] [i_4 - 1] [i_3] = ((/* implicit */signed char) ((((693954635) - (((/* implicit */int) arr_10 [18LL] [i_3 + 3] [i_3 + 1])))) | (((arr_19 [(signed char)4] [i_3] [i_3 + 1] [i_3 - 1]) ? (((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_3 + 3] [i_3 - 1])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3 + 2] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) max((-4216149423334866713LL), (((/* implicit */long long int) var_13))))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_12))))))), (((/* implicit */unsigned int) arr_10 [i_1] [i_2] [i_3])))))));
                }
            } 
        } 
        arr_21 [i_1] [i_1] &= ((/* implicit */short) (((+(arr_16 [(short)0] [i_1] [i_1] [i_1] [(short)0]))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))) > (((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) var_11)))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)14246)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1])))))))) * (((((/* implicit */int) ((-4216149423334866713LL) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */_Bool) (((-(((/* implicit */int) (short)-1)))) - (((/* implicit */int) ((signed char) arr_24 [i_6])))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 4; i_7 < 22; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_7] [i_9]))));
                                var_23 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                                arr_35 [i_6] [5ULL] [i_8] [5ULL] = ((_Bool) (short)14260);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            arr_41 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65520)) >> (((arr_7 [i_7 - 2]) + (6844815925040140798LL)))));
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_7] [i_7 - 1] [i_11])) ? (((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 4] [i_7 - 4] [i_7 - 3])) : (((/* implicit */int) arr_22 [i_7 - 1]))));
                            arr_42 [i_12] [i_12] [i_8] [i_8] [i_7] [i_12] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_29 [i_6] [1ULL] [i_11])) | (((/* implicit */int) (signed char)-116))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_27 -= ((/* implicit */signed char) (-(((((/* implicit */int) (short)-16201)) / (((/* implicit */int) var_4))))));
                            var_28 = (!(((/* implicit */_Bool) arr_31 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 + 1])));
                        }
                        var_29 *= var_13;
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) (+(arr_27 [i_7 - 2] [5] [i_8] [(_Bool)1])));
                        var_31 = ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_6] [i_7] [i_7 + 2]))));
                    }
                    for (unsigned short i_15 = 3; i_15 < 22; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6] [i_7 + 2] [i_8])) ? (((/* implicit */int) arr_17 [i_6] [i_7 - 1] [i_15 - 2] [i_7 - 2])) : ((~(((/* implicit */int) (unsigned char)0))))));
                        var_33 -= ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72)))))))));
                        arr_51 [i_6] [i_6] [(short)21] [8ULL] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_25 [i_15 + 1] [i_15 + 1] [i_15 + 1]))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        arr_54 [i_6] [i_7] [i_6] [(signed char)10] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7]))) : (var_7)))));
                        arr_55 [i_16] [i_7] [i_7] [i_7 - 2] = ((arr_27 [i_6] [i_7 - 3] [i_7] [i_7 - 2]) != (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_6] [i_7 - 4] [i_7 - 4] [i_7 - 2]))));
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned short) arr_52 [i_7] [i_7] [i_7 - 3])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) var_12);
                        var_36 = ((((/* implicit */_Bool) arr_56 [i_6] [i_7] [i_8] [i_7 - 4] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_56 [i_6] [i_7 + 2] [(unsigned char)17] [i_7 + 1] [1LL]));
                        var_37 = ((/* implicit */unsigned short) arr_57 [i_17] [i_17] [i_7 - 2] [i_7 - 1] [i_7 - 3] [i_7 - 2]);
                        var_38 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)27035))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_60 [i_6] [i_7] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4216149423334866713LL)) ? (((/* implicit */int) (unsigned char)5)) : (896)));
                        var_39 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 6781915263882111157ULL)))));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_40 = ((/* implicit */int) arr_19 [i_6] [i_19] [i_19] [i_19]);
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (arr_36 [i_6]) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_64 [i_21])) != (((/* implicit */int) var_12))))))));
                        var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_21]))));
                    }
                } 
            } 
            arr_70 [(unsigned char)18] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_6] [i_6] [i_19] [i_19] [(short)8] [i_6]))));
        }
        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) 
        {
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (+(var_6))))));
            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_22] [i_22] [(short)20] [i_6] [i_6])) << (((((18446744073709551615ULL) >> (((arr_6 [i_6] [22ULL] [i_22]) + (996739255))))) - (8589934581ULL))))))));
        }
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                var_45 |= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_6])) >> (((((/* implicit */int) arr_5 [i_24])) - (27687)))));
                var_46 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)50078));
            }
            for (unsigned int i_25 = 1; i_25 < 22; i_25 += 1) 
            {
                var_47 = ((/* implicit */short) arr_37 [(_Bool)1]);
                arr_83 [i_6] [i_23] [14] = ((/* implicit */unsigned long long int) var_12);
                arr_84 [(unsigned char)6] [i_23] [i_25] [i_25 - 1] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))) + ((+(((/* implicit */int) arr_12 [i_6] [(unsigned char)2] [(unsigned char)2] [i_25 + 2]))))));
            }
            arr_85 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_23] [i_6] [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14246)))));
            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) 67108864)) || (((arr_82 [i_6] [i_23] [i_23]) || (((/* implicit */_Bool) arr_65 [i_6] [(_Bool)1] [i_6] [i_6]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 2) 
            {
                for (short i_27 = 1; i_27 < 23; i_27 += 4) 
                {
                    {
                        var_49 = ((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)-80)) + (2147483647))) << (((((/* implicit */int) (signed char)5)) - (5))))));
                        var_50 = ((/* implicit */long long int) ((unsigned short) arr_37 [i_27 - 1]));
                        arr_91 [i_27] = ((/* implicit */int) arr_29 [i_6] [i_23] [i_27 + 1]);
                        arr_92 [i_6] [i_27] [i_27] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
    }
    for (int i_28 = 0; i_28 < 24; i_28 += 1) /* same iter space */
    {
        var_52 -= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_33 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])), (var_9))))));
        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_28] [i_28] [i_28]))) / (arr_56 [(short)0] [i_28] [i_28] [i_28] [i_28])))) ? (((/* implicit */int) max(((signed char)112), (arr_53 [7ULL] [i_28] [i_28] [i_28])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14260))) : (((var_3) ? (((unsigned long long int) arr_86 [i_28] [i_28] [i_28] [i_28])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_28] [i_28] [i_28]))))))))));
        /* LoopSeq 2 */
        for (long long int i_29 = 3; i_29 < 22; i_29 += 4) 
        {
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (((((+(((/* implicit */int) min((var_2), (var_9)))))) + (2147483647))) >> (((((long long int) min((arr_94 [i_28]), (((/* implicit */long long int) var_6))))) + (7521683860477816974LL))))))));
            arr_99 [i_28] [i_28] [2] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0)))))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) -1687135299)))))))));
            arr_100 [i_29] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) || ((!(((/* implicit */_Bool) arr_26 [i_29 - 1] [i_29 - 1] [i_29]))))));
            /* LoopSeq 1 */
            for (short i_30 = 0; i_30 < 24; i_30 += 3) 
            {
                arr_104 [(short)16] [i_30] [(short)16] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */int) var_9)), (arr_96 [(_Bool)1])))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_28] [i_29 + 2] [i_30] [i_30] [i_29] [i_28])))))));
                arr_105 [i_29] [i_30] = ((/* implicit */unsigned short) min((((int) (_Bool)1)), ((+((((_Bool)1) ? (((/* implicit */int) arr_97 [i_28] [5ULL])) : (((/* implicit */int) arr_101 [i_28] [i_29 - 3] [i_30]))))))));
                arr_106 [i_28] [i_28] [i_30] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) 23ULL))) ? (((unsigned long long int) arr_11 [i_28] [i_30])) : (((/* implicit */unsigned long long int) ((arr_67 [i_30] [i_29] [i_30]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_28] [i_28] [i_28] [i_28] [7ULL] [i_28]))) : (var_7)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_55 = ((/* implicit */signed char) ((unsigned short) (short)0));
            var_56 = ((/* implicit */unsigned long long int) arr_81 [i_31]);
            arr_111 [i_28] [(signed char)12] = ((/* implicit */unsigned int) var_2);
            arr_112 [i_28] [i_28] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) arr_101 [i_28] [i_28] [i_31])) ? (((/* implicit */int) arr_46 [i_31] [i_31] [i_31] [i_28] [i_28] [i_28])) : (((/* implicit */int) arr_32 [i_31]))));
        }
    }
    var_57 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        for (unsigned long long int i_33 = 1; i_33 < 16; i_33 += 3) 
        {
            {
                arr_117 [i_32] [i_32] [i_32] = ((/* implicit */short) ((var_3) ? (((((/* implicit */_Bool) arr_39 [i_32] [i_32] [i_32] [i_32] [i_33])) ? (((/* implicit */int) arr_30 [i_32] [i_32] [i_32])) : ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_32])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)30966))));
                /* LoopNest 3 */
                for (signed char i_34 = 0; i_34 < 17; i_34 += 1) 
                {
                    for (long long int i_35 = 0; i_35 < 17; i_35 += 2) 
                    {
                        for (unsigned char i_36 = 0; i_36 < 17; i_36 += 2) 
                        {
                            {
                                arr_125 [i_32] = ((/* implicit */_Bool) ((((((/* implicit */int) min(((short)-14266), (((/* implicit */short) (_Bool)1))))) + (2147483647))) >> (((max((((/* implicit */unsigned int) var_13)), (((unsigned int) (short)16143)))) - (4294963555U)))));
                                var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_27 [(_Bool)1] [i_33] [i_34] [i_33 + 1])))) ? (min((((/* implicit */long long int) var_2)), (4593671619917905920LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) var_9))), (arr_101 [i_32] [i_33 - 1] [i_34])))))));
                                arr_126 [i_32] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(arr_49 [i_32] [i_33] [i_34] [i_35])))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-72)), ((short)(-32767 - 1))))) : (((((/* implicit */int) arr_50 [i_32] [i_33] [i_34] [i_35] [i_36] [i_34])) / (arr_6 [i_34] [i_35] [i_36]))))), (((((/* implicit */_Bool) arr_93 [i_33 - 1] [i_33])) ? (((/* implicit */int) arr_93 [i_33 - 1] [i_33])) : (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_59 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) var_3)), (var_0)))) < (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))), (var_13)));
}
