/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124329
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)92)) - (((/* implicit */int) (short)15447))));
    var_12 = ((/* implicit */_Bool) min((((int) var_4)), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((7225489755929666683ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (unsigned char)157);
        var_13 *= ((unsigned char) arr_1 [i_0 + 1]);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) >> (((((/* implicit */int) arr_0 [i_0 - 1])) - (27))))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)5)) + (((/* implicit */int) arr_1 [i_0 - 1]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [(short)19] [i_3] = ((/* implicit */short) ((long long int) arr_1 [i_0 + 1]));
                        var_15 -= ((/* implicit */unsigned long long int) (signed char)-89);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) * (1123123281U)));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((int) 5417492073890502840LL)))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_19 [i_6] [i_4] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33887))))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) (signed char)-14))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_8);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) -1318095775)) : (-7804131823102996656LL)));
                            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? ((-(((/* implicit */int) arr_20 [i_8] [i_7] [i_4])))) : (((/* implicit */int) (short)21712))));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 1; i_10 < 6; i_10 += 2) 
        {
            arr_32 [i_4] [i_4] [(_Bool)1] |= ((/* implicit */unsigned short) arr_22 [i_4] [i_4] [i_4] [i_4]);
            arr_33 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1123123282U)) || (arr_29 [i_4] [(signed char)0] [i_4] [5LL] [i_10 + 1] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_2)))))) : (((/* implicit */int) var_3))));
            var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_10 + 4] [i_10 - 1] [i_10 + 2]))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
        {
            arr_36 [i_4] [i_4] = ((/* implicit */long long int) ((arr_34 [i_4]) <= (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) ((_Bool) arr_23 [i_11] [i_11 - 2] [i_11 + 1] [i_11 + 1]))) : (max((((/* implicit */int) (unsigned short)33887)), (1653365850)))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) (~((~(arr_28 [i_4])))));
                arr_39 [i_4] [i_4] = ((/* implicit */unsigned int) var_7);
                var_23 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_12]))) == (((((/* implicit */_Bool) (signed char)127)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4])))))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_4])) * (((/* implicit */int) var_7))))))) * (max((12252802861693310930ULL), (((/* implicit */unsigned long long int) arr_35 [i_11 + 1] [i_13]))))));
                var_25 = ((/* implicit */_Bool) (~((+(0LL)))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 2; i_15 < 6; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_26 += ((/* implicit */int) ((var_6) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [1U] [i_11 - 2] [i_11 - 2])) ? (((/* implicit */int) arr_31 [i_11] [i_11] [i_16])) : (((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_11])))))));
                            var_27 += ((/* implicit */short) ((unsigned long long int) (signed char)14));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */unsigned long long int) arr_23 [i_11 - 1] [(unsigned char)3] [i_11] [i_11 - 1]);
            }
            for (unsigned short i_17 = 2; i_17 < 9; i_17 += 1) 
            {
                var_29 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((3616309207U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4])))))) ? (arr_7 [i_4] [i_4] [i_4] [(signed char)16]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))));
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)186)) || (((/* implicit */_Bool) 4294967291U))));
                var_31 = ((/* implicit */unsigned long long int) (unsigned short)28457);
                var_32 = ((/* implicit */long long int) var_7);
                arr_53 [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)31664)) ? (((/* implicit */int) arr_41 [i_4] [i_4] [i_11 + 1] [3ULL])) : (((/* implicit */int) var_7))))))) < (max((max((var_5), (((/* implicit */long long int) 3171843988U)))), (((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_4] [(short)1] [i_4] [i_11] [i_11] [i_17 - 2]))) / (arr_42 [i_4] [i_4])))))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_4] [i_11])) + (((/* implicit */int) (unsigned char)190))))) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_11] [i_11] [i_4] [i_4]))) : (3049151300232337699LL)))))) && (((/* implicit */_Bool) (-(arr_46 [i_4] [i_18] [i_18] [i_11 - 1] [i_4]))))));
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                {
                    var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_19] [i_11 - 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_35 [i_11 + 1] [i_19])))) : ((+(var_10)))));
                    var_35 = var_8;
                    arr_59 [i_4] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)32767)), (((((/* implicit */unsigned long long int) arr_24 [i_4] [i_18] [i_11 + 1])) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32316))) % (arr_51 [i_4] [i_11] [i_18] [i_4])))))));
                    var_36 = 262112;
                }
                for (signed char i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                {
                    var_37 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_11 - 2] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2016))) : (arr_52 [i_4] [i_11 + 1]))), (((/* implicit */unsigned int) ((short) (unsigned short)2013)))));
                    var_38 = ((/* implicit */int) min(((unsigned short)47645), (((/* implicit */unsigned short) (_Bool)0))));
                }
            }
            /* vectorizable */
            for (unsigned short i_21 = 1; i_21 < 8; i_21 += 3) 
            {
                var_39 = ((/* implicit */int) var_3);
                /* LoopSeq 3 */
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    var_40 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37052)) - (((/* implicit */int) arr_38 [i_22] [i_11 + 1] [8] [i_22]))));
                    var_41 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_57 [i_22] [i_22] [5U] [i_22])))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)21)))));
                    var_43 = 7804131823102996649LL;
                }
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
                {
                    var_44 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_29 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_21 + 1] [(_Bool)1] [i_21]))));
                    arr_72 [i_24] [i_4] [i_4] [i_4] = ((var_6) <= (arr_51 [i_24] [i_11] [i_21] [i_4]));
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 1; i_25 < 9; i_25 += 1) 
                    {
                        arr_75 [i_4] [i_11] [i_4] [i_11] [i_4] [i_24] [i_24] = ((/* implicit */short) (~(var_0)));
                        arr_76 [i_4] [i_11] [i_4] [(unsigned short)1] [i_25 + 1] [i_11 + 1] [i_25] = ((/* implicit */unsigned long long int) arr_29 [i_4] [i_25] [i_25] [i_25 - 1] [i_25] [i_25]);
                    }
                    for (unsigned short i_26 = 2; i_26 < 7; i_26 += 4) 
                    {
                        arr_81 [i_26] [i_4] [i_21] [i_24] [i_21] [i_11 + 1] [i_24] |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)17193)) < (((/* implicit */int) (unsigned short)37078))));
                        var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_4] [i_4] [i_4] [i_26])) && (((/* implicit */_Bool) var_1))));
                        arr_82 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_4])) || (((/* implicit */_Bool) arr_28 [i_4]))));
                    }
                    arr_83 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_21 + 1] [i_21 + 2] [i_21 + 2] [i_21 + 2])) ? (((/* implicit */int) arr_57 [i_21 + 1] [i_21 - 1] [i_21 + 2] [i_21 + 2])) : (((/* implicit */int) var_7))));
                }
                /* LoopNest 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    for (unsigned char i_28 = 1; i_28 < 9; i_28 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_27 - 1] [i_11 - 2])) ? (((int) (short)1615)) : (arr_23 [i_4] [i_11 - 2] [i_21] [i_27])));
                            var_47 = ((/* implicit */unsigned short) 18446744073709551608ULL);
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_29 = 1; i_29 < 8; i_29 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_30 = 1; i_30 < 9; i_30 += 2) 
            {
                for (long long int i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    {
                        var_48 ^= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_27 [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_29 + 2])))));
                        var_49 += ((/* implicit */long long int) -1033430247);
                    }
                } 
            } 
            var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_29] [2ULL]))));
            /* LoopNest 3 */
            for (unsigned char i_32 = 0; i_32 < 10; i_32 += 2) 
            {
                for (unsigned char i_33 = 0; i_33 < 10; i_33 += 2) 
                {
                    for (unsigned long long int i_34 = 0; i_34 < 10; i_34 += 2) 
                    {
                        {
                            arr_105 [i_32] [i_32] [i_32] [i_29 + 1] [i_33] [i_4] |= max((((/* implicit */unsigned long long int) (signed char)0)), (max((((16752851319055388164ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))))), (var_6))));
                            arr_106 [i_4] [i_29] [i_32] [i_33] [i_29] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22805))) | (6594722122040100351ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((265025118U), (((/* implicit */unsigned int) (short)27858)))))));
                            var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (short)448)))));
                        }
                    } 
                } 
            } 
            var_52 = ((/* implicit */unsigned char) (signed char)-23);
        }
        arr_107 [i_4] = ((/* implicit */short) (~((~(((((/* implicit */int) var_8)) >> (((4294967277U) - (4294967257U)))))))));
    }
    for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 3) /* same iter space */
    {
        var_53 *= ((/* implicit */short) (~(((/* implicit */int) max(((!((_Bool)0))), (((arr_9 [i_35] [i_35] [i_35]) < (-1405651013))))))));
        arr_110 [i_35] [(signed char)4] = ((/* implicit */unsigned short) (signed char)86);
        /* LoopSeq 1 */
        for (signed char i_36 = 0; i_36 < 10; i_36 += 4) 
        {
            var_54 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_36] [i_36] [i_36])))))));
            arr_113 [i_36] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_36] [i_35] [i_35] [i_36]))))) ? ((+(((((/* implicit */_Bool) arr_87 [i_35] [i_35] [i_36] [i_36] [i_35])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) (signed char)-83))));
        }
        /* LoopSeq 1 */
        for (signed char i_37 = 1; i_37 < 7; i_37 += 3) 
        {
            arr_117 [i_37 + 3] [4ULL] [4ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)4064)))))))), ((~(arr_51 [(short)0] [i_35] [i_35] [(short)0])))));
            arr_118 [i_35] [i_35] [(_Bool)1] = (~(((((/* implicit */_Bool) arr_6 [i_37 + 2] [i_37 + 2])) ? (arr_64 [i_37 + 2] [i_37 - 1] [i_37] [i_37] [i_35]) : (((/* implicit */unsigned long long int) 7480762928613588742LL)))));
            arr_119 [i_35] = max((((/* implicit */int) (short)1615)), (((((((/* implicit */_Bool) 2646647918U)) ? (2147483647) : (((/* implicit */int) (unsigned short)65533)))) * (((/* implicit */int) ((((/* implicit */int) arr_88 [0] [i_37])) > (((/* implicit */int) (unsigned short)193))))))));
        }
    }
    var_55 |= ((/* implicit */_Bool) min(((~(var_0))), (((/* implicit */int) var_4))));
}
