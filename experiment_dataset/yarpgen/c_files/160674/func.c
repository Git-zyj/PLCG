/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160674
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_13 = ((/* implicit */_Bool) var_1);
                /* LoopSeq 4 */
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [i_2]))));
                        arr_11 [i_0] [i_1] [(unsigned short)3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : ((+(var_6)))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_11)) | (var_6)));
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((var_11) <= (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                    }
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_8 [(unsigned short)12] [(_Bool)1] [(unsigned short)12] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_0)) : (var_9)))))));
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_15 [0ULL] [i_2] [i_1] [(signed char)6] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (var_9)));
                    var_18 = ((/* implicit */int) var_2);
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_18 [i_6] [i_2] [i_0] = ((/* implicit */int) ((unsigned char) ((unsigned char) var_12)));
                    arr_19 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_19 -= ((/* implicit */unsigned short) var_4);
                }
                for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3895111445U) : (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1] [i_1])))))));
                        arr_26 [i_7] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_25 [(unsigned short)8] [4] [i_8] [4ULL] [i_0] [i_0] [2ULL])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) / (((((/* implicit */_Bool) arr_8 [i_8] [i_7] [10] [i_7] [i_0])) ? (var_6) : (var_9)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))));
                        var_23 &= ((/* implicit */unsigned char) ((arr_14 [(short)5] [i_2] [(signed char)6] [(short)5]) ? (((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_0] [i_0] [i_0])))) : (arr_23 [i_0] [i_1] [i_1] [i_2] [(short)9] [i_9] [i_9])));
                        var_24 ^= ((/* implicit */unsigned int) var_8);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_8);
                        var_26 = ((/* implicit */int) (+((+(1073217536U)))));
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_27 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) | ((+(((/* implicit */int) var_2))))));
                        arr_34 [9] [i_7] [i_7] [i_1] = ((/* implicit */short) var_1);
                    }
                    var_28 = ((/* implicit */short) ((unsigned int) (+(arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_0] [(unsigned char)8] [i_2] [i_7]) ? (((/* implicit */int) var_8)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((var_6) | (((/* implicit */unsigned int) var_11))))));
                    arr_35 [i_0] [i_7] [i_7] = ((/* implicit */signed char) var_12);
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                var_30 = ((/* implicit */short) ((var_3) > (((/* implicit */unsigned int) ((int) var_1)))));
                /* LoopSeq 1 */
                for (long long int i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    var_31 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 399855867U)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_2)))) / ((+(((/* implicit */int) (signed char)106))))));
                    var_32 = ((/* implicit */unsigned char) var_3);
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_11))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_12] [i_13 + 1])) : (((/* implicit */int) var_8)))))))));
                }
            }
            arr_40 [i_0] [i_0] = ((/* implicit */short) var_9);
        }
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 1; i_16 < 13; i_16 += 3) 
                    {
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)2] [i_15] [i_16 - 1]))) ^ (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((long long int) var_5))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+(var_11))))));
                    }
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned char)93))));
                        arr_50 [i_0] [i_0] [i_14] [i_17] = ((/* implicit */long long int) var_10);
                        arr_51 [i_14] [i_14] [(_Bool)1] [i_14] = (~(((((/* implicit */int) var_10)) | (arr_4 [i_0] [(_Bool)1] [(_Bool)1] [i_0]))));
                        arr_52 [6LL] [i_14] [i_14] [i_14] [i_14] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_57 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
                        var_37 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)44)))))));
                        var_38 = ((/* implicit */_Bool) var_11);
                        arr_58 [i_14] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_3)))));
                    }
                    for (unsigned char i_19 = 3; i_19 < 11; i_19 += 1) 
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_14] [i_15] [i_19])) & (((/* implicit */int) arr_1 [i_14] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_14] [i_14] [i_15] [i_15])))))) : (((unsigned long long int) var_5))));
                        arr_61 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) arr_60 [i_14] [i_15] [i_14] [(signed char)3] [i_0] [i_14]);
                        arr_62 [i_0] [(_Bool)1] [(unsigned short)11] [i_19 - 2] [i_19 + 3] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_22 [i_14] [i_15] [i_15] [i_14] [i_0]))) | (((/* implicit */int) ((signed char) arr_5 [i_0] [i_14] [i_15] [(unsigned char)11])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            arr_67 [i_15] [i_14] = ((/* implicit */int) var_6);
                            arr_68 [i_14] [i_14] [10U] [i_19] [i_19] [i_15] = ((/* implicit */unsigned short) 2147483647);
                            arr_69 [i_0] [i_0] [i_14] [i_19] [i_20] = ((/* implicit */short) ((int) ((((/* implicit */int) arr_16 [(_Bool)1] [12] [12] [i_20])) % (((/* implicit */int) var_2)))));
                        }
                        arr_70 [i_0] [i_14] [9] [i_14] [i_19] = ((/* implicit */unsigned char) var_3);
                    }
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        arr_73 [(_Bool)0] [(short)2] [i_15] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                        var_40 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_44 [i_14] [i_15] [i_21])))) % (((((/* implicit */_Bool) arr_7 [i_0] [i_14] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_77 [i_14] [(short)12] [i_15] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_22] [i_14] [i_15] [i_15] [i_15] [i_14])) ? (((/* implicit */int) ((short) arr_38 [i_0]))) : (((/* implicit */int) ((signed char) var_12)))));
                    }
                    var_42 = ((/* implicit */unsigned char) (+(arr_64 [i_14] [i_14])));
                    var_43 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483647)) ? (var_5) : (arr_8 [i_0] [i_0] [i_0] [i_14] [i_0]))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_71 [2] [(short)8] [i_14] [(short)8])))))));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_11)))))) ? (var_5) : (((unsigned long long int) (-(var_0))))));
}
