/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110699
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13)));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) var_5);
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_4 [i_1])))) ? (((var_18) ^ (var_7))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 - 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (arr_3 [i_1 + 1] [i_1]))) < (arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) 9223372036854775782LL)) : (18446744073709551612ULL)))));
        var_23 &= ((/* implicit */long long int) arr_4 [i_1]);
        var_24 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 7; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))), (var_18)))) & ((-(134209536ULL)))));
                        var_26 = ((/* implicit */unsigned int) ((max((var_15), (((/* implicit */long long int) arr_11 [i_4] [i_4 + 3] [i_4])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_4 + 2])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) arr_7 [i_2]);
            arr_17 [i_6] [i_2] [i_2] = ((/* implicit */short) (+((((-(((/* implicit */int) var_9)))) - (arr_3 [i_2] [i_6])))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_20 [i_2] [i_7] [5LL] = ((/* implicit */long long int) ((arr_14 [1U] [i_7]) >> (((arr_14 [i_7] [i_2]) - (4195579800U)))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [10U])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_7])))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((_Bool) max((((arr_18 [6ULL]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (+(var_13)))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) var_14);
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((var_13), (((/* implicit */unsigned int) arr_1 [i_2])))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    {
                        var_32 = ((unsigned char) var_10);
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((arr_35 [10U]) - (arr_35 [(signed char)2]))))));
                        var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [i_13] [i_11])) : (((/* implicit */int) var_11)))) + (((/* implicit */int) var_17))));
                        arr_37 [i_12] [i_12 + 1] [i_11] [i_12] = ((/* implicit */long long int) arr_4 [i_12]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (long long int i_15 = 2; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_15))))) % (var_15)));
                            arr_45 [i_2] [1] [i_2] [i_2] [i_15 - 1] [i_16] = ((/* implicit */int) arr_13 [i_16] [i_15 + 1] [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 1]);
                            var_36 = ((/* implicit */unsigned char) arr_30 [i_2]);
                            var_37 = ((unsigned char) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))));
                            arr_46 [i_16] [i_16] [i_16] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_15 - 2])) * (((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
        }
        arr_47 [i_2] = ((/* implicit */unsigned long long int) var_12);
    }
    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
        {
            var_38 |= ((/* implicit */_Bool) var_18);
            var_39 = ((/* implicit */unsigned long long int) var_10);
        }
        for (signed char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_20 = 3; i_20 < 8; i_20 += 3) /* same iter space */
            {
                var_40 = arr_5 [i_20];
                var_41 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_20] [i_20] [i_20 + 1] [0] [i_20 + 1]))))), (((unsigned int) arr_42 [(unsigned char)6] [(unsigned char)6] [i_20 - 1] [(unsigned char)6] [i_20 - 1]))));
            }
            for (signed char i_21 = 3; i_21 < 8; i_21 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_22 = 1; i_22 < 10; i_22 += 1) 
                {
                    var_42 = ((/* implicit */signed char) (+(8ULL)));
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [(unsigned char)1] [(unsigned char)1]))))))) ? (((/* implicit */long long int) arr_40 [i_17] [i_21 + 1] [i_22 - 1] [2U] [4U])) : ((-(((((/* implicit */_Bool) arr_8 [i_21] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_21]))))))))));
                }
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) 65535)) : (4ULL)));
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((short) min((arr_8 [i_23] [i_19]), (arr_8 [i_23] [i_17])))))));
                }
                for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    var_46 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                    arr_70 [i_17] [i_19] [i_21] [i_24] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_38 [i_24] [i_21] [i_17] [i_17])), (((((/* implicit */_Bool) (short)0)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                /* vectorizable */
                for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                {
                    var_47 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_11))));
                    var_48 &= ((/* implicit */unsigned int) ((long long int) arr_61 [i_21] [i_19] [i_21 - 2] [8U]));
                    var_49 = var_16;
                    var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_56 [i_21] [i_17] [i_17]))) ? ((-(((/* implicit */int) arr_71 [i_25] [i_21] [i_21] [i_17])))) : (((/* implicit */int) var_9))));
                }
                /* LoopSeq 2 */
                for (signed char i_26 = 0; i_26 < 11; i_26 += 2) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_27 = 3; i_27 < 10; i_27 += 2) /* same iter space */
                    {
                        var_51 *= ((/* implicit */short) ((_Bool) ((_Bool) var_18)));
                        var_52 = var_7;
                    }
                    for (signed char i_28 = 3; i_28 < 10; i_28 += 2) /* same iter space */
                    {
                        var_53 &= ((/* implicit */short) arr_10 [i_21] [i_21]);
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_65 [i_21] [i_21 + 1] [i_28 - 3] [i_28 - 3]))) || (((/* implicit */_Bool) var_2))));
                    }
                    /* vectorizable */
                    for (signed char i_29 = 3; i_29 < 10; i_29 += 2) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                        var_56 = ((/* implicit */_Bool) var_10);
                    }
                    for (unsigned int i_30 = 2; i_30 < 8; i_30 += 1) 
                    {
                        var_57 = min((((((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_4)))))) : (arr_73 [i_17] [i_17] [i_17] [i_17]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (6LL))) + (9223372036854775807LL)))));
                        var_58 = ((/* implicit */_Bool) var_17);
                        var_59 = ((/* implicit */long long int) arr_76 [i_21] [i_21] [i_21] [i_26] [i_30 + 2]);
                    }
                    var_60 = ((/* implicit */short) var_18);
                }
                for (long long int i_31 = 0; i_31 < 11; i_31 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_32 = 1; i_32 < 9; i_32 += 3) 
                    {
                        var_61 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_53 [i_32 + 1])) >= (((unsigned long long int) var_11))));
                        var_62 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                    }
                    var_63 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) arr_31 [i_21 + 1])) : ((+(arr_76 [i_21] [i_31] [i_21] [(unsigned char)9] [8])))))));
                }
                var_64 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_26 [i_21] [1LL] [i_17] [i_17] [i_21])), (((unsigned long long int) arr_72 [i_21]))));
                var_65 *= ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_19] [i_19] [i_19]))) <= (var_13)));
            }
            arr_91 [i_17] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_51 [i_19])), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))) : (4294967283U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_19] [1LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_17])))))))));
        }
        for (signed char i_33 = 0; i_33 < 11; i_33 += 3) /* same iter space */
        {
            var_66 = ((/* implicit */unsigned char) arr_72 [(_Bool)1]);
            var_67 = ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))));
            /* LoopSeq 1 */
            for (unsigned long long int i_34 = 1; i_34 < 9; i_34 += 4) 
            {
                var_68 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_57 [i_34] [i_33] [i_17] [i_17])) : (((/* implicit */int) arr_55 [i_34 + 2] [i_33])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_38 [i_17] [i_17] [i_17] [i_17])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_61 [i_17] [i_33] [i_17] [i_34])) : (((/* implicit */int) var_0))))))));
                /* LoopSeq 1 */
                for (short i_35 = 0; i_35 < 11; i_35 += 3) 
                {
                    var_69 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)7))))) : (7ULL))) * (arr_73 [i_35] [i_34 - 1] [i_33] [i_17])));
                    var_70 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (268173312U))));
                    arr_101 [(unsigned char)10] [(short)1] [i_35] [i_35] [i_34] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)127))))))) : (max((((unsigned int) var_8)), (((/* implicit */unsigned int) max((arr_5 [i_35]), (var_0)))))));
                    var_71 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_81 [(unsigned char)9] [i_33] [i_33] [i_33] [6ULL])))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (var_8) : (arr_79 [i_35] [i_34] [i_33] [i_34] [9U]))), (((/* implicit */unsigned int) arr_4 [i_34 - 1]))))) : (max((arr_98 [i_34] [i_17] [(_Bool)1] [(unsigned char)8] [2U] [i_34]), (arr_98 [i_34] [2] [i_33] [i_33] [2] [i_34])))));
                    var_72 = ((/* implicit */long long int) max((((/* implicit */signed char) arr_77 [i_35] [i_34] [(signed char)4] [i_34] [i_33] [i_17] [i_17])), (arr_52 [i_33] [i_33] [i_17])));
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_36 = 0; i_36 < 11; i_36 += 1) 
            {
                for (unsigned int i_37 = 0; i_37 < 11; i_37 += 4) 
                {
                    for (short i_38 = 0; i_38 < 11; i_38 += 3) 
                    {
                        {
                            var_73 = ((/* implicit */unsigned long long int) max((arr_23 [i_17]), (arr_5 [i_37])));
                            var_74 = ((/* implicit */int) var_7);
                            var_75 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (arr_10 [i_36] [i_37])));
                            var_76 = ((/* implicit */signed char) ((_Bool) ((long long int) var_18)));
                        }
                    } 
                } 
            } 
        }
        var_77 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) arr_15 [i_17] [i_17]))) : (((arr_58 [i_17] [i_17] [i_17] [10LL]) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_0))))))));
        var_78 = ((/* implicit */_Bool) arr_76 [6ULL] [i_17] [i_17] [i_17] [6ULL]);
        var_79 = ((/* implicit */signed char) var_7);
    }
    var_80 *= ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
    var_81 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? ((+(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_17))))))), (var_13)));
    var_82 = ((/* implicit */unsigned int) min((var_82), (((/* implicit */unsigned int) min((((long long int) (!(((/* implicit */_Bool) -1LL))))), (((/* implicit */long long int) ((int) var_17))))))));
}
