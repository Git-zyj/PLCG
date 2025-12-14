/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187004
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [3U] = ((/* implicit */unsigned char) ((unsigned int) (-9223372036854775807LL - 1LL)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [(short)8] [i_1 - 2] [(short)8] [i_0] = arr_6 [i_2 + 3] [i_1] [i_2 + 2];
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned short) (-(arr_6 [i_3] [6U] [i_0])));
                        arr_12 [i_2] = ((/* implicit */unsigned int) var_9);
                    }
                    for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 1]))));
                        arr_16 [i_4] [i_4 + 1] [i_4 + 1] [i_4] = var_4;
                    }
                    arr_17 [i_0] [i_1] [i_2 + 2] = ((/* implicit */signed char) ((int) var_10));
                    arr_18 [i_0] [(unsigned char)13] = ((((/* implicit */_Bool) arr_13 [i_2 + 3] [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1 + 3] [i_2] [11LL] [i_2 - 1])));
                    arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) arr_3 [i_1 - 2] [i_1 - 1]);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_1);
        arr_25 [i_5] = ((/* implicit */short) var_13);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_32 [i_5] [i_6 - 2] [i_7] [i_7] = arr_30 [i_5] [i_5] [i_5];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        arr_35 [i_8] [i_8] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_6 - 1] [i_8 - 2] [i_8])) ? (((unsigned long long int) arr_23 [i_5])) : (((/* implicit */unsigned long long int) arr_23 [i_6 + 1]))))) ? (((/* implicit */unsigned int) min((-1119875923), (2147483647)))) : (min((((((/* implicit */_Bool) -2147483647)) ? (arr_31 [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))));
                        arr_36 [i_8] = ((/* implicit */unsigned long long int) (~(((((67043328U) < (((/* implicit */unsigned int) -2147483647)))) ? (arr_6 [i_5] [i_6] [i_7]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
                        arr_37 [(signed char)6] [i_8] [i_7] = max((arr_6 [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (unsigned char)247))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 1) 
                    {
                        arr_40 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14)));
                        arr_41 [i_6] [i_9] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_10 [i_9 - 2] [i_6 + 1] [i_6 - 2] [(unsigned short)3])) ? (arr_20 [i_6 + 1]) : (arr_20 [i_6 - 2]));
                        arr_42 [i_5] [i_6] [i_6] [i_9] [i_9] = ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7]))))) : (((/* implicit */int) arr_29 [i_5] [i_9 - 3] [i_7] [i_9 - 3])));
                    }
                    for (int i_10 = 1; i_10 < 8; i_10 += 1) 
                    {
                        arr_46 [i_10] [i_10] [i_7] [i_10] [i_5] = ((/* implicit */signed char) (+((+(((unsigned int) (unsigned char)211))))));
                        arr_47 [i_5] [i_10] [i_5] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247)))))));
                        arr_48 [i_5] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)16384)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_5] [i_6 - 2] [i_10])) ^ (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_43 [i_10 + 1] [9U])) ? (var_4) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)8))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_6 - 2] [i_10 + 1] [i_6] [i_6 - 1])))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 2; i_12 < 8; i_12 += 1) 
        {
            arr_54 [i_12] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) ((_Bool) var_6)))), (((((((/* implicit */_Bool) arr_22 [i_11])) || (((/* implicit */_Bool) var_9)))) ? (arr_51 [i_11]) : (min((-2147483620), (arr_53 [i_12])))))));
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        {
                            arr_61 [i_12] [i_13] [i_12] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1354149089)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (short)-29701)) : (((/* implicit */int) (unsigned short)11333))))) : (67043328U)))));
                            arr_62 [i_12] [i_12] = ((/* implicit */signed char) ((int) max((((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)0)))), (arr_1 [i_11]))));
                            arr_63 [i_11] [i_12] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_53 [i_12])), (arr_10 [5U] [i_12] [4ULL] [i_14])))));
                            arr_64 [i_11] [i_12 - 1] [i_11] [i_12] = ((/* implicit */unsigned int) arr_29 [i_11] [i_11] [i_13] [(unsigned short)1]);
                            arr_65 [i_11] [i_12] [i_13] [i_12] [i_14] [i_15] = ((((/* implicit */int) (unsigned short)49728)) | (((/* implicit */int) (unsigned char)216)));
                        }
                    } 
                } 
            } 
            arr_66 [i_12] [i_12] = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned char) var_13)), (((unsigned char) (unsigned char)255)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                arr_70 [i_11] [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_16] [i_16] [i_16] [i_16] [i_12 - 2]))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned char i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        {
                            arr_77 [i_11] [i_12] [i_12] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */short) (-(((/* implicit */int) arr_50 [i_18 - 1] [i_18 - 1]))));
                            arr_78 [i_18] [i_12] [i_16] [i_16] [i_16] [i_12] [i_11] = ((/* implicit */unsigned long long int) arr_45 [i_11]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    arr_81 [i_11] [i_11] [i_12 - 1] [i_11] [i_16] [i_12] = ((/* implicit */unsigned long long int) ((-2147483647) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53186))) != (var_3))))));
                    arr_82 [i_16] [i_12] [0] [i_16] [i_16] [i_16] = ((/* implicit */long long int) 2147483647);
                }
                for (unsigned char i_20 = 1; i_20 < 7; i_20 += 3) 
                {
                    arr_86 [i_11] [i_12] [i_16] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_5 [i_11] [i_12]))))));
                    arr_87 [i_11] [4U] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11] [i_11] [i_12] [i_20 + 2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_11]))) + (var_3)))));
                    arr_88 [i_12] [i_12] [i_16] [i_20] [i_20] = arr_84 [i_20 - 1] [i_20 - 1] [i_12 - 1] [i_12];
                }
            }
        }
        /* LoopSeq 2 */
        for (signed char i_21 = 1; i_21 < 9; i_21 += 1) 
        {
            arr_91 [i_11] [i_21] [i_21] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)33)))));
            arr_92 [i_21] = max((((/* implicit */int) (unsigned char)9)), (min((((/* implicit */int) ((signed char) -2147483620))), (((((/* implicit */int) var_10)) << (((((/* implicit */int) (short)-16541)) + (16544))))))));
        }
        for (long long int i_22 = 1; i_22 < 8; i_22 += 1) 
        {
            arr_95 [i_11] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_11])) ? (((((/* implicit */_Bool) arr_5 [i_22 + 2] [i_22 + 1])) ? (((/* implicit */int) arr_5 [i_22 - 1] [i_22 + 2])) : (((/* implicit */int) arr_5 [i_22 - 1] [i_22 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 2488976177238111321ULL)) || ((_Bool)0))))));
            arr_96 [i_11] [(signed char)7] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_53 [i_11])) ? (((/* implicit */int) arr_29 [i_11] [i_22 + 1] [i_22 - 1] [i_22])) : (arr_53 [i_11]))), (((/* implicit */int) arr_83 [i_22] [i_22 + 2] [i_22 - 1] [i_22]))));
            arr_97 [1U] [(signed char)2] [(signed char)2] = ((/* implicit */short) ((((/* implicit */_Bool) 4023764558368727589ULL)) ? (((((/* implicit */_Bool) arr_30 [i_11] [i_11] [(_Bool)1])) ? (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)54202)) : (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) arr_30 [i_11] [i_11] [i_11])))) : (((/* implicit */int) (signed char)6))));
            arr_98 [i_11] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_11]))))) >= (min((((/* implicit */unsigned int) arr_51 [i_11])), (arr_94 [i_11] [i_22 + 1])))))), (var_9)));
        }
    }
}
