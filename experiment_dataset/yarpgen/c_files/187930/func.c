/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187930
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_10))));
    var_14 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((+(arr_0 [i_0] [i_0 + 2]))) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_8 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_5 [i_0] [i_1 - 1]))))))) : (arr_8 [i_0] [i_2]));
                        var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_1 + 1] [i_0 + 2])) | (var_7)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_15 [i_2] [i_1 + 1] [i_2] [14LL] [i_4] [i_4] = ((/* implicit */unsigned short) arr_5 [i_0] [i_2]);
                        var_18 = ((min((arr_11 [i_1 - 1] [i_1]), (((/* implicit */long long int) var_8)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_0] [(unsigned char)4])))) || (((_Bool) (short)-26546)))))));
                        arr_16 [i_2] = ((/* implicit */long long int) min((((((/* implicit */int) ((short) arr_8 [i_4] [i_2]))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) var_1))));
                        var_19 = ((/* implicit */unsigned long long int) (!(arr_6 [i_4])));
                    }
                    var_20 = ((/* implicit */short) min((min((arr_9 [i_0 + 2] [i_0 + 1] [i_0]), (arr_8 [i_1 - 1] [i_2]))), (var_5)));
                    var_21 ^= ((/* implicit */short) arr_14 [i_0 - 1] [i_1]);
                    arr_17 [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(arr_3 [i_0 + 2] [i_1 - 1])));
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_8 [i_0 + 2] [(_Bool)1]))) ? (max((arr_8 [i_0 + 1] [3ULL]), (arr_8 [i_0 + 2] [i_0 + 1]))) : (min((var_5), (arr_8 [i_0 - 1] [i_0 + 1])))));
                    var_23 -= ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                }
                for (short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_1 - 1] [i_0 + 1] [i_0 + 1] = (-((+(((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1])))));
                    var_24 = ((/* implicit */long long int) min((arr_13 [9LL] [i_0 - 1] [i_0] [i_0 + 2] [i_0]), (arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_1 - 1] [i_0] [i_7] [i_0] [i_7 - 1] = ((/* implicit */_Bool) (~(var_9)));
                        arr_29 [i_0] [i_0 - 1] [i_6] [i_7] = ((/* implicit */short) arr_25 [i_0 + 2] [i_0 - 1] [i_6] [i_6]);
                        var_25 = ((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_1 - 1] [i_1 - 1] [i_7 + 2] [15U]));
                        var_26 = ((/* implicit */unsigned short) ((arr_26 [i_0 + 1] [i_0 + 2] [i_1] [i_1 + 1]) + (((arr_7 [5LL] [13ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0])))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_8] [i_0 + 2] = ((/* implicit */short) var_4);
                        var_27 = arr_33 [i_8] [i_1 - 2] [13LL] [i_8];
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) : (min((arr_32 [i_8] [i_6] [i_1 - 2] [i_0 + 1]), (arr_32 [i_0 - 1] [i_1 - 2] [i_6] [i_8])))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_29 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(arr_32 [i_0 - 1] [i_0] [i_1] [i_1 - 1]))))));
                        }
                        arr_40 [(short)4] [i_1] [i_6] [i_1 - 2] [i_6] [i_9] = ((/* implicit */unsigned int) arr_27 [0ULL] [0ULL] [i_1 - 2] [i_0]);
                        var_31 = ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                    }
                }
                var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((arr_2 [i_0]) + (2020932986))) - (31)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_1 - 1]))) : (min((arr_26 [(unsigned short)6] [i_1 - 1] [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 1] [i_1])))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                            {
                                var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1]))));
                                var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_47 [i_12 - 1] [i_1 - 2] [i_0 + 2] [(short)9])))));
                                var_35 = ((/* implicit */short) (~(max((((/* implicit */long long int) (short)-21503)), (-313489209763784114LL)))));
                            }
                            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                            {
                                arr_51 [(unsigned char)9] [i_1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) == (((/* implicit */int) arr_43 [i_0 + 1] [i_0] [i_1 - 1]))));
                                arr_52 [i_0] [i_12] [i_12] = ((/* implicit */short) ((long long int) arr_4 [i_1 - 2] [i_12]));
                                arr_53 [i_0] [i_0] [i_12] [4LL] [i_0] [i_14] = ((/* implicit */long long int) var_8);
                                arr_54 [i_12] = ((/* implicit */unsigned char) var_9);
                            }
                            var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((var_7) > (((/* implicit */unsigned long long int) var_9))))), (arr_32 [i_12 + 1] [i_12] [4LL] [i_12])));
                        }
                    } 
                } 
            }
        } 
    } 
}
