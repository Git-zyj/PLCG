/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124257
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
    var_14 = ((/* implicit */unsigned long long int) (short)-16);
    var_15 &= ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
            {
                arr_10 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */short) arr_4 [i_1] [i_1]))))), (arr_9 [i_0] [i_1] [5ULL] [i_2])));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_16 = arr_7 [i_0] [i_0] [i_1];
                        var_17 += ((/* implicit */_Bool) var_3);
                        var_18 |= ((/* implicit */_Bool) (((!(arr_13 [(short)2] [i_0]))) ? (((/* implicit */int) min((arr_13 [(unsigned char)6] [i_1]), (arr_13 [4LL] [i_1])))) : (((/* implicit */int) arr_13 [(signed char)8] [i_4]))));
                    }
                    var_19 = ((/* implicit */long long int) (-(min(((-(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_13 [i_1] [(unsigned char)18])) * (((/* implicit */int) var_12))))))));
                }
            }
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [3] [i_1] = (-(((/* implicit */int) ((_Bool) arr_1 [i_5]))));
                            var_20 = ((/* implicit */int) arr_18 [i_1]);
                            var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [16ULL] [i_1] [i_5] [i_6])) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) arr_19 [i_0])))))));
                        }
                    } 
                } 
                var_22 = ((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_5 [i_1]))) - (1))));
                arr_25 [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((_Bool) min((((((/* implicit */_Bool) -1482269793)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (short)2929)))), (((/* implicit */int) (short)5)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 2147483634))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_9 + 1] [i_9 + 1]))))));
                        var_25 = (~(((((/* implicit */_Bool) arr_26 [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 + 1])) ? (arr_26 [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 - 2]) : (((/* implicit */long long int) var_6)))));
                        arr_35 [i_0] [i_1] [i_8] [i_9] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]);
                    }
                    arr_36 [i_1] [i_1] = ((unsigned long long int) min((((arr_12 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))), (arr_12 [i_8])));
                    arr_37 [i_8] [i_1] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_15 [i_9] [i_8] [i_8] [i_1] [i_0]);
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_21 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]))))) <= ((((+(arr_30 [(_Bool)1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_0] [i_1] [i_8] [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    var_27 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((_Bool) 6025732714308238365ULL))), (((((/* implicit */_Bool) arr_27 [2ULL] [(unsigned short)1])) ? (((/* implicit */unsigned long long int) var_0)) : (17069308910292810103ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)2929))) * (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_8] [i_11] [i_11])) ? (((/* implicit */int) arr_33 [i_1] [i_8] [i_11])) : (((/* implicit */int) (short)11)))))))));
                    arr_42 [i_1] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8799361394213601627LL)) ? (((/* implicit */unsigned long long int) -2147483635)) : (13655814327785574536ULL)))) ? (((/* implicit */int) (short)2920)) : (((/* implicit */int) (short)-1515)))), (((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_8] [i_8] [i_8])) : (((/* implicit */int) ((unsigned short) var_9)))))));
                }
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    arr_45 [i_1] [i_1] [i_8] [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_27 [i_0] [i_1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_1] [(signed char)15] [i_1]))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)96))))));
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_50 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_7)))));
                        var_29 = (((+(((/* implicit */int) arr_3 [i_13])))) & (((/* implicit */int) ((unsigned char) arr_3 [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_30 = ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((var_10) - (16306239311776219494ULL))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_3 [i_14]))));
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        arr_56 [i_15] [(short)3] [i_12] [i_1] [i_8] = ((/* implicit */long long int) ((_Bool) arr_26 [i_0] [i_1] [i_8] [i_12]));
                        arr_57 [i_1] [i_15] = ((((int) arr_11 [i_1] [i_1] [i_15])) == (((/* implicit */int) arr_34 [i_0] [i_1] [i_8] [i_12] [i_15])));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((((/* implicit */int) arr_5 [(_Bool)1])), (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6060)))))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30174))))))) & (arr_12 [i_0])));
                }
                var_34 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) arr_0 [i_0]))))), (((((((/* implicit */int) arr_41 [i_0] [i_1])) >> (((arr_26 [i_0] [i_0] [i_8] [i_0]) - (4804159663204449951LL))))) << (((((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [i_1] [i_1])) - (39847)))))));
            }
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [16] [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((((/* implicit */_Bool) ((long long int) arr_17 [i_0] [(_Bool)1] [i_0] [i_0]))) ? (((/* implicit */int) arr_17 [i_1] [(unsigned char)0] [i_0] [i_0])) : (((/* implicit */int) arr_47 [i_0] [i_1] [2ULL] [i_1] [i_0])))))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            arr_63 [i_0] = ((/* implicit */signed char) arr_26 [i_0] [i_17] [i_17] [(signed char)3]);
            /* LoopSeq 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_66 [i_17] [i_0] [i_18] [i_18] = ((((/* implicit */int) arr_65 [i_18] [i_0])) > (arr_48 [i_18] [i_17]));
                var_36 = ((/* implicit */unsigned short) var_2);
                arr_67 [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4875480349880273128ULL)) ? (((/* implicit */int) (unsigned short)61322)) : (-966324075))) != (((((/* implicit */_Bool) arr_58 [4LL] [i_17] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_41 [i_0] [4LL]))))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((_Bool) arr_64 [i_0])))));
            }
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                var_38 = ((/* implicit */long long int) (((+(9223372036854775799LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_19] [i_19])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))));
                arr_70 [i_19] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_17] [i_19])) * (arr_31 [i_19] [i_17] [i_0] [i_0] [i_0])));
                arr_71 [i_19] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_19]))) ? (((unsigned long long int) (short)-23)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_0])))));
                arr_72 [i_17] [i_19] [i_19] = ((/* implicit */unsigned long long int) var_8);
            }
            for (long long int i_20 = 2; i_20 < 17; i_20 += 1) 
            {
                var_39 = ((arr_49 [i_20 - 2] [i_20 - 1] [6] [i_20 + 3] [i_20]) ? (((/* implicit */int) arr_3 [i_20 + 3])) : (((/* implicit */int) var_12)));
                var_40 = (-(((/* implicit */int) arr_28 [i_20] [i_20] [i_20 + 2])));
                var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8799361394213601627LL)) ? (((/* implicit */int) (_Bool)0)) : (arr_53 [i_0] [i_0] [i_0] [i_17] [0LL])))) ? (arr_53 [10LL] [i_17] [i_20] [i_0] [16ULL]) : (((/* implicit */int) arr_16 [i_17] [10LL] [4LL]))));
            }
            arr_76 [(unsigned short)0] [i_0] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_17] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_17])))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_22 = 1; i_22 < 19; i_22 += 1) 
            {
                arr_81 [16] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [16LL] [i_21]))) / (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_22 - 1] [i_22 + 1] [(signed char)18]))) : (var_1)))));
                var_42 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [9ULL] [i_0] [i_21] [i_22 + 1]))) : (arr_64 [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) : (((arr_22 [16ULL] [i_21] [i_22] [i_22]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) < (max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) var_8))))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13345)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (_Bool)1))))) ? (arr_31 [(_Bool)1] [(short)11] [i_23] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_1) / (((/* implicit */long long int) var_0)))))))));
                arr_84 [i_0] [i_21] [i_23] [i_23] = ((/* implicit */_Bool) arr_59 [i_23] [i_23] [i_23] [i_0]);
            }
            for (unsigned char i_24 = 3; i_24 < 18; i_24 += 3) 
            {
                var_44 -= min((((arr_40 [i_0] [i_21] [i_24] [i_24] [i_24 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [8] [i_21] [i_24 - 1]))) : (arr_30 [(unsigned short)6] [(unsigned short)6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) var_4))) : ((-(arr_53 [16] [i_24] [i_24] [(_Bool)1] [16])))))));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_94 [(_Bool)1] [i_25] [i_24] [i_24] [i_24] [i_21] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_54 [i_21] [i_24] [i_24 - 2] [i_24 - 2] [i_24 - 3])))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_87 [i_0] [i_24] [i_25])) ? (((arr_58 [i_0] [i_24 - 1] [(unsigned short)15] [(short)16] [i_24 - 1] [i_24 - 1]) / (arr_58 [i_0] [i_24 - 2] [i_0] [i_0] [i_26] [i_25]))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (min((arr_53 [(_Bool)1] [i_21] [i_24] [i_21] [i_24]), (((/* implicit */int) arr_49 [i_26] [i_25] [i_24] [i_0] [i_0])))))))));
                        }
                    } 
                } 
            }
            var_46 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [(_Bool)1]))));
            var_47 ^= ((/* implicit */unsigned char) ((signed char) var_5));
        }
        var_48 += ((/* implicit */unsigned short) arr_43 [i_0] [i_0] [i_0] [i_0] [8ULL]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_28 = 0; i_28 < 13; i_28 += 2) 
        {
            for (short i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                {
                    var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_48 [i_28] [i_29])), (arr_97 [i_27]))), (((/* implicit */long long int) arr_54 [i_27] [i_27] [i_27] [i_27] [i_27]))))))))));
                    arr_104 [(_Bool)1] [(_Bool)1] [i_27] [(_Bool)1] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
        var_50 &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_90 [i_27] [i_27] [i_27])) * (((/* implicit */int) arr_90 [i_27] [(short)11] [i_27])))) / ((-(var_0)))));
    }
    var_51 = ((/* implicit */signed char) var_9);
}
