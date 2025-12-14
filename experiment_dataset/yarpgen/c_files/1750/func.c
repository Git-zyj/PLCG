/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1750
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
    var_12 += ((/* implicit */long long int) ((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2063084439U)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((int) max((((/* implicit */unsigned int) (_Bool)0)), (2231882856U))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2499115720305721491ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))) * (max((((/* implicit */long long int) var_7)), (6LL)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = arr_0 [(short)4];
        var_15 = ((/* implicit */unsigned long long int) ((long long int) ((var_4) * (((/* implicit */int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_16 += ((/* implicit */_Bool) (+(var_4)));
        arr_4 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
        var_17 = ((/* implicit */unsigned short) (_Bool)0);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */short) ((arr_8 [i_1] [i_1] [i_1]) && ((_Bool)1)));
                            var_19 = ((/* implicit */_Bool) (signed char)127);
                        }
                        var_20 = ((/* implicit */unsigned int) var_7);
                        var_21 = ((/* implicit */signed char) (+(arr_10 [i_3 - 1])));
                        arr_14 [(_Bool)1] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [1] [i_3 - 1] [i_3 - 1] [i_3 + 1])) && (arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_31 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) arr_5 [i_7 - 1] [i_9]);
                                var_22 = ((/* implicit */signed char) ((unsigned long long int) (+((-(2063084440U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                                arr_40 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_26 [i_12] [(signed char)1] [i_8] [(signed char)1] [i_6]))) / (var_1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 6; i_13 += 3) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), ((_Bool)0)));
                                arr_46 [i_13] [i_7] [i_8] [i_13 - 2] [i_13 + 4] = ((/* implicit */_Bool) (+(((/* implicit */int) (((+(((/* implicit */int) var_0)))) != (((/* implicit */int) max((var_7), ((signed char)104)))))))));
                                arr_47 [i_13] [i_13] [i_8] [i_13] [i_14] = ((/* implicit */_Bool) var_11);
                                var_25 = ((/* implicit */unsigned short) arr_35 [i_14] [(unsigned short)9] [0U] [i_7] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            arr_54 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_7] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30159))) - (2231882857U)))));
                            var_26 = ((/* implicit */unsigned long long int) (+(arr_26 [i_6] [i_6] [i_7 - 1] [i_16 + 1] [i_16])));
                            arr_55 [i_6] [(unsigned short)2] [(unsigned short)2] [i_15] [2U] = (+(((/* implicit */int) arr_22 [i_16] [i_16 - 1])));
                            arr_56 [i_6] [i_6] [9ULL] = ((((/* implicit */int) (unsigned short)52811)) / (((/* implicit */int) (unsigned short)35377)));
                        }
                        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_27 = (((!(((/* implicit */_Bool) -193801488)))) ? (((/* implicit */int) arr_34 [i_7 - 1] [i_7 - 1] [i_7 - 1])) : ((((_Bool)0) ? (365470997) : (((/* implicit */int) (unsigned short)35377)))));
                            arr_59 [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) ((_Bool) 356950150))) : (-1955788710)));
                            var_28 = ((/* implicit */long long int) ((signed char) arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1]));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_52 [i_8] [i_6]);
                            var_30 = ((/* implicit */unsigned short) arr_41 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]);
                            arr_62 [i_8] [i_8] = ((/* implicit */unsigned int) arr_38 [i_7 - 1] [i_7 + 1] [i_7 - 1] [2ULL] [i_7 + 1]);
                            arr_63 [i_8] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_6] [i_15] [i_8] [i_6] [i_6] [i_6])) - (((/* implicit */int) (short)32757))));
                        }
                        for (short i_19 = 1; i_19 < 9; i_19 += 2) 
                        {
                            var_31 -= ((/* implicit */signed char) ((int) ((unsigned long long int) var_2)));
                            var_32 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_8] [i_15] [i_8] [i_7] [i_6]))));
                            arr_66 [i_7] [i_19] = ((/* implicit */signed char) arr_18 [i_15]);
                        }
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2063084440U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (1603682580U))))));
                        var_34 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (0ULL)));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)6433)) : (arr_41 [i_21] [i_21] [i_6] [i_6])))) ? (((/* implicit */long long int) (+(113877842)))) : (var_8)))))));
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_36 = ((((/* implicit */_Bool) 1865102572U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)28)));
                                arr_76 [i_23] [i_20] [i_21] [i_22 + 1] [i_20] [i_20] = ((/* implicit */short) (-((+((-(((/* implicit */int) arr_21 [i_22]))))))));
                                arr_77 [i_23] [i_23] [2] [i_22 + 1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)13713)) & (((/* implicit */int) arr_21 [i_23]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_30 [i_6] [(signed char)6] [(_Bool)1] [i_22] [(_Bool)1])) & (arr_26 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_25 [(signed char)1] [(unsigned char)5] [i_21] [i_22] [i_22 + 1] [i_23]), (((/* implicit */unsigned short) (_Bool)1)))))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_20] [i_6])))));
                                var_37 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)21)))) + (((/* implicit */int) ((((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) != (((/* implicit */int) var_7)))))));
                                var_38 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(var_4)))))) ? (((var_11) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))) : (max((((/* implicit */long long int) ((short) var_7))), (((long long int) 758569023U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_25 = 0; i_25 < 10; i_25 += 1) 
            {
                var_39 -= ((/* implicit */_Bool) ((arr_79 [i_6] [i_24] [i_25]) + (((/* implicit */unsigned long long int) -1))));
                var_40 = ((/* implicit */_Bool) ((3542163799U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))));
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 8; i_26 += 2) 
                {
                    for (short i_27 = 3; i_27 < 9; i_27 += 1) 
                    {
                        {
                            arr_91 [i_6] [i_6] [i_25] [i_27 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)216))))))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_71 [i_25] [(_Bool)1] [i_25]))))))));
                            arr_92 [i_25] [i_25] = ((/* implicit */signed char) (((!(arr_35 [i_6] [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_26] [i_26 + 1] [i_27 - 1] [i_27 - 2] [i_27 - 2]))) : (arr_79 [i_26 + 2] [i_25] [i_24])));
                        }
                    } 
                } 
            }
            arr_93 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_28 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) (signed char)(-127 - 1)))))))) || (((/* implicit */_Bool) (signed char)-1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                arr_96 [i_6] [i_6] = ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (short i_29 = 2; i_29 < 9; i_29 += 2) 
                {
                    for (signed char i_30 = 1; i_30 < 9; i_30 += 2) 
                    {
                        {
                            arr_103 [i_24] [i_28] [i_29] [i_30 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 949903683U))))) * (((/* implicit */int) (_Bool)1))));
                            arr_104 [(_Bool)1] [i_24] [i_28] [i_29 + 1] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) arr_11 [i_6] [(_Bool)1] [i_28] [(signed char)16]);
                            arr_105 [i_30] [i_6] [i_29] [i_28] [i_6] [i_6] = ((/* implicit */int) (_Bool)0);
                            var_41 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_8)) ? (949903683U) : (((/* implicit */unsigned int) 1061046967)))));
                        }
                    } 
                } 
                var_42 = ((((/* implicit */int) arr_5 [i_6] [i_24])) < (((/* implicit */int) arr_5 [i_6] [i_6])));
                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_89 [i_6] [(unsigned short)2] [i_6] [i_28] [i_24] [(_Bool)1] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [i_24] [i_6] [i_28] [i_28]))) : (arr_26 [i_6] [i_24] [i_28] [i_6] [(short)4]))))));
            }
            for (unsigned short i_31 = 3; i_31 < 9; i_31 += 1) 
            {
                arr_109 [i_6] [i_24] [i_24] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_97 [i_6] [i_24] [i_24] [(_Bool)1] [(_Bool)1])) - (((/* implicit */int) (_Bool)1))));
                var_44 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_21 [i_31 - 1])))));
                arr_110 [i_6] = ((/* implicit */signed char) (+(3955854687U)));
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 0; i_32 < 10; i_32 += 3) 
                {
                    for (int i_33 = 4; i_33 < 6; i_33 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((arr_33 [i_31 - 1] [i_31] [i_31] [i_31 - 1]) * (arr_33 [i_31 - 3] [i_31] [i_32] [i_33]))) * ((+(arr_33 [i_31 - 2] [i_31 - 2] [i_31 - 2] [i_31 - 2]))))))));
                            arr_116 [i_33] [i_24] [i_31] [i_24] [i_33] [i_31 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28))));
                        }
                    } 
                } 
                arr_117 [i_6] [(unsigned short)5] [i_24] [i_6] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_32 [i_31 - 2] [i_31 - 3] [(signed char)8] [i_31 - 3] [i_31 - 3] [(signed char)8])))));
            }
            /* LoopNest 2 */
            for (signed char i_34 = 0; i_34 < 10; i_34 += 1) 
            {
                for (unsigned short i_35 = 2; i_35 < 8; i_35 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                        {
                            arr_127 [i_36] [i_34] [i_34] [(_Bool)1] [i_34] [i_6] = (_Bool)1;
                            arr_128 [i_35] [i_35 + 2] [(_Bool)1] [i_34] [i_35] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))) - (arr_18 [i_35 + 2])));
                        }
                        arr_129 [i_34] [i_24] [i_34] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_35])) : (arr_61 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) && ((_Bool)0));
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_17 [i_34] [i_34]) ^ (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) max((var_7), (var_7)))) : ((~((~(((/* implicit */int) (unsigned char)255))))))));
                        var_47 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_36 [i_6] [i_6] [i_34] [i_35] [i_35 - 2])))));
                    }
                } 
            } 
        }
        for (long long int i_37 = 0; i_37 < 10; i_37 += 1) /* same iter space */
        {
            var_48 = (_Bool)0;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_38 = 0; i_38 < 10; i_38 += 1) 
            {
                var_49 = ((/* implicit */short) (signed char)28);
                var_50 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) arr_131 [i_38])) : (((/* implicit */int) var_7)))) == (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) arr_22 [i_37] [i_37]))))));
            }
            var_51 = ((/* implicit */_Bool) (-(arr_115 [i_6] [i_6] [i_6] [i_6] [(short)5])));
            var_52 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_101 [i_37] [i_37] [i_37] [i_37] [i_37])), (arr_43 [i_37] [i_6] [i_37] [i_37] [i_37]))))));
            arr_135 [(_Bool)1] [i_37] = ((/* implicit */unsigned short) (~(max((var_8), (((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_102 [i_6] [i_37] [i_6] [i_37] [i_6])))))))));
        }
        for (long long int i_39 = 0; i_39 < 10; i_39 += 1) /* same iter space */
        {
            arr_139 [i_6] [i_39] [i_39] = ((/* implicit */_Bool) max((((int) arr_28 [i_6] [i_6] [i_6] [i_39] [i_6] [i_39])), (((/* implicit */int) (_Bool)1))));
            var_53 = ((/* implicit */signed char) ((((/* implicit */int) ((-978862351) > (((/* implicit */int) arr_15 [i_6]))))) != (max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((~(1073741792)))))));
        }
        arr_140 [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_37 [i_6] [i_6] [i_6]))))))), (((arr_3 [i_6]) + (((unsigned long long int) (signed char)115))))));
        arr_141 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) ^ (((((/* implicit */_Bool) arr_75 [i_6] [4ULL] [6] [i_6] [i_6] [i_6])) ? (max((((/* implicit */long long int) var_6)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
