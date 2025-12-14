/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137205
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(var_4)))), (var_2)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((signed char) (-(var_11)))))));
                arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
            for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_1 [i_3])))) ? (((int) arr_0 [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) == (((/* implicit */unsigned int) arr_3 [i_4 + 1])))))) : (min((((/* implicit */unsigned int) arr_11 [i_4] [i_3] [i_1] [i_0])), (((((/* implicit */_Bool) arr_6 [i_1])) ? (4294901760U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    arr_17 [i_4] [i_4] [i_1] [4U] [i_4] [i_0] = ((/* implicit */long long int) var_4);
                    arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) var_9));
                    arr_19 [1U] [i_4] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_1])) > (((/* implicit */int) arr_13 [(short)3] [i_3 - 2] [i_4]))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                {
                    var_15 = ((/* implicit */signed char) ((long long int) arr_4 [i_5 + 2] [(_Bool)1] [i_5 + 2]));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_6))));
                }
                var_17 = ((/* implicit */long long int) ((int) arr_1 [i_3 - 2]));
                arr_23 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_3 - 3] [i_3] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_22 [i_0] [i_3] [i_0] [i_0])) : ((~(((/* implicit */int) arr_14 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [1ULL] [(short)6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_21 [(_Bool)1] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0]))))) : (((unsigned long long int) arr_22 [i_0] [i_0] [3U] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [0] [i_3] [i_3] [i_3] [i_3 - 2] [i_3])) ? (arr_16 [3] [i_3] [i_3] [i_3] [i_3 - 2] [i_3]) : (((/* implicit */long long int) var_9)))))));
            }
            var_18 = ((/* implicit */short) var_3);
            arr_24 [i_0] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))), ((-(var_2)))))) ? (((unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                for (unsigned int i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    {
                        var_19 ^= var_2;
                        var_20 = 658840998;
                        arr_32 [i_7] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_4)))))) ? (arr_21 [i_0] [i_0] [i_6] [i_0]) : ((~(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6])) ? (((/* implicit */int) arr_26 [i_0] [(unsigned short)1] [i_6])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_6]))))))));
                        arr_33 [i_7] [i_7] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_28 [i_0]);
                        arr_34 [i_7] [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_29 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1]);
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (signed char i_11 = 4; i_11 < 10; i_11 += 2) 
                    {
                        {
                            arr_43 [i_0] [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_22 [(unsigned short)8] [(unsigned short)8] [i_9] [i_9])) : (((/* implicit */int) arr_28 [i_11]))))))) : (((unsigned int) arr_20 [i_0] [i_8]))));
                            arr_44 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((((/* implicit */_Bool) arr_3 [i_10])) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_4))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_10])) & (((/* implicit */int) var_8))))))) ? (var_11) : (((/* implicit */unsigned long long int) arr_16 [i_10] [i_10] [i_11] [i_11 + 1] [i_11] [i_11]))));
                            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_35 [(unsigned short)1] [i_9]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_11])) <= (((/* implicit */int) arr_42 [i_11] [i_9] [i_8] [i_0]))))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_36 [i_8])))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_47 [i_12] [7U] [i_12] = var_8;
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))))))));
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_12] [i_12])) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_12] [(unsigned short)7])))))) : (max((((long long int) var_2)), (((/* implicit */long long int) min((arr_37 [i_0] [i_12] [i_0] [i_12]), (var_8))))))));
        }
        for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            arr_51 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_13] [i_13]);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_13] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_13]))) : (arr_29 [i_0] [i_0] [i_0] [i_0] [0U]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-13001)))))))) * (((((((/* implicit */_Bool) (signed char)-101)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) != (((/* implicit */int) (short)5721))))))))));
            arr_52 [2U] |= ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_0] [i_13])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_38 [i_0] [4LL] [4LL])) : (((/* implicit */int) ((signed char) arr_21 [i_13] [i_0] [(unsigned short)3] [i_0])))))));
            var_27 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [5ULL] [i_0])) || (((/* implicit */_Bool) arr_31 [i_0] [i_13] [i_13] [i_0] [5] [(short)6])))))), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_13])), (var_2)))) * (var_0)))));
        }
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0])), (var_7)))) ? (var_0) : (((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [4])))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_54 [i_14])))));
        /* LoopSeq 4 */
        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 2; i_16 < 23; i_16 += 1) 
            {
                var_30 = ((/* implicit */short) ((arr_59 [i_14] [i_14] [i_14] [i_16]) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)12990)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (((_Bool)1) && (arr_59 [i_14] [(signed char)23] [i_14] [i_14]))))));
                arr_63 [i_15] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_14]))) / (arr_61 [i_14] [i_16 + 1])));
                arr_64 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_16] [i_14] [i_16 - 1])) ? (arr_56 [i_16 + 2]) : (((/* implicit */unsigned int) arr_58 [i_14]))));
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                var_31 = ((/* implicit */int) min((var_31), (var_10)));
                arr_69 [i_14] [i_14] [5LL] [i_14] = ((/* implicit */unsigned int) arr_67 [i_14] [(_Bool)1] [i_14] [i_17]);
                arr_70 [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) (-(var_4)));
            }
            var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_15] [i_15] [i_15] [12]))) : (arr_57 [7ULL] [7ULL] [i_14])))));
            arr_71 [i_14] = ((/* implicit */unsigned long long int) arr_60 [i_14] [i_14] [i_15]);
            arr_72 [i_14] = ((((/* implicit */_Bool) arr_56 [i_14])) ? (arr_62 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14]))));
        }
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            var_33 *= ((/* implicit */unsigned long long int) arr_60 [(unsigned char)12] [i_18] [i_18]);
            arr_75 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((int) arr_74 [i_18]))));
            var_34 ^= ((/* implicit */unsigned int) var_7);
            arr_76 [i_14] [19ULL] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_53 [(unsigned short)15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_14])))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [8LL])))))));
            arr_80 [i_14] = ((signed char) arr_61 [i_14] [i_19]);
        }
        for (unsigned char i_20 = 1; i_20 < 24; i_20 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_20 - 1] [i_20 - 1] [i_14] [3ULL]))) : (arr_62 [i_14] [i_20])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_3)))));
            /* LoopNest 2 */
            for (long long int i_21 = 1; i_21 < 22; i_21 += 2) 
            {
                for (signed char i_22 = 1; i_22 < 23; i_22 += 3) 
                {
                    {
                        arr_87 [i_14] [i_14] = ((/* implicit */unsigned int) arr_59 [i_22 + 1] [i_22 + 1] [i_14] [i_20 + 1]);
                        arr_88 [i_14] [i_14] [i_14] [i_14] [i_14] = ((unsigned short) ((unsigned char) var_11));
                        var_37 = var_2;
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((arr_59 [i_20 + 1] [i_21 + 3] [(_Bool)0] [i_22 - 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [(_Bool)1] [16ULL]))))) : (((/* implicit */int) ((short) var_9))))))));
                        var_39 = ((/* implicit */short) arr_62 [i_20 - 1] [i_21 + 2]);
                    }
                } 
            } 
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) arr_86 [20LL]))));
            /* LoopNest 2 */
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                for (unsigned char i_24 = 1; i_24 < 22; i_24 += 2) 
                {
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_14] [i_23] [6])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_20])))))))))));
                        arr_95 [i_14] [i_20] [i_23] [i_14] [i_24] = ((/* implicit */signed char) arr_67 [i_20] [i_20] [i_14] [(signed char)22]);
                        arr_96 [(signed char)1] [i_14] [i_20] [(unsigned char)14] [i_24 + 3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (arr_86 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        arr_97 [(_Bool)1] [i_14] [i_23] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */int) arr_65 [i_14] [i_14] [i_14] [i_24 + 2])) != (((/* implicit */int) arr_65 [5U] [i_20] [(unsigned char)5] [i_24 + 1]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_25 = 1; i_25 < 24; i_25 += 2) /* same iter space */
            {
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_14] [i_20 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_14])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_14] [i_20 - 1])))))) : (var_7)));
                arr_101 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_91 [i_20 + 1] [i_25 - 1])) ? (arr_91 [i_20 + 1] [i_25 - 1]) : (arr_91 [i_20 + 1] [i_25 - 1])));
                var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) arr_79 [i_20 + 1] [i_25 + 1] [18U]))));
                var_44 = ((/* implicit */int) arr_77 [i_14]);
            }
            for (unsigned short i_26 = 1; i_26 < 24; i_26 += 2) /* same iter space */
            {
                arr_105 [8U] [8U] [8U] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_66 [i_14] [i_20])) != (var_4))))));
                var_45 = ((/* implicit */unsigned short) (signed char)30);
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
    {
        arr_108 [i_27] [i_27] = (+(((((/* implicit */_Bool) ((int) var_1))) ? (((((/* implicit */_Bool) arr_106 [i_27] [i_27])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_27]))))) : (((/* implicit */unsigned long long int) arr_61 [20] [i_27])))));
        /* LoopNest 3 */
        for (short i_28 = 3; i_28 < 9; i_28 += 1) 
        {
            for (long long int i_29 = 0; i_29 < 12; i_29 += 1) 
            {
                for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                {
                    {
                        arr_118 [i_30] [7LL] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_58 [i_27]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)1))) : (arr_58 [i_27])));
                        var_46 ^= ((/* implicit */unsigned int) min((((((/* implicit */int) (short)13000)) + (((/* implicit */int) (short)13000)))), (((((/* implicit */_Bool) arr_62 [i_28 - 1] [i_30])) ? (((/* implicit */int) (short)-19671)) : (((/* implicit */int) (signed char)-101))))));
                        arr_119 [i_27] [i_27] [i_28] [i_27] [i_29] [i_30] = ((/* implicit */unsigned short) min((min((arr_67 [i_27] [(unsigned short)2] [i_27] [i_28 + 3]), (((/* implicit */long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_27] [7U])))))))), (((/* implicit */long long int) ((signed char) var_10)))));
                        var_47 = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_60 [i_28 + 1] [i_27] [i_28 + 3])), (var_10))), (((/* implicit */int) ((short) arr_59 [i_30] [i_28] [i_27] [i_28 - 2])))));
                        var_48 = ((/* implicit */long long int) arr_93 [i_30]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_31 = 4; i_31 < 11; i_31 += 4) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 4) 
                {
                    {
                        arr_126 [i_27] = min((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((arr_82 [i_27] [i_33]) || (((/* implicit */_Bool) arr_57 [i_27] [(signed char)7] [i_27])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (var_10) : (((/* implicit */int) arr_109 [i_27] [i_31]))))) ? ((-(arr_57 [i_31 - 4] [i_32] [i_27]))) : (((/* implicit */long long int) arr_125 [i_27] [i_31] [i_27] [i_31 + 1] [i_31 - 4] [i_32])))));
                        var_49 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))));
                        arr_127 [i_31] [i_31] [i_32] |= arr_102 [i_33] [(_Bool)1] [20LL];
                        var_50 = ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */long long int) ((unsigned int) var_5));
}
