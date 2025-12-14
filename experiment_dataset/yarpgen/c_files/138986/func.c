/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138986
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((((unsigned long long int) var_11)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */signed char) max((((/* implicit */short) ((unsigned char) max(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_1])))))), (((short) arr_4 [i_1] [i_1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_20 ^= ((/* implicit */short) arr_8 [i_2] [i_2]);
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_14 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)10)) ? (((var_3) >> (((((/* implicit */int) arr_3 [i_3])) - (43))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (arr_11 [i_3])));
                        var_22 = ((/* implicit */short) (+(arr_7 [i_2] [i_4] [i_2])));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59988)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1023))) : (arr_7 [i_1] [i_1] [i_1])))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        arr_19 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3]);
                        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2])) || (((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6] [i_6] [i_6] [i_1] [i_6]))));
                        arr_20 [i_1] [i_3] [i_2] [i_3] [i_3] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_17 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]))));
                        arr_21 [i_3] = (!(((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_6] [i_6 - 1] [i_3] [i_6])));
                    }
                }
                var_25 = ((/* implicit */unsigned char) ((_Bool) arr_12 [i_1] [i_2] [i_3] [i_3] [i_3] [i_3]));
            }
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) ((signed char) var_11))) : ((~(((/* implicit */int) arr_1 [i_8]))))));
                    arr_29 [i_7] = ((_Bool) (short)-32754);
                    arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)35)) | (((/* implicit */int) arr_12 [i_8] [i_7] [i_7] [i_2] [i_1] [i_1]))));
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10 - 1] [i_7] = ((/* implicit */signed char) arr_28 [i_1] [i_2] [i_2] [i_2] [i_7] [i_10]);
                        var_27 = ((/* implicit */int) arr_9 [i_10 - 1] [i_10] [i_10 - 1]);
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1] [i_2] [i_9] [i_11]))) + (var_0)));
                        arr_38 [i_2] [i_7] [i_11] = ((/* implicit */_Bool) arr_18 [i_7] [i_7]);
                    }
                    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 3) 
                    {
                        var_29 = arr_27 [i_9] [i_9] [i_7] [i_2] [i_1];
                        arr_41 [i_1] [i_2] [i_7] [i_7] [i_1] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_7] [i_9] [i_7] [i_2])))));
                    }
                    arr_42 [i_9] [i_7] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_5 [i_2]);
                }
                var_30 += arr_40 [i_2];
            }
            for (int i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                arr_46 [i_13] [i_2] [i_1] [i_13] = ((/* implicit */int) arr_34 [i_1] [i_13] [i_13] [i_13] [i_2]);
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 1; i_15 < 23; i_15 += 3) 
                    {
                        var_31 += ((/* implicit */short) (unsigned char)203);
                        var_32 = ((/* implicit */unsigned int) arr_28 [i_1] [i_2] [i_2] [i_13] [i_13] [i_15 - 1]);
                        arr_53 [i_2] [i_13] [i_14] [i_13] = ((((/* implicit */int) arr_9 [i_13] [i_13 - 1] [i_15 + 1])) >> (((arr_7 [i_2] [i_13] [i_15 - 1]) - (6934394551146498635LL))));
                        arr_54 [i_1] [i_1] [i_1] [i_13] [i_14] [i_14] [i_15 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((-856699114) + (856699139)))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        arr_59 [i_14] [i_2] [i_14] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */int) arr_26 [i_13] [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) arr_25 [i_13 - 1] [i_13 + 2] [i_13 + 1] [i_13 - 1]))));
                        var_33 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)1)) && ((_Bool)1)));
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */short) arr_12 [i_13 + 2] [i_2] [i_13 - 1] [i_13 - 1] [i_17] [i_13 - 1]);
                        arr_63 [i_1] [i_2] [i_13] [i_1] [i_13] = (i_13 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_13] [i_13 + 2])) >> (((((/* implicit */int) arr_18 [i_13] [i_13 + 2])) - (15451)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_13] [i_13 + 2])) >> (((((((/* implicit */int) arr_18 [i_13] [i_13 + 2])) - (15451))) - (38971))))));
                        arr_64 [i_1] [i_2] [i_13] [i_14] [i_17] [i_17] [i_13] = ((/* implicit */short) arr_57 [i_1] [i_2] [i_13] [i_13] [i_14] [i_17]);
                        var_35 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)72))));
                        var_36 = ((/* implicit */unsigned char) ((short) arr_16 [i_13 - 1] [i_13] [i_13 - 1]));
                    }
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_37 += ((/* implicit */_Bool) ((unsigned int) arr_45 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]));
                        arr_68 [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_13] [i_13] [i_13 + 1]))));
                    }
                    var_38 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */int) min((var_39), ((+(((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 4; i_20 < 22; i_20 += 4) 
                    {
                        arr_73 [i_1] [i_2] [i_20] [i_1] &= ((/* implicit */signed char) arr_36 [i_13 - 1]);
                        arr_74 [i_1] [i_13] [i_13] = ((/* implicit */_Bool) ((short) arr_4 [i_1] [i_2]));
                        arr_75 [i_19] [i_19] [i_20] [i_19] [i_20] [i_19] [i_19] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_2] [i_1] [i_13 + 2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        arr_76 [i_1] [i_1] [i_13] [i_2] [i_13] [i_19] [i_20] = ((/* implicit */short) var_10);
                    }
                    arr_77 [i_19] [i_13] [i_13] [i_13] [i_1] = arr_28 [i_13 + 1] [i_13] [i_13] [i_19] [i_13] [i_19];
                }
            }
            var_40 = (!(((/* implicit */_Bool) (unsigned short)65535)));
            arr_78 [i_1] [i_2] = arr_18 [i_2] [i_2];
            arr_79 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_2] [i_1]))));
        }
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 3) 
        {
            arr_82 [i_1] [i_1] = ((/* implicit */int) min((min((arr_11 [i_1]), (arr_11 [i_1]))), (max((arr_11 [i_1]), (arr_11 [i_1])))));
            /* LoopSeq 2 */
            for (unsigned int i_22 = 3; i_22 < 20; i_22 += 4) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((7930970772747537683ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_31 [i_21] [i_21] [i_21] [i_22 - 2] [i_22 + 4]))))) || (((/* implicit */_Bool) (-(((unsigned int) (unsigned short)37536)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    var_42 ^= arr_3 [i_23];
                    var_43 ^= ((/* implicit */unsigned char) ((long long int) arr_65 [i_1]));
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */int) arr_69 [i_22 - 3] [i_22 - 3])) * (((/* implicit */int) arr_3 [i_1])))))));
                    arr_88 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_91 [i_21] [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_32 [i_21] [i_21] [i_22] [i_24] [i_1] [i_22]))))))));
                    arr_92 [i_1] [i_21] [i_22] [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_24]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        arr_95 [i_1] [i_22] [i_22] [i_24] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_22] [i_22 - 3]))));
                        var_45 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_22 - 1] [i_22 - 3] [i_22] [i_22 - 2] [i_22 + 4] [i_24])) : (((/* implicit */int) var_7))));
                    }
                    for (signed char i_26 = 3; i_26 < 22; i_26 += 4) 
                    {
                        arr_98 [i_21] [i_21] [i_22] [i_26] = ((/* implicit */long long int) min((((/* implicit */int) arr_34 [i_26] [i_22] [i_22 + 4] [i_22] [i_1])), (max((var_1), ((~(((/* implicit */int) (short)15))))))));
                        var_46 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((var_15), (min((((/* implicit */short) arr_43 [i_1] [i_21] [i_1])), (arr_70 [i_22])))))), ((+(min((((/* implicit */long long int) var_15)), (arr_55 [i_1] [i_1] [i_22 - 1] [i_1] [i_22 - 1] [i_26])))))));
                    }
                    var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12)))))));
                }
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    var_48 &= ((/* implicit */unsigned char) (((((_Bool)1) && (arr_89 [i_1] [i_1] [i_22] [i_27] [i_1]))) ? (arr_100 [i_27] [i_27]) : (((/* implicit */int) arr_65 [i_27]))));
                    /* LoopSeq 1 */
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 4) 
                    {
                        arr_104 [i_22] [i_27] [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) arr_97 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_49 = ((/* implicit */signed char) ((int) min((arr_48 [i_21] [i_22] [i_27] [i_28]), (arr_48 [i_21] [i_22 + 2] [i_27] [i_28]))));
                    }
                }
                var_50 += arr_99 [i_1] [i_21] [i_21] [i_21];
            }
            for (unsigned int i_29 = 0; i_29 < 24; i_29 += 1) 
            {
                var_51 = ((/* implicit */unsigned char) arr_101 [i_1] [i_21] [i_1] [i_29]);
                arr_108 [i_1] [i_1] [i_21] [i_29] |= ((/* implicit */unsigned int) arr_87 [i_29] [i_29] [i_29] [i_29] [i_29]);
            }
            var_52 ^= ((/* implicit */signed char) arr_90 [i_1] [i_1] [i_1] [i_1]);
        }
    }
    for (signed char i_30 = 0; i_30 < 20; i_30 += 4) 
    {
        arr_111 [i_30] [i_30] = arr_43 [i_30] [i_30] [i_30];
        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_30] [i_30] [i_30] [i_30]))))))))));
        var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) arr_8 [i_30] [i_30]))));
    }
}
