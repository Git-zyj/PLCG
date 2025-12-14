/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181396
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned char) var_0);
                        arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) (~(var_9)));
                        arr_13 [i_0] = ((/* implicit */unsigned int) ((((arr_8 [i_1 + 1] [i_1] [i_1] [i_1]) + (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3]))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) ^ (var_9))) - (3446210992328359141ULL)))));
                        arr_14 [i_0 - 2] [i_1] [i_3] &= ((/* implicit */long long int) var_12);
                    }
                    arr_15 [8ULL] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) var_12)))))));
                }
            } 
        } 
        arr_16 [0ULL] [(signed char)6] &= ((/* implicit */unsigned int) var_5);
        arr_17 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) arr_10 [i_0] [i_0] [11] [i_0 - 2])) < (((/* implicit */unsigned long long int) var_18))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
        {
            arr_20 [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1893010123)) ? (((/* implicit */int) (unsigned char)242)) : (1893010103)))))))) < (((unsigned long long int) var_0))));
            arr_21 [i_0] = ((/* implicit */int) (-(var_18)));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(var_10)));
            arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_10)))) - (arr_0 [i_0 + 1] [i_0])));
            /* LoopSeq 2 */
            for (long long int i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_33 [i_0 - 2] [i_8] [i_6] [i_7 - 3] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) arr_30 [i_8] [i_8] [i_6 + 1]))) | (((var_17) - (arr_10 [i_7] [i_5] [i_6] [i_6])))));
                            arr_34 [(unsigned char)11] [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) var_17));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_0] [(signed char)4] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -456546748)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned char)240))));
                        arr_40 [i_9] [6] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_0] [i_0] [i_0]))) ^ (var_14)));
                        arr_41 [4LL] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (var_9)))) : (arr_22 [10ULL] [i_6 - 1] [i_9])));
                    }
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        arr_45 [i_5] [i_5] [i_0] [i_5] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_3))) >> (((/* implicit */int) ((arr_31 [i_0 - 1] [i_5] [i_6] [i_9] [i_11] [9ULL]) < (((/* implicit */int) arr_35 [8LL] [4] [(unsigned char)0] [(unsigned char)0] [i_11 + 2])))))));
                        arr_46 [(unsigned char)10] [i_9] [i_6 + 1] [i_5] [(unsigned char)10] = ((/* implicit */_Bool) ((short) ((int) var_1)));
                        arr_47 [i_0] [i_0] [i_6] [i_9] [i_11] = ((/* implicit */short) arr_37 [i_0 - 2] [i_6 - 3] [i_11 - 1]);
                        arr_48 [i_11 + 1] [i_9] [(unsigned char)6] [i_5] [8ULL] = ((/* implicit */unsigned long long int) ((int) ((signed char) -997825685)));
                        arr_49 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((var_5) ? (var_15) : (((/* implicit */unsigned long long int) arr_5 [i_0])))));
                    }
                    arr_50 [4U] [0U] [0U] [i_0 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) | (arr_9 [i_0] [i_0] [i_6 - 2] [i_9]))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_6] [6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_14)))) ? (((((/* implicit */unsigned long long int) var_7)) * (var_14))) : (((/* implicit */unsigned long long int) var_13))));
                    arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_5] [i_6] [i_12]);
                    arr_56 [4U] [(_Bool)1] [i_6] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))));
                    arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) var_8)) > (var_10))));
                    arr_58 [11] [11] [10ULL] [i_0] = var_8;
                }
            }
            for (long long int i_13 = 3; i_13 < 11; i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (signed char i_15 = 4; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_68 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_27 [i_13 - 3] [i_13 - 3] [i_13 - 2] [9LL]));
                            arr_69 [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_8)) / (var_17)));
                            arr_70 [i_0] [i_5] [i_13] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_0)) : (456546747)));
                            arr_71 [(unsigned char)2] [(unsigned char)2] [i_0] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_5] [i_15] [i_15])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 11; i_16 += 2) 
                {
                    for (long long int i_17 = 3; i_17 < 11; i_17 += 2) 
                    {
                        {
                            arr_79 [i_5] [(signed char)0] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) arr_4 [(signed char)10]))))) ? (((/* implicit */int) arr_43 [i_17] [i_13] [(_Bool)1] [4U] [(_Bool)1] [4U] [i_0])) : (arr_36 [i_5] [i_5])));
                            arr_80 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(var_8))) / (((((/* implicit */int) (short)-27406)) / (((/* implicit */int) (signed char)-64))))));
                            arr_81 [i_0] [i_16] [i_16] [6] [i_16] [i_16] = var_13;
                            arr_82 [i_0] [i_0] [i_0 - 2] [i_16 + 1] = ((/* implicit */unsigned char) arr_3 [i_5] [i_13 - 3] [i_16]);
                            arr_83 [i_17] [i_0] [i_0 - 1] [i_5] [i_5] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_77 [i_0] [i_5] [i_13] [i_13] [i_13] [i_0]);
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                arr_86 [i_0 - 1] [i_5] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                arr_87 [i_0] [i_0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_0 - 1])) ? (var_18) : (var_10)));
                arr_88 [i_0] [i_0] = ((/* implicit */int) (~(((long long int) 14587634214011541585ULL))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    for (long long int i_21 = 2; i_21 < 8; i_21 += 4) 
                    {
                        {
                            arr_97 [i_0] [i_20] [i_0] [i_0] [(signed char)0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) arr_62 [i_0 - 1] [i_0 - 1] [i_19] [i_20 + 1] [i_21] [i_5]))))) ? (arr_94 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_74 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1])));
                            arr_98 [(unsigned char)0] [i_5] [i_5] [i_21] [i_21] = ((/* implicit */signed char) ((((-456546765) + (2147483647))) >> (((-1893010123) + (1893010124)))));
                            arr_99 [i_0] [(signed char)7] [(signed char)7] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (unsigned char)222));
                        }
                    } 
                } 
                arr_100 [(_Bool)0] [i_5] [(_Bool)0] &= ((/* implicit */unsigned long long int) var_0);
                arr_101 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [0LL] [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
    {
        for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        arr_112 [i_22] [i_23] [i_23] [i_25] [i_25] [i_25 - 1] = ((/* implicit */signed char) var_10);
                        arr_113 [i_25] [i_25] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)-51)) ^ (-1213061008)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
                        {
                            arr_118 [i_25] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (~(arr_116 [i_26] [i_26] [i_24] [i_25] [i_25 - 1])));
                            arr_119 [i_25] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_103 [0ULL])) : (arr_107 [i_23] [i_24] [i_23]))) | (arr_107 [i_25 - 1] [i_25 - 1] [i_25 - 1])));
                            arr_120 [i_23] [i_24] [i_25] [i_25] = ((/* implicit */int) ((var_17) & (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            arr_121 [i_23] [i_23] [i_26] = ((/* implicit */long long int) ((((unsigned long long int) var_6)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_102 [i_23])))))));
                            arr_122 [i_25] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (var_18) : (var_10))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 3) /* same iter space */
                        {
                            arr_126 [i_24] [i_24] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_108 [i_24]))) : (var_9)));
                            arr_127 [i_24] [i_24] [i_24] [i_22] [i_22] [i_22] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) / (((/* implicit */int) arr_108 [i_25 - 1]))));
                            arr_128 [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (-2147483645) : (((/* implicit */int) (unsigned char)13))));
                            arr_129 [(signed char)12] [i_25] [i_24] [12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((var_11) <= (var_18)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_115 [22ULL] [i_23] [22ULL] [i_25] [22ULL] [i_23])) : (((/* implicit */int) var_5))))));
                        }
                        for (unsigned char i_28 = 0; i_28 < 24; i_28 += 3) /* same iter space */
                        {
                            arr_132 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_114 [i_25]) : (var_4)))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_115 [i_24] [i_25] [i_25 - 1] [i_25] [i_25] [i_25 - 1])))));
                            arr_133 [i_25] [i_25] [(short)19] [i_23] [i_23] = ((/* implicit */unsigned long long int) arr_123 [i_22] [i_22] [i_22] [i_22] [i_22]);
                        }
                        for (unsigned char i_29 = 0; i_29 < 24; i_29 += 1) 
                        {
                            arr_136 [i_22] [i_25] [i_24] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_134 [i_25 - 1] [i_25 - 1] [20] [i_25 - 1] [i_25 - 1]))));
                            arr_137 [i_25] [i_25] [i_25] [i_25] [i_25] = ((unsigned char) arr_109 [i_22] [i_22] [i_25 - 1] [i_22]);
                            arr_138 [i_22] [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((unsigned char) arr_123 [i_25] [i_25] [(signed char)7] [i_25] [i_25 - 1]));
                        }
                    }
                    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) /* same iter space */
                    {
                        arr_141 [i_22] = ((/* implicit */unsigned long long int) (((+(((arr_114 [i_24]) - (var_13))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1)))))))));
                        arr_142 [i_22] [i_22] [i_22] [i_22] = var_13;
                    }
                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        arr_145 [i_23] [2LL] [i_23] [i_22] = ((/* implicit */int) ((arr_102 [i_24]) % (((arr_110 [i_22] [i_23] [i_23] [i_22]) * (var_15)))));
                        arr_146 [i_22] [i_22] [i_23] [i_24] [i_24] [i_31] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    }
                    arr_147 [i_22] [i_22] = ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_105 [i_24]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))));
                    arr_148 [i_22] [i_22] [i_22] = ((unsigned long long int) arr_108 [i_22]);
                    /* LoopNest 2 */
                    for (short i_32 = 0; i_32 < 24; i_32 += 2) 
                    {
                        for (int i_33 = 0; i_33 < 24; i_33 += 1) 
                        {
                            {
                                arr_153 [i_33] [i_22] [i_22] [i_23] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)213))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -5672341898993340360LL)) ? (((/* implicit */int) ((((/* implicit */long long int) -1184807649)) >= (-6821280287630471455LL)))) : (-228813056))))));
                                arr_154 [i_22] [i_22] [i_22] [i_32] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9933331013746470658ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5672341898993340349LL))))))) < ((+(var_8)))));
                            }
                        } 
                    } 
                    arr_155 [i_24] [(unsigned char)5] [i_23] [(unsigned char)5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_111 [i_24])) || (((/* implicit */_Bool) 6821280287630471448LL)))) ? (((((/* implicit */_Bool) 5672341898993340358LL)) ? (6821280287630471456LL) : (((/* implicit */long long int) 536805376U)))) : ((+(5672341898993340349LL)))))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) (-(arr_149 [i_22] [i_22] [i_22] [i_22]))))));
                }
            } 
        } 
    } 
}
