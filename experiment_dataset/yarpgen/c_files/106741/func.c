/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106741
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_16 = 9545932311748925064ULL;
                            arr_14 [(_Bool)1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_5 [10ULL] [i_1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
            }
            for (signed char i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) (+(((arr_9 [i_0] [i_0] [(signed char)6] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1])))))));
                var_20 = (~(((((/* implicit */int) arr_8 [i_1])) & (((/* implicit */int) arr_10 [i_1])))));
            }
            for (signed char i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
            {
                var_21 -= ((/* implicit */unsigned char) (-(arr_18 [12] [i_1 + 2])));
                arr_22 [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_6] [i_6 + 1] [i_1] [i_0])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)0] [8LL] [(signed char)6] [i_1] [i_6 - 1]))))));
                var_22 += ((/* implicit */unsigned char) var_12);
            }
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1 + 2] [10ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [(unsigned short)8]))));
                var_24 = ((/* implicit */unsigned short) 13U);
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [10LL] [i_1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_7])))));
            }
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) ((_Bool) var_12));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))) ? (arr_17 [i_1] [i_1 + 1]) : (arr_29 [i_9] [i_8] [i_1 - 2] [i_0])));
                        var_28 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_19 [i_0] [(unsigned char)14] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 + 2] [i_8] [2ULL]))) : (arr_17 [10LL] [i_1]))));
                        arr_34 [(unsigned char)12] [11ULL] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1] [4])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_10])) : (((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_1]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_1 + 1] [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_19 [i_1 + 2] [i_1 - 2] [i_1 - 1]))));
                        arr_37 [i_0] [7] [i_8] [i_9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))));
                    }
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8900811761960626551ULL)) ? (arr_9 [i_0] [i_1] [i_8] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)1] [i_1 - 2])))))) || (var_9))))));
                    var_31 = ((/* implicit */int) var_3);
                    arr_38 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_15 [i_1] [i_1 + 2] [i_1])));
                    var_32 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [9U] [i_9] [i_1] [9U] [i_1] [(unsigned char)9] [i_0])) : (((/* implicit */int) var_11))))));
                }
                var_33 = ((/* implicit */unsigned char) ((arr_9 [i_1 + 2] [i_1 + 1] [i_8] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1 + 2] [i_1] [i_1 - 1])))));
                var_34 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_13)))));
            }
            arr_39 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1] [i_1])) ? ((((_Bool)1) ? (var_7) : (arr_17 [i_1] [(signed char)13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            var_35 = ((((/* implicit */_Bool) arr_27 [i_1] [i_1 + 1])) ? (arr_27 [i_1] [i_1 + 2]) : (arr_27 [i_1] [i_1 + 1]));
        }
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [10ULL] [(signed char)0])) ? (((/* implicit */int) (unsigned char)227)) : (220266927)))) ? (((((/* implicit */_Bool) arr_17 [(signed char)8] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [4U] [i_0] [i_0])) : (arr_18 [8] [8])))));
    }
    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) var_2)), (var_7))))))))));
}
