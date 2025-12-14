/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147010
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)54972)) << (((((/* implicit */int) var_5)) - (26250))))))))));
            arr_6 [(_Bool)1] [i_1] = ((/* implicit */long long int) 3078089628U);
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_11 = ((/* implicit */long long int) arr_10 [i_3] [i_1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) arr_11 [i_0] [i_4 + 3] [i_2] [i_2 + 1] [i_0])))))));
                        var_13 = (unsigned short)22988;
                        var_14 = ((/* implicit */signed char) var_7);
                    }
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_15 = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6)));
                    arr_17 [i_5] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 3969004690U);
                    arr_18 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5])) || (((/* implicit */_Bool) ((arr_14 [i_2 + 1] [(signed char)0] [i_0 - 1]) * (325962598U))))));
                    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) var_9));
                }
                arr_19 [i_1] [i_1 - 2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1] [i_1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) arr_3 [i_2])) : (arr_7 [i_1] [i_2 + 1] [i_1 + 1] [i_2])));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [i_0] [i_6]))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
                {
                    var_18 += ((/* implicit */short) (unsigned short)22988);
                    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483641)) ? (975763984) : (((/* implicit */int) arr_25 [i_0] [i_1 - 3] [i_0 - 2]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_20 = ((unsigned long long int) ((signed char) (unsigned char)241));
                        arr_28 [i_0 - 2] [i_8] [i_0 - 2] [i_0 - 2] [i_8] [i_7] [i_1] = ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned int) 12887832643391150880ULL);
                        var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0 + 1] [i_0 - 2]))));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_7] [i_1] [(signed char)8] [i_7] [i_0] [i_7])) & (((/* implicit */int) (unsigned char)7))));
                        var_24 -= arr_21 [i_9] [(unsigned char)6] [i_6] [4];
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_34 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42230)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        arr_35 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (325962610U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_0)))))));
                    }
                    var_25 = ((unsigned char) var_6);
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) (+(arr_23 [i_1] [i_1 + 2] [i_1] [i_1])));
                        arr_41 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)42230)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) arr_12 [i_12] [i_11] [i_6] [i_0] [i_0]))));
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2701358594575803908ULL)) ? (arr_12 [10U] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_28 = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        arr_47 [i_1] [i_1] [i_11] [i_14] = ((/* implicit */unsigned long long int) ((arr_46 [i_14] [i_11] [i_1] [i_1] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0 - 2] [i_6] [i_1 + 2])))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) ^ (((/* implicit */int) arr_22 [i_0] [i_1] [i_6] [i_11]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_6] [i_14]))) : (9653169772655451036ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((537543243U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
                        var_30 = ((/* implicit */signed char) (+(arr_2 [i_0 + 1])));
                        arr_48 [i_0] [i_1] [(short)11] [i_1] [i_0] = ((/* implicit */unsigned short) arr_26 [(signed char)4] [(signed char)4] [i_1] [i_1] [i_11] [i_14] [i_14]);
                    }
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_20 [i_1 - 2] [i_0 - 2] [i_6] [i_11])) : (((/* implicit */int) arr_20 [i_1 - 3] [i_0 + 1] [i_6] [i_1 - 3]))));
                    var_32 = ((/* implicit */_Bool) arr_29 [i_0 - 2] [i_0] [i_1 + 1] [i_1 + 1] [i_0]);
                }
                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) 27ULL));
                var_33 = ((/* implicit */unsigned char) ((((7277993351223609166ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0 - 1] [i_1] [i_1] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_44 [i_0] [i_1] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                var_34 = ((/* implicit */long long int) ((unsigned int) (unsigned short)23001));
            }
            for (signed char i_15 = 2; i_15 < 8; i_15 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [i_0 - 2] [i_0] [i_1] [i_15])))) : (var_7)))));
                var_36 = arr_14 [i_0] [i_1] [i_15];
                var_37 = ((/* implicit */_Bool) (+(arr_14 [i_15 + 2] [i_1] [i_1 + 1])));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (unsigned char i_17 = 2; i_17 < 10; i_17 += 2) 
                    {
                        {
                            var_38 -= (-(((/* implicit */int) arr_29 [i_0 - 2] [i_1] [i_1] [i_16] [i_16])));
                            var_39 = ((/* implicit */unsigned long long int) var_5);
                            var_40 = ((/* implicit */short) -975763984);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) min((var_41), (((((/* implicit */_Bool) arr_56 [i_15] [i_15] [i_15] [i_0 + 1] [8ULL] [i_15] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (4294967295U)))));
            }
        }
        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                arr_63 [i_0] [9ULL] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? ((-(((/* implicit */int) (unsigned short)22988)))) : ((-(((/* implicit */int) (unsigned char)43))))));
                arr_64 [i_18] = ((/* implicit */long long int) arr_52 [i_0]);
            }
            /* LoopSeq 2 */
            for (unsigned char i_20 = 1; i_20 < 10; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    for (long long int i_22 = 4; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_42 = 3969004690U;
                            arr_72 [i_20] [1U] [i_20 + 1] [i_21] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) 4730560225214507622LL)) ? ((+(27ULL))) : (((/* implicit */unsigned long long int) arr_67 [i_22] [(signed char)10] [i_18] [i_0]))));
                            var_43 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) var_5)) : (-1))) << (((((/* implicit */int) arr_50 [i_22 - 4] [i_20 - 1] [i_18] [i_0 + 1])) - (11)))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0 - 1] [i_18] [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_23 = 2; i_23 < 11; i_23 += 4) 
                {
                    arr_76 [i_23 - 1] [i_20] [4ULL] = ((/* implicit */int) (+(arr_23 [i_20] [i_18] [i_20 - 1] [i_23])));
                    arr_77 [i_20] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_8)))) <= (((/* implicit */int) arr_50 [i_20 - 1] [i_23 + 1] [i_23] [i_23 - 1]))));
                    arr_78 [i_20] [i_20] = ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0] [(signed char)4] [i_20 - 1] [i_20] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)));
                    var_45 = ((/* implicit */signed char) ((14536301124861786410ULL) / (((/* implicit */unsigned long long int) arr_74 [i_0] [i_23]))));
                }
                var_46 = (i_20 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) / (((var_7) << (((((/* implicit */int) arr_68 [i_0] [i_20] [(unsigned char)9] [i_20])) + (119)))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) / (((var_7) << (((((((/* implicit */int) arr_68 [i_0] [i_20] [(unsigned char)9] [i_20])) + (119))) - (188))))))));
            }
            for (unsigned long long int i_24 = 3; i_24 < 11; i_24 += 2) 
            {
                arr_83 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_24 - 1])) <= (((/* implicit */int) var_8))));
                var_47 &= ((/* implicit */int) arr_39 [i_0]);
                var_48 = ((/* implicit */signed char) arr_70 [i_0]);
            }
        }
        var_49 = ((/* implicit */unsigned short) var_1);
        var_50 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (arr_57 [i_0] [i_0 - 1]) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2])))));
        arr_84 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0])) ? (arr_74 [i_0] [i_0]) : (((/* implicit */int) arr_52 [i_0])))))));
    }
    var_51 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)201), (((/* implicit */unsigned char) var_0))))) != (((/* implicit */int) ((short) 975763974)))))) % (((/* implicit */int) max((((/* implicit */short) var_0)), (((short) 4730560225214507620LL)))))));
}
