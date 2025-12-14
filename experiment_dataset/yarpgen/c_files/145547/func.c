/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145547
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
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] [i_3] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                        arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
                        arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [(unsigned short)7] [i_2] [i_2] [i_3] [i_3]);
                        arr_11 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1165806010)) && (((/* implicit */_Bool) var_11))))) != (((/* implicit */int) ((((/* implicit */long long int) -1217753613)) <= ((-9223372036854775807LL - 1LL)))))));
                        arr_12 [i_2] = ((/* implicit */long long int) arr_5 [i_0 + 1] [2] [2] [(_Bool)1]);
                    }
                } 
            } 
        } 
        arr_13 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) != (var_0))))) + (var_0)));
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_6] [(signed char)7] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32764))))))) || (((/* implicit */_Bool) var_14))));
                        arr_21 [i_0] [i_0] [i_0] [2U] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_7))));
                        arr_22 [i_0 + 1] [i_4] [0ULL] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-32758))) <= ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) 1217753613)) : (6087627899158277823LL)));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 9; i_7 += 2) 
                        {
                            arr_25 [i_7] = ((/* implicit */_Bool) var_8);
                            arr_26 [7LL] [7LL] [i_5] [i_6] [i_7] = arr_18 [i_4] [i_0 - 2];
                            arr_27 [i_0] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */signed char) var_10);
                            arr_28 [i_7] [1] [i_7 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_24 [(unsigned short)2] [i_5] [i_5 + 2] [i_5 + 1] [i_7] [i_7])) ? (arr_1 [i_4 - 2]) : (arr_1 [i_4 - 2])))));
                            arr_29 [i_7 - 2] [i_7] [(unsigned short)5] [i_5 + 2] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_4 - 3] [i_5 + 2] [i_4 - 3])) * (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_0))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_33 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1275846865U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))) : (((((/* implicit */_Bool) 1826598940U)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0])) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_8] [i_0 + 1] [i_0 + 1])))))))));
            arr_34 [i_0] [2ULL] = ((/* implicit */_Bool) var_3);
        }
        for (short i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            arr_39 [i_0] [i_0 + 1] = var_5;
            arr_40 [i_9] = ((/* implicit */long long int) 31U);
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    for (short i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_47 [i_0] [i_9] [i_11] [11LL] [11LL] = ((/* implicit */_Bool) arr_44 [i_0 + 1] [i_9 + 1] [i_11] [i_9 + 1]);
                            arr_48 [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_9 - 1] [i_0 - 1])) < (((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */int) (signed char)31))))) * (var_15)))));
                            arr_49 [i_0 - 2] [i_12 + 1] [i_11] [i_10] [i_11] [i_9] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-1LL) : (var_13)));
                        }
                    } 
                } 
            } 
            arr_50 [i_0] = (((-(var_0))) != (((/* implicit */long long int) arr_32 [i_0 + 1])));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                arr_54 [i_13] = ((/* implicit */short) arr_41 [i_0 - 2] [i_0 - 2] [(unsigned char)4]);
                /* LoopSeq 3 */
                for (unsigned char i_14 = 1; i_14 < 10; i_14 += 4) 
                {
                    arr_57 [i_0] [i_9] [i_13] [i_13] [(signed char)0] = ((((/* implicit */_Bool) ((31U) >> (((((/* implicit */int) (signed char)-1)) + (10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_36 [i_9 - 1] [(unsigned char)7] [i_0 - 1])) : (((/* implicit */int) arr_36 [i_9 - 1] [i_9 - 1] [i_0 - 1]))))));
                    arr_58 [0LL] [i_9] [i_9] [i_13] = ((/* implicit */signed char) (-(-1748615174427062733LL)));
                    arr_59 [6] [6] [i_13] [i_14] [i_13] = ((/* implicit */long long int) (short)-32752);
                }
                for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    arr_62 [i_0] [i_15] [i_0] [i_15] [i_15] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_42 [i_0] [i_9 + 1])) != (arr_15 [i_9 + 1] [0]))))));
                    arr_63 [i_0 - 2] [(signed char)4] [i_13] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 725852643))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        arr_69 [i_13] = ((/* implicit */unsigned short) var_15);
                        arr_70 [i_0 - 2] [i_0 - 2] [i_13] [i_0 - 2] [i_13] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) & (((/* implicit */int) ((arr_24 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) arr_41 [i_13] [i_9] [i_0 + 1])))))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        arr_73 [i_16] [i_18 - 1] [i_16] [i_13] [i_0 - 2] [i_16] = ((/* implicit */unsigned int) ((-1748615174427062730LL) <= (var_13)));
                        arr_74 [i_13] = ((/* implicit */long long int) var_6);
                    }
                    arr_75 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22358)) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_76 [i_13] [i_13] [i_13] [i_16] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_61 [i_13] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_0)))))));
                }
            }
            for (short i_19 = 1; i_19 < 10; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    for (signed char i_21 = 2; i_21 < 10; i_21 += 3) 
                    {
                        {
                            arr_86 [i_0] [i_9] [i_0] [i_20] [i_21] [i_0] = ((/* implicit */unsigned int) var_8);
                            arr_87 [6LL] [6LL] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_7))) < (9223372036854775806LL)))));
                            arr_88 [i_0] [i_0] [10LL] [i_19 - 1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~((-(arr_0 [i_19 + 1])))))) / ((-(var_14)))));
                            arr_89 [i_0] [i_9 - 1] [i_9] [i_19 + 1] [i_21] [i_20] [i_21 - 1] = ((/* implicit */int) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 8; i_22 += 4) 
                {
                    for (signed char i_23 = 3; i_23 < 11; i_23 += 1) 
                    {
                        {
                            arr_95 [6LL] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9 - 1] [(short)10] [(signed char)1] [i_23 - 2])) ? (arr_43 [i_9 + 2] [i_9] [i_9] [i_23 - 3]) : (arr_43 [i_9 + 2] [i_9 + 2] [i_9] [i_23 - 3])))) ? (var_0) : (((var_13) + (arr_43 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_23 - 1])))));
                            arr_96 [i_23 + 1] [i_22 + 2] [i_19 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_22] [i_22] [10ULL] [(_Bool)1])) && (((/* implicit */_Bool) arr_38 [i_0 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (int i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        {
                            arr_101 [(short)2] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_82 [i_19 + 1] [i_0] [(signed char)7] [i_0 - 2]) / (arr_82 [i_19 + 2] [i_9] [i_9] [i_0 + 1])))) ? (arr_82 [i_19 - 1] [i_19] [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) var_11))))))));
                            arr_102 [(short)1] [i_9] [(short)1] [i_24] = ((/* implicit */short) 4294967261U);
                            arr_103 [i_0] [i_0] [i_0] [i_24] [i_25] = ((/* implicit */short) (((((-9223372036854775807LL - 1LL)) / (var_0))) * (-18014398509481984LL)));
                            arr_104 [(short)10] [i_9 + 2] [(unsigned char)4] [i_9] [i_9 + 2] [(unsigned char)4] [i_9 + 2] = ((/* implicit */short) var_1);
                            arr_105 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                    } 
                } 
            }
            for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_27 = 1; i_27 < 10; i_27 += 3) 
                {
                    for (signed char i_28 = 2; i_28 < 8; i_28 += 3) 
                    {
                        {
                            arr_116 [i_26] [i_9 - 1] [5ULL] [0U] [i_28 - 1] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((arr_30 [i_9 - 1] [3ULL] [i_28 - 1]) - (((/* implicit */int) var_3))))));
                            arr_117 [i_26] [i_26] = ((/* implicit */short) (-(-4583882746651821360LL)));
                            arr_118 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_26] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                arr_119 [i_26] [(unsigned short)7] [(signed char)6] [i_26] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                arr_120 [i_26] = ((/* implicit */signed char) (~(var_4)));
            }
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            arr_123 [i_0] [i_0 + 1] [9LL] = ((/* implicit */signed char) (~((-9223372036854775807LL - 1LL))));
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 12; i_30 += 1) 
            {
                for (signed char i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    {
                        arr_130 [(signed char)8] [i_30] [(signed char)8] [6] = ((/* implicit */unsigned int) (signed char)4);
                        arr_131 [10LL] [10LL] = ((arr_38 [2ULL]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        arr_132 [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_114 [(signed char)4] [i_0] [i_0 - 2] [i_0 - 2] [(signed char)10] [i_0 - 2])) ? (arr_114 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [(signed char)8] [i_0]) : (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2240115555U)) && (((10734241276373724873ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) : (arr_18 [i_0] [0])));
                        arr_133 [10ULL] [i_29] [i_29] = ((/* implicit */int) var_10);
                    }
                } 
            } 
            arr_134 [i_29] [i_0] = ((/* implicit */unsigned short) var_16);
        }
    }
    for (unsigned int i_32 = 0; i_32 < 18; i_32 += 2) 
    {
        arr_138 [i_32] = ((/* implicit */unsigned short) arr_136 [i_32]);
        arr_139 [i_32] [(signed char)10] = ((/* implicit */int) -9223372036854775807LL);
        arr_140 [i_32] = ((/* implicit */int) arr_137 [i_32]);
    }
    for (unsigned char i_33 = 2; i_33 < 14; i_33 += 2) 
    {
        arr_143 [i_33] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)22357)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_15)))))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) < (var_12))) || (((/* implicit */_Bool) (~(var_1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_34 = 0; i_34 < 16; i_34 += 3) 
        {
            for (unsigned char i_35 = 3; i_35 < 13; i_35 += 3) 
            {
                {
                    arr_149 [i_33] [i_34] [i_35 + 1] [i_34] = ((/* implicit */unsigned short) var_16);
                    arr_150 [i_33] [i_34] [i_33] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_147 [i_35] [i_35 - 1] [i_34] [4U])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_147 [i_35 - 3] [i_35 + 3] [i_34] [i_35 + 3])) ? (-1839854828079169500LL) : (((/* implicit */long long int) ((/* implicit */int) arr_147 [i_35] [i_35 + 1] [i_34] [i_35]))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    var_19 = ((/* implicit */long long int) ((var_15) | (3853454645593003371ULL)));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-43))));
}
