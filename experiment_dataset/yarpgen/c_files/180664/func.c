/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180664
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_4 [i_0] = ((unsigned char) (unsigned char)133);
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                arr_9 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)146);
                var_18 = ((/* implicit */unsigned char) (+(arr_3 [i_2 - 2] [i_2 - 2] [i_2 + 1])));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_14 [i_0] [(_Bool)0] [i_2] = 198213887U;
                    var_19 = ((/* implicit */short) arr_6 [i_2 - 1] [i_1] [i_2 + 1]);
                    arr_15 [(signed char)7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_10 [8U] [i_2 + 1] [i_2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2]))));
                    var_20 = ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 1] [8LL] [i_2])) : (arr_12 [i_3] [i_1] [i_2] [i_3] [i_2 + 1] [(unsigned char)2]));
                    arr_16 [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2 + 1]))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_20 [i_0] [i_2 - 1] [i_2] [i_4] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 2] [i_4]))));
                    arr_21 [i_0] [i_1] [i_0] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-79))))) ? (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_4)) : (var_0))) : (1604462343));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_5 - 3] [i_2 - 2] [i_0])) ? (arr_12 [(signed char)3] [(signed char)3] [i_2] [i_5] [(signed char)3] [i_5 - 2]) : (var_0)));
                        var_22 = ((/* implicit */int) (short)16);
                        arr_25 [i_0] [i_1] [i_0] [i_5] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)79))))) - (((/* implicit */int) var_17))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1813198229U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1813198229U)) && (((/* implicit */_Bool) arr_13 [i_2] [i_1]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_2 + 1])))))))));
                    }
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_19 [i_2 - 2]));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_29 [i_0] [i_0] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_1] [i_1])) : (((/* implicit */int) arr_27 [i_0] [i_1]))));
                    arr_30 [i_0] = ((/* implicit */signed char) var_4);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)52830)))))));
                    var_25 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) >> (((var_7) - (4717295843369159836ULL))))) >> (((/* implicit */int) (unsigned short)0))));
                    var_26 = ((/* implicit */short) arr_12 [i_6] [i_6] [i_2] [i_6] [i_6] [i_1]);
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                arr_35 [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_39 [i_0] [i_0] [i_8] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) (signed char)-100)))))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 7196270853639777027LL))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    arr_40 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 7457829343678420177LL)) + (arr_37 [i_9] [i_9] [i_8] [i_7]))) <= (arr_5 [i_0] [i_0])));
                    arr_41 [i_9] = ((/* implicit */unsigned char) var_14);
                }
                for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) var_0);
                    var_29 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10] [i_8] [i_7] [i_0]))) != (var_12))));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_30 |= ((/* implicit */int) var_15);
                        arr_47 [i_8] [i_7] [(_Bool)1] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_8] [i_7] [i_8] [i_10]))));
                    }
                    for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                    {
                        var_31 = var_0;
                        var_32 = ((/* implicit */unsigned char) (signed char)39);
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_8] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_7] [i_10])) | (((/* implicit */int) var_4))));
                        var_33 = ((((/* implicit */int) arr_17 [i_0] [i_13])) != (((/* implicit */int) arr_17 [i_0] [i_0])));
                    }
                    for (unsigned short i_14 = 1; i_14 < 8; i_14 += 4) 
                    {
                        var_34 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1771972)) && (((/* implicit */_Bool) arr_31 [i_10])))));
                        arr_58 [i_10] [i_10] [i_10] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                    }
                    /* LoopSeq 3 */
                    for (short i_15 = 2; i_15 < 8; i_15 += 2) 
                    {
                        arr_63 [i_0] [(signed char)1] [(short)1] [i_0] = ((long long int) ((unsigned char) var_5));
                        arr_64 [i_7] [i_7] [i_15 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_0] [i_15 - 2] [i_15] [i_15 - 2] [i_15] [i_15])) << (((var_7) - (4717295843369159849ULL)))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_37 [i_0] [i_7] [i_10] [i_10])))))))));
                        arr_65 [i_0] [(signed char)2] [i_8] [i_10] [i_15] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_7] [i_10] [i_15 - 2]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_36 [i_0] [i_7] [i_8] [i_10] [i_16])))) - (((/* implicit */int) var_16))));
                        arr_68 [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) var_14);
                        arr_71 [i_0] [i_0] [(short)1] [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_8] [i_10])) ? (var_0) : (arr_34 [i_10] [i_8] [i_7] [i_0])));
                        arr_72 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_8])) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)110)))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_7] [i_8] [i_17])))));
                    }
                }
            }
            for (unsigned short i_18 = 4; i_18 < 8; i_18 += 4) /* same iter space */
            {
                arr_76 [i_18 + 1] [i_18] [5ULL] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (-1771973) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_7] [i_7] [i_18] [i_7] [i_18 + 2])))))));
                arr_77 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_18] [i_18 - 4] [i_18 - 4])) % (((/* implicit */int) (unsigned short)52830))));
                var_39 = ((/* implicit */int) (unsigned char)146);
            }
            for (unsigned short i_19 = 4; i_19 < 8; i_19 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned char) arr_78 [i_0] [i_7] [i_19] [i_19]);
                /* LoopSeq 4 */
                for (int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */signed char) ((_Bool) arr_3 [i_0] [i_7] [i_19 - 1]));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        arr_85 [i_0] [i_7] [i_19 - 3] [i_20] [i_0] = ((/* implicit */int) var_6);
                        var_42 = ((/* implicit */unsigned char) 18446744073709551601ULL);
                    }
                    arr_86 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_19] [i_19 + 1]))) / (var_5)));
                }
                for (int i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_23 = 3; i_23 < 7; i_23 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned char) arr_3 [(_Bool)0] [i_7] [i_7]);
                        arr_95 [i_0] [i_7] [i_7] [i_7] [i_19] [i_22] [2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_66 [i_19 + 1] [i_23] [i_23 - 3]))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned short) arr_79 [i_19 + 2] [i_19 - 1] [i_19 - 3] [i_19 + 1]);
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)79)))))));
                        var_46 = ((/* implicit */int) (((~(((/* implicit */int) var_15)))) != (((/* implicit */int) var_2))));
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 231261241)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)18))))));
                    }
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 4) 
                    {
                        var_48 = ((((/* implicit */int) ((signed char) arr_0 [i_0]))) - ((+(((/* implicit */int) var_13)))));
                        var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_51 [i_19 - 1] [i_19] [i_19] [i_19 - 2] [i_19] [i_19]))));
                        var_50 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_11) << (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(short)3])) - (110))))));
                        arr_100 [i_22] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) : ((~(((/* implicit */int) var_4))))));
                        var_51 = ((/* implicit */signed char) min((var_51), (var_6)));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        var_52 = ((/* implicit */int) arr_61 [(signed char)3] [6LL] [(signed char)3]);
                        arr_103 [i_22] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-275098292)))) || (((/* implicit */_Bool) var_10))));
                        var_53 += ((/* implicit */unsigned long long int) (+(arr_42 [(unsigned short)5] [i_19 + 2] [i_19 - 1] [i_19 + 1] [i_26])));
                        arr_104 [i_0] [i_7] [i_19] [i_22] = ((/* implicit */signed char) arr_27 [i_0] [i_22]);
                    }
                    arr_105 [i_0] [i_7] [i_19] [i_0] = ((/* implicit */signed char) arr_44 [i_19 - 4] [i_19 - 3] [i_19 - 2]);
                }
                for (int i_27 = 0; i_27 < 10; i_27 += 4) /* same iter space */
                {
                    arr_109 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((var_12) & (((/* implicit */unsigned long long int) 789793241U))));
                    var_54 = ((/* implicit */unsigned long long int) ((arr_101 [i_19 - 4] [i_19 - 2] [i_19 + 1]) > (var_5)));
                    arr_110 [i_19 - 1] [i_19 - 1] [i_19] [i_19] [i_19] [i_19] = ((short) arr_12 [i_0] [i_27] [i_19 - 3] [i_19 - 1] [i_27] [i_7]);
                    arr_111 [i_27] [i_19] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                }
                for (int i_28 = 0; i_28 < 10; i_28 += 4) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned short) (((-(var_7))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)24550)) : (((/* implicit */int) var_16)))) - (24501)))));
                    arr_114 [1LL] [i_0] = ((/* implicit */unsigned short) ((arr_8 [i_28] [i_0] [i_19 - 2]) >> (((/* implicit */int) ((_Bool) var_0)))));
                    var_56 = ((/* implicit */unsigned int) var_0);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 2; i_29 < 9; i_29 += 4) 
                {
                    for (unsigned int i_30 = 4; i_30 < 8; i_30 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */int) min((var_57), ((~(1771981)))));
                            var_58 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                        }
                    } 
                } 
            }
            var_59 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_116 [i_0] [i_0] [i_7] [i_7])) / (-126340890)))));
        }
        /* vectorizable */
        for (unsigned char i_31 = 0; i_31 < 10; i_31 += 2) 
        {
            var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) var_16))));
            var_61 ^= ((/* implicit */int) 1854629080252683784LL);
            arr_122 [i_31] = ((/* implicit */signed char) var_13);
        }
        for (signed char i_32 = 0; i_32 < 10; i_32 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_34 = 0; i_34 < 10; i_34 += 2) 
                {
                    for (short i_35 = 0; i_35 < 10; i_35 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_14)))) * (((unsigned long long int) var_13)))))));
                            var_63 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_116 [i_34] [i_34] [i_33] [i_34]))) ^ (arr_5 [i_0] [i_34]));
                        }
                    } 
                } 
                var_64 += ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */int) (signed char)106)) & (((/* implicit */int) arr_10 [i_0] [(signed char)6] [i_33] [(unsigned char)1] [i_33])))) + (min((((/* implicit */int) (signed char)-79)), (-1771979))))));
            }
            var_65 = ((/* implicit */unsigned short) max((var_65), (((/* implicit */unsigned short) ((arr_82 [i_0] [i_32] [i_32] [6ULL] [i_32] [6ULL]) > (((/* implicit */unsigned int) min((arr_94 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)235))))))))));
        }
        arr_136 [4] [i_0] = ((/* implicit */short) max(((+(6560893656998566153LL))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))), (-1771981))))));
    }
    /* vectorizable */
    for (signed char i_36 = 1; i_36 < 9; i_36 += 2) 
    {
        arr_139 [i_36] [i_36] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_53 [i_36 + 1] [i_36 + 1]))));
        /* LoopNest 3 */
        for (unsigned int i_37 = 0; i_37 < 10; i_37 += 2) 
        {
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                for (signed char i_39 = 0; i_39 < 10; i_39 += 2) 
                {
                    {
                        var_66 = ((/* implicit */int) arr_124 [i_37] [i_38] [i_39]);
                        arr_149 [i_37] [i_36] [i_39] = arr_66 [i_36] [i_37] [i_39];
                    }
                } 
            } 
        } 
        arr_150 [i_36] [i_36] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (6560893656998566153LL))) == (arr_98 [i_36 + 1] [i_36 + 1] [i_36 - 1] [i_36 + 1] [i_36 - 1])));
    }
    var_67 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((min((var_3), (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))), ((((+(-1969448483103414723LL))) / ((~(var_11)))))));
    var_68 = ((/* implicit */unsigned long long int) var_17);
    var_69 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((7457829343678420177LL) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))) == (4753226422027351863ULL)))), (var_10)));
    var_70 ^= ((/* implicit */long long int) (unsigned char)78);
}
