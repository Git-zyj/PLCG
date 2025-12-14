/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118174
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [10] = var_1;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_11 [(unsigned char)4] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((21U) >> (((1099511627775ULL) - (1099511627758ULL)))))) || ((!(arr_10 [i_3 + 1] [i_2 + 1] [(unsigned char)14] [i_1] [4ULL])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [(unsigned short)6] [6ULL] [(signed char)8] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) var_0);
                            arr_16 [i_0] [4U] [i_3] = ((/* implicit */unsigned short) (unsigned char)111);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_20 [(unsigned short)16] [i_5] [i_2] [0] [i_2 + 1] = ((((/* implicit */_Bool) arr_13 [(unsigned char)17] [i_1 - 1] [i_5] [i_2 - 2] [10ULL])) ? (arr_13 [15] [i_1 + 1] [i_5] [(unsigned char)1] [14ULL]) : (((/* implicit */unsigned int) var_7)));
                        arr_21 [(short)9] [(unsigned char)8] [12U] [11LL] [i_5] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) >> (((9223372036854775807LL) - (9223372036854775803LL)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [i_5] = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) (short)29607))));
                            arr_26 [i_5] [i_6] [i_2] [i_5] [i_2] [i_2] [(unsigned char)0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_31 [i_7] [i_5] = ((/* implicit */unsigned int) ((long long int) arr_24 [i_1 - 1] [i_2 - 2] [(_Bool)1] [(_Bool)1] [1U] [i_7 + 1] [i_7]));
                            arr_32 [(unsigned short)14] [i_1] [12U] [2] [6] = ((/* implicit */long long int) 16400005371063519605ULL);
                            arr_33 [(signed char)7] [i_1] [i_5] [(short)15] [1ULL] [0ULL] = ((/* implicit */unsigned int) ((49765686) % (((/* implicit */int) arr_30 [i_7 + 1] [i_5] [10ULL] [i_1 + 1] [i_5] [i_0]))));
                            arr_34 [(short)7] [i_5] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                    }
                    for (short i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        arr_38 [13] [19LL] [i_2 + 2] [i_8] [9ULL] [5] = ((/* implicit */long long int) var_1);
                        arr_39 [(_Bool)1] [18U] [10U] [11] = ((/* implicit */unsigned long long int) ((short) arr_9 [(unsigned char)9] [i_1 - 1] [(short)13] [(unsigned char)9] [i_0]));
                        arr_40 [(unsigned char)2] [i_0] [i_1] [i_2 - 2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (3061821365707937302LL)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                arr_46 [(signed char)7] [(signed char)9] [i_1 - 1] [3] [8LL] [(unsigned char)2] = ((/* implicit */unsigned long long int) 2717500433U);
                                arr_47 [13LL] = ((/* implicit */unsigned long long int) (signed char)64);
                                arr_48 [i_9] [i_9] [(_Bool)1] [i_9 + 2] [i_9] [2LL] [(short)8] = ((/* implicit */unsigned short) 1061830209);
                                arr_49 [(unsigned char)8] [(short)19] [7ULL] [16LL] [i_10] = ((/* implicit */unsigned long long int) (short)-32765);
                                arr_50 [i_0] [(unsigned char)12] [(signed char)15] [(short)14] [6LL] [i_9 - 1] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) > (((unsigned long long int) arr_17 [11ULL] [i_1] [i_2 - 2] [(signed char)19])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 &= ((/* implicit */long long int) var_4);
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) ((signed char) (short)3834)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_8)) : (3061821365707937302LL)))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
}
