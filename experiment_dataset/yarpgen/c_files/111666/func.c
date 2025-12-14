/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111666
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((min((((/* implicit */int) arr_5 [i_0] [(_Bool)1])), (arr_4 [i_0] [i_1] [i_0]))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) arr_3 [6LL] [i_0] [i_1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_15 [(short)7] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4092)) / (((/* implicit */int) (unsigned short)4092))));
                                arr_16 [(signed char)4] [i_3] [i_1] [i_2] [i_1] [(unsigned short)8] [i_0] = ((/* implicit */long long int) arr_2 [i_1]);
                                arr_17 [10LL] [i_1] [i_1] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                                arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_4 - 2])) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3 + 3] [i_4] [i_4])) ? (((/* implicit */long long int) 4294967281U)) : (arr_7 [i_0] [i_0] [i_0] [i_3 + 3]))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [2ULL])), (arr_10 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)4092))))), ((unsigned short)4098)));
        arr_23 [16LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61430)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61444))) & (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61433))) : (((((/* implicit */_Bool) (unsigned short)4092)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_21 [i_5 - 1])))));
        var_16 = ((/* implicit */unsigned long long int) arr_20 [i_5] [i_5]);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (unsigned char)174))) ^ (((/* implicit */int) var_4))));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) != (((/* implicit */long long int) -732931372)))))) & (arr_24 [i_6])));
        /* LoopSeq 4 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_25 [(unsigned short)5] [(unsigned short)5])) | (((/* implicit */int) arr_25 [i_6] [i_7])))))))));
            var_20 -= ((/* implicit */long long int) arr_20 [i_6] [i_6]);
            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_25 [i_7] [i_6]))))) ? (var_0) : (var_2)));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-16)) != (((/* implicit */int) ((signed char) -1554749129)))));
            var_23 += ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_6] [i_8 - 1] [i_8])) ^ (((/* implicit */int) arr_27 [i_6] [i_8 - 1] [i_8 - 1]))));
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
            {
                arr_35 [i_8] [i_8] [i_6] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8]))) : (arr_24 [(unsigned short)11])))));
                arr_36 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8] [i_9]))) != (((((/* implicit */_Bool) arr_28 [i_9] [i_6])) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) 732931371))))));
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
            {
                var_24 -= ((((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_6]))) ^ (arr_37 [i_6] [i_6]))) * (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6]))));
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 14; i_11 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8 - 1])) ? (((/* implicit */unsigned long long int) arr_39 [i_8] [i_8] [i_10])) : (arr_41 [i_8] [i_10] [i_6] [i_8])));
                    var_26 = ((/* implicit */long long int) ((arr_21 [i_11 + 1]) - (((unsigned long long int) -732931369))));
                }
                for (signed char i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
                {
                    var_27 |= ((/* implicit */_Bool) var_8);
                    arr_45 [i_8] [i_10] [i_10] [i_8] [i_8] = ((/* implicit */long long int) -732931372);
                    arr_46 [i_6] [i_8] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_21 [i_6]) - (((/* implicit */unsigned long long int) arr_39 [i_8] [i_8 - 1] [i_8])))))));
                }
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_49 [i_6] [i_8 - 1] [i_10] [i_10] [i_13] [i_8] = ((/* implicit */long long int) ((arr_33 [i_8] [i_8 - 1]) ? (((/* implicit */int) arr_33 [i_8] [i_10])) : (((/* implicit */int) arr_33 [i_8] [i_13]))));
                    arr_50 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_6] [i_6] [i_13])) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (139)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (((((var_5) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)7))))));
                }
                for (int i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    arr_55 [i_8] [i_8] [i_10] [13U] = ((/* implicit */unsigned long long int) var_0);
                    arr_56 [2] [i_8] = ((/* implicit */signed char) ((unsigned short) ((_Bool) arr_54 [i_6] [i_8] [(unsigned short)3] [i_10] [i_10] [i_14 + 1])));
                }
                for (int i_15 = 3; i_15 < 15; i_15 += 1) 
                {
                    arr_61 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_20 [(unsigned char)10] [i_6]) ? (-83542706873421196LL) : (var_7)))) ? (arr_41 [i_6] [i_8] [i_10] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)120)) / (((/* implicit */int) var_9)))))));
                    arr_62 [i_6] [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) -732931385);
                }
            }
            var_28 = (~(var_13));
            /* LoopSeq 2 */
            for (unsigned short i_16 = 3; i_16 < 12; i_16 += 4) 
            {
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((_Bool) var_5)))));
                /* LoopSeq 3 */
                for (int i_17 = 3; i_17 < 15; i_17 += 2) 
                {
                    arr_68 [i_6] [i_8] [i_8] [i_17] [i_6] = ((/* implicit */unsigned short) (-(arr_60 [i_17 - 1] [i_16 - 1])));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_33 [i_6] [i_8]))));
                    arr_69 [i_6] [i_8] [i_16] [i_8] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_12)))) + (((((/* implicit */_Bool) arr_60 [i_6] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)4092))))));
                    arr_70 [i_8] [i_8] = ((/* implicit */unsigned short) arr_59 [i_8] [i_8]);
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_28 [i_6] [i_8]))));
                }
                for (long long int i_18 = 1; i_18 < 12; i_18 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) arr_66 [i_6] [i_8] [(unsigned short)11] [i_18] [i_6] [i_16]);
                    arr_73 [i_6] [i_8] [i_16 + 4] [i_18] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61444)) >> (((/* implicit */int) (_Bool)1))));
                    var_33 ^= ((/* implicit */unsigned short) ((arr_66 [i_18] [3] [i_18 + 3] [i_16 - 2] [i_8 - 1] [i_8]) & (arr_66 [13ULL] [i_18] [i_18 + 2] [i_16 + 2] [i_16] [i_6])));
                }
                for (int i_19 = 1; i_19 < 14; i_19 += 2) 
                {
                    arr_78 [i_8] [9ULL] [i_16 + 2] [i_16 + 2] = ((/* implicit */unsigned long long int) var_9);
                    var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_6] [i_8 - 1])) / (((/* implicit */int) (signed char)-16))));
                    arr_79 [i_6] [i_8] [i_16] [i_19] [i_8] = ((/* implicit */short) (_Bool)1);
                    arr_80 [i_8] [i_8] [i_16] [i_16] [i_19 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 224)) ? (arr_24 [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_76 [i_19] [i_8] [i_16] [i_16] [i_8] [i_6])) : (arr_51 [i_8])));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_19])) ? (((/* implicit */int) (short)120)) : (((/* implicit */int) arr_77 [i_6] [i_8] [i_16 + 2] [i_16] [i_6] [i_19]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7241916561238949331LL))))));
                }
                arr_81 [i_8] [(unsigned short)10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_8] [i_16]))));
                var_36 += ((/* implicit */unsigned long long int) arr_54 [i_6] [7LL] [i_16] [i_8] [i_8] [3ULL]);
            }
            for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    for (long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        {
                            var_37 *= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_83 [(short)8] [14LL] [i_6]))) & (var_0))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_40 [i_22] [i_21] [i_20] [9] [9])) : (((/* implicit */int) arr_33 [i_20] [i_8])))))));
                            var_38 *= ((/* implicit */int) arr_48 [i_8 - 1] [i_8] [i_8] [i_8] [i_22]);
                            arr_90 [(signed char)2] [i_8 - 1] [i_8] [i_20] [i_8] [11ULL] [i_22] = ((/* implicit */unsigned long long int) arr_31 [3LL] [i_8]);
                        }
                    } 
                } 
                arr_91 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_20] [i_8] [i_8] [i_8] [i_8] [i_6])) ? (((((/* implicit */_Bool) arr_74 [13] [i_6] [i_8 - 1] [i_20])) ? (arr_22 [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_66 [i_20] [i_8] [i_8] [i_8] [7ULL] [i_6]) : (((/* implicit */unsigned long long int) var_13))))));
                arr_92 [i_6] [i_6] [i_8] [i_20] = ((/* implicit */signed char) ((int) var_13));
            }
        }
        for (unsigned short i_23 = 4; i_23 < 14; i_23 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_24 = 0; i_24 < 16; i_24 += 2) 
            {
                var_39 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_94 [i_6])) : (arr_21 [i_6]))) & (((var_9) ? (1581331710879684782ULL) : (4611686018427387903ULL)))));
                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_24] [i_23] [i_23 - 2] [i_6])) & (((/* implicit */int) arr_54 [i_6] [i_23 + 2] [i_24] [i_6] [i_6] [i_24])))))));
            }
            for (short i_25 = 0; i_25 < 16; i_25 += 1) 
            {
                var_41 = ((/* implicit */_Bool) var_8);
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) var_0))));
            }
            arr_101 [i_23] = ((/* implicit */unsigned long long int) var_12);
        }
        for (int i_26 = 0; i_26 < 16; i_26 += 4) 
        {
            arr_104 [i_6] = ((/* implicit */short) arr_24 [i_6]);
            arr_105 [i_6] = ((/* implicit */int) (unsigned char)72);
        }
    }
    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 2) 
    {
        var_43 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)11), (((/* implicit */signed char) (_Bool)1)))))) != (arr_21 [i_27]))))) & (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_106 [i_27]))))), (((16865412362829866834ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_108 [i_27])))))))));
        /* LoopSeq 2 */
        for (unsigned char i_28 = 3; i_28 < 16; i_28 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_29 = 0; i_29 < 20; i_29 += 1) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (unsigned long long int i_31 = 2; i_31 < 19; i_31 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) arr_118 [i_27] [(_Bool)1] [(_Bool)1] [i_30] [(_Bool)1]);
                            arr_119 [i_27] [i_29] [5ULL] [i_30] [i_31] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */int) arr_20 [i_27] [i_30])) - (65536))))));
                        }
                    } 
                } 
            } 
            arr_120 [i_27] [i_28 + 1] [i_27] |= ((/* implicit */int) ((arr_118 [(unsigned char)0] [i_28] [i_27] [1] [(unsigned char)0]) >> (((((((/* implicit */_Bool) arr_114 [i_28] [(signed char)13] [i_28] [i_28 + 3] [i_27] [i_27])) ? (224) : (var_3))) ^ (((/* implicit */int) arr_115 [i_27] [i_28 - 2] [i_27] [6ULL]))))));
            var_45 ^= ((/* implicit */unsigned int) arr_115 [i_27] [i_28] [i_27] [i_28]);
        }
        for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 4) 
        {
            var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((732931371) - (-215))))));
            arr_123 [i_27] [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_110 [i_27])) - (var_3)))) ? (((/* implicit */int) arr_110 [i_27])) : (((/* implicit */int) max((arr_110 [i_27]), (arr_110 [i_27]))))));
            var_47 |= ((/* implicit */int) (-(((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (2199023255551ULL)))));
        }
    }
    var_48 = 267386880;
    var_49 = ((/* implicit */short) max((536870656), (((/* implicit */int) (_Bool)1))));
}
