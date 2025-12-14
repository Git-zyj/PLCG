/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160798
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
    var_14 = ((unsigned int) var_13);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) arr_0 [18U]);
        arr_2 [i_0] = ((/* implicit */int) var_0);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20584)) ? (((/* implicit */unsigned long long int) (~(-2147483634)))) : (4686312980349876086ULL)));
        arr_6 [i_1] [4LL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [(_Bool)0] [i_1]))))) ? (((unsigned long long int) arr_3 [i_1])) : (max((((/* implicit */unsigned long long int) (unsigned short)64520)), (12054103409015846907ULL)))))));
        var_16 = min((((/* implicit */short) min((((/* implicit */unsigned char) var_6)), (arr_4 [i_1] [i_1])))), (var_4));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */short) var_5);
        arr_10 [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (arr_7 [i_2]))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_8 [i_2]), (arr_8 [i_2])))) ? (((/* implicit */long long int) ((int) arr_8 [i_2]))) : (arr_8 [i_2])));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_1 [i_2]), (arr_1 [i_2])))))))));
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_3]))))) : (min((((/* implicit */long long int) arr_0 [i_2])), (arr_8 [i_3])))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((((unsigned int) arr_18 [i_4] [i_4 + 1] [i_4] [i_4])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2])))))));
                        arr_20 [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
            arr_21 [i_3] = ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */long long int) max((arr_18 [(short)4] [(short)4] [i_3] [i_2]), (((/* implicit */int) arr_4 [i_2] [i_3]))))) : (((long long int) var_3)));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_17 [i_2] [i_2] [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_11 [9U])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (arr_19 [i_3] [9] [i_3] [1ULL]))) : ((+(arr_18 [i_2] [i_3] [i_2] [2U])))))));
            arr_22 [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((arr_17 [i_2] [i_3] [i_3] [0U]), (arr_17 [i_2] [i_2] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) min(((+(var_2))), (((/* implicit */long long int) arr_0 [i_2])))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 7; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_25 [i_7] [i_6] [i_2]) : (arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 3])));
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        arr_34 [i_2] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) -1657162641));
                        var_22 -= ((/* implicit */long long int) ((signed char) arr_15 [i_2] [i_6 - 1] [i_7] [i_8]));
                        arr_35 [i_2] [i_6] [i_6] [i_9] [i_2] [i_8] [i_9] = ((/* implicit */long long int) ((unsigned int) arr_17 [i_8] [i_8] [i_7] [i_6 - 1]));
                        arr_36 [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_2])) : (arr_19 [i_8] [(short)5] [2] [i_2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_33 [i_9] [i_6] [i_2] [i_6] [i_2])))));
                    }
                    for (long long int i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((short) var_0));
                        arr_39 [i_2] [i_6] [i_7] [i_8] [2U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_2] [i_6 - 1] [i_8] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_28 [i_2] [i_6 - 1] [i_8] [i_10 - 2])));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((unsigned int) (unsigned short)54910))));
                    }
                    arr_40 [i_2] [i_6 + 3] [i_7] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) 2493002428U));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        arr_43 [i_2] [i_6 + 2] [i_7] [i_8] [i_11] [i_8] = ((unsigned long long int) arr_41 [i_2] [i_6 + 1] [i_11]);
                        arr_44 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_2] [i_6] [i_6]))));
                    }
                    arr_45 [i_2] [i_6 + 3] [i_7] [i_8] = ((/* implicit */unsigned short) ((long long int) arr_28 [i_2] [i_6 + 1] [(unsigned short)8] [i_8]));
                }
                for (unsigned short i_12 = 4; i_12 < 8; i_12 += 2) 
                {
                    arr_48 [i_12] [i_12 - 4] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_12 - 1] [i_12 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12 - 2] [i_12 + 1]))) : (arr_11 [i_6 + 3])));
                    arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((unsigned int) var_0);
                    var_26 = ((/* implicit */short) arr_17 [i_6 + 3] [i_6 + 1] [i_7] [i_12 + 1]);
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        arr_54 [i_2] [i_6 + 1] [i_6] [i_7] [i_12 + 1] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_13] [i_6] [i_6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_2] [i_6 + 2] [i_12 + 2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_2] [i_2] [i_2]))) : (var_2)))));
                        var_27 = ((/* implicit */unsigned short) ((unsigned int) arr_33 [i_12 + 2] [i_12 - 2] [i_12 + 2] [i_12 - 2] [i_12 - 4]));
                        var_28 = ((/* implicit */unsigned int) ((short) arr_18 [i_2] [i_6 - 1] [(unsigned short)0] [i_12 - 2]));
                    }
                    for (unsigned int i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned int) arr_19 [i_2] [i_2] [i_2] [i_2])))));
                        arr_57 [3LL] [i_6] [i_14] [i_6] [i_14] = ((/* implicit */unsigned char) ((short) arr_53 [i_14 - 1] [i_14 - 1]));
                        var_30 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_12 - 3] [i_12] [i_12 - 2] [3ULL]))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 8; i_15 += 2) /* same iter space */
                    {
                        arr_62 [7] [i_15] [i_12 - 4] [i_6 - 1] [i_6] [i_6 - 1] [7] = var_4;
                        arr_63 [i_2] [i_6] [i_6] [i_7] [i_12] [i_15] = ((/* implicit */_Bool) ((short) arr_1 [i_15 + 1]));
                    }
                    for (short i_16 = 3; i_16 < 8; i_16 += 2) 
                    {
                        var_31 = ((/* implicit */int) ((_Bool) arr_66 [i_6] [i_6] [i_6 + 2] [i_16] [i_12] [i_12 + 1] [i_16 + 2]));
                        arr_67 [i_16] [i_2] [i_7] [i_2] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64525))));
                    }
                }
                for (unsigned int i_17 = 2; i_17 < 7; i_17 += 3) 
                {
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (+(arr_66 [i_17 + 3] [i_17 + 1] [i_17 + 1] [i_7] [i_6 + 2] [i_6 + 3] [i_6 + 2]))))));
                    var_33 *= ((((/* implicit */_Bool) (unsigned short)64506)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64512))) : (8388607U));
                    /* LoopSeq 2 */
                    for (short i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        var_34 ^= var_8;
                        arr_73 [i_2] [i_2] [i_6] [i_7] [i_17] [i_18 - 2] [i_18 - 1] = arr_55 [i_18];
                    }
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        arr_78 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_77 [i_6 + 2] [i_7] [i_17 + 3] [i_7] [i_17 - 2] [i_17]));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (899510702067655863LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32758)))));
                        var_36 -= ((/* implicit */long long int) arr_59 [i_2] [i_2]);
                    }
                }
                for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) arr_0 [i_6 + 1]);
                    /* LoopSeq 1 */
                    for (short i_21 = 1; i_21 < 9; i_21 += 3) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6 + 1])) ? (((/* implicit */int) arr_14 [i_6 - 1])) : (((/* implicit */int) arr_14 [i_6 - 1])))))));
                        arr_86 [i_2] [i_6 - 1] = ((/* implicit */long long int) var_5);
                    }
                    var_39 = arr_80 [i_2] [i_2] [i_7] [(short)1];
                    var_40 *= ((/* implicit */unsigned int) arr_83 [i_2] [i_2] [i_6 - 1] [i_7] [i_20]);
                }
                /* LoopSeq 1 */
                for (unsigned int i_22 = 1; i_22 < 6; i_22 += 3) 
                {
                    var_41 -= ((/* implicit */unsigned int) (~(arr_16 [i_6 + 3] [i_6])));
                    var_42 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_22] [i_6 + 2] [i_7] [i_22 + 3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_92 [i_2] [i_6 + 2] [i_7] [(_Bool)1] [i_6 + 3] [i_22] [2ULL] = ((/* implicit */unsigned short) ((signed char) arr_56 [i_6] [i_7]));
                        arr_93 [(unsigned char)0] [0LL] [i_7] [i_22 - 1] [i_23] [i_23] [0LL] = ((((/* implicit */_Bool) var_0)) ? (arr_50 [i_22] [8LL] [i_22] [i_22 + 3] [i_22 + 1] [i_22]) : (var_0));
                    }
                }
                var_43 = ((/* implicit */long long int) ((unsigned int) -518825923));
            }
            for (int i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (var_7) : (((/* implicit */unsigned int) arr_76 [i_6] [i_2] [i_6] [i_6 + 2])))))));
                    var_45 -= ((/* implicit */short) ((long long int) arr_7 [i_6 + 3]));
                    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (+(var_3))))));
                    arr_98 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */int) (~(arr_37 [i_2] [i_6 + 1] [i_6] [i_6 + 1])));
                }
                for (int i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_2] [i_2] [i_2] [i_6] [i_24] [i_2])) ? (arr_46 [(signed char)1] [i_24] [i_6]) : (arr_50 [i_2] [i_6 + 1] [i_2] [i_24] [i_24] [i_26]))))));
                    arr_101 [i_2] [i_2] = ((/* implicit */long long int) arr_88 [i_26] [i_26] [i_24] [i_6] [(unsigned short)7] [i_2]);
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_6 + 3] [7U] [i_6 + 2] [i_6 + 1] [i_6 + 1])))))));
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) arr_16 [4ULL] [i_24]))));
                }
                var_50 = ((/* implicit */short) arr_27 [i_6 + 1] [(unsigned char)3] [i_6 - 1] [i_6 + 2]);
                var_51 -= ((/* implicit */long long int) ((unsigned short) 7ULL));
                /* LoopSeq 2 */
                for (long long int i_27 = 4; i_27 < 8; i_27 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_52 = ((/* implicit */long long int) max((var_52), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6 - 1]))) : (var_0)))));
                        arr_108 [i_28] [i_28] [i_6 + 2] = ((/* implicit */unsigned int) (-(arr_66 [i_27 - 4] [i_27 - 1] [i_27] [i_28] [i_27 - 4] [i_28] [i_27 + 2])));
                        arr_109 [i_2] [i_2] [i_2] [i_2] [i_2] [5] [i_28] = ((/* implicit */signed char) (~(var_12)));
                    }
                    var_53 -= ((short) (short)-32757);
                }
                for (unsigned int i_29 = 1; i_29 < 8; i_29 += 3) 
                {
                    var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))));
                    var_55 -= ((/* implicit */unsigned short) var_3);
                    var_56 = ((/* implicit */unsigned int) var_4);
                }
            }
            for (long long int i_30 = 3; i_30 < 7; i_30 += 3) 
            {
                arr_116 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_6 + 3] [i_6 + 3] [i_30 - 2])) ? (((/* implicit */int) arr_70 [i_6 - 1] [i_6 + 1] [i_30 + 2])) : (((/* implicit */int) arr_70 [i_6 - 1] [i_6 - 1] [i_30 + 1]))));
                var_57 *= ((/* implicit */signed char) ((long long int) arr_16 [i_30 - 2] [i_2]));
                arr_117 [i_2] [i_6 + 3] [i_6 + 3] [i_30 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_2] [i_6 + 2] [i_30 + 2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_38 [i_6 - 1] [i_6 + 2] [i_30] [i_30 - 1] [i_30]))));
            }
            var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_110 [(short)7] [i_2] [i_6] [i_6 + 3])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_3)) : (arr_115 [i_2] [i_2] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_96 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 3] [i_6 + 1]))))))));
        }
        for (signed char i_31 = 0; i_31 < 10; i_31 += 3) 
        {
            var_59 = ((/* implicit */unsigned int) ((_Bool) ((short) arr_120 [i_31])));
            var_60 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_71 [i_2])))) ? (arr_107 [i_2] [(short)4] [i_2] [i_31] [(unsigned short)8]) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_102 [i_2] [1] [i_31])) : (((/* implicit */int) arr_69 [i_2] [i_2] [i_2] [i_31])))), (((/* implicit */int) arr_56 [i_2] [i_2]))))));
        }
    }
    for (int i_32 = 4; i_32 < 18; i_32 += 2) 
    {
        arr_123 [i_32 + 2] = ((/* implicit */signed char) arr_122 [i_32 - 3] [i_32 - 3]);
        arr_124 [i_32] [i_32] = ((/* implicit */unsigned int) var_2);
    }
    var_61 = ((/* implicit */long long int) var_9);
}
