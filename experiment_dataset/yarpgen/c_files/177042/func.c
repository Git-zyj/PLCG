/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177042
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 + 2])) ? (arr_7 [i_1 - 1] [i_1 + 2]) : (arr_7 [i_1 + 3] [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-17179))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (short)17178);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] [(unsigned char)3] [i_6] = ((/* implicit */unsigned short) arr_0 [i_5]);
                                var_13 = ((/* implicit */unsigned char) arr_7 [i_2] [i_3]);
                                var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2])) ? (var_0) : (((/* implicit */int) arr_11 [i_2]))))) ? (arr_4 [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5])))))) - (min((((/* implicit */unsigned long long int) (~(var_10)))), (((arr_3 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) var_4);
                                var_16 = ((/* implicit */unsigned int) (~(((arr_7 [i_2 - 1] [i_2 + 2]) & (((/* implicit */int) arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_4 - 1]))))));
                                arr_28 [i_2] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */int) arr_26 [i_2] [i_7] [i_2] [i_3] [i_2]);
                                arr_29 [(short)6] [i_3] [i_8] [i_7] [i_8] [(unsigned short)0] = arr_6 [i_2] [i_4] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            {
                arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_13 [i_10 - 1] [i_10] [i_9]))))));
                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_17 [6ULL] [i_10] [5] [i_10 + 1] [i_10] [i_10])) ? (((((/* implicit */_Bool) (short)14685)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (919290301298644361ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(signed char)11] [(signed char)11] [i_9] [i_9] [i_9])) ? (arr_17 [i_9] [i_10] [i_9] [i_9] [i_9] [i_9]) : (arr_17 [9ULL] [9ULL] [0] [0] [(unsigned char)10] [0]))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_34 [(unsigned short)1] [i_10 - 1])) & (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10])))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned short i_12 = 4; i_12 < 12; i_12 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                            {
                                arr_44 [i_9] = ((/* implicit */unsigned short) (+(arr_34 [i_12 - 4] [i_10 + 1])));
                                arr_45 [i_9] [i_9] [i_11] [i_10] [i_9] = ((/* implicit */signed char) arr_43 [i_10 - 1] [i_9] [i_10] [i_10] [i_10]);
                            }
                            var_19 = ((/* implicit */unsigned short) arr_23 [i_9] [(_Bool)1] [i_11] [i_11] [i_12]);
                            arr_46 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_9] [i_9] [i_9]))))) ^ (((((/* implicit */_Bool) (unsigned short)32141)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_3 [i_9])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [3] [i_10] [i_11] [i_11])) ? (277242462) : (((/* implicit */int) arr_9 [5ULL])))))))) : (((/* implicit */int) arr_2 [i_11]))));
                        }
                    } 
                } 
                arr_47 [i_9] [i_9] [i_9] = arr_0 [i_9];
            }
        } 
    } 
}
