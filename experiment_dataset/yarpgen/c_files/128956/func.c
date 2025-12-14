/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128956
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_12 [1U] [i_1] [(unsigned short)12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [10U] [i_1] [i_1] [i_3] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) arr_10 [i_3] [i_1] [i_2] [i_3] [i_3])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */signed char) (~(arr_4 [i_0] [i_0])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_19 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */long long int) arr_11 [i_5]);
                    arr_20 [i_0] [i_4] [i_4 - 1] [i_5] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        arr_21 [(signed char)11] = ((/* implicit */unsigned long long int) ((short) (+(arr_4 [i_0] [i_0]))));
        arr_22 [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [i_0] [i_0]);
        arr_23 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)16]) : (arr_10 [(signed char)13] [3U] [3U] [i_0] [i_0])));
    }
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        arr_27 [i_6 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_6 + 1])) << (((((/* implicit */int) arr_14 [i_6])) - (146)))));
        arr_28 [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [(unsigned char)3] [(unsigned char)11])) ? (((/* implicit */unsigned long long int) arr_24 [1] [i_6])) : (var_3)));
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned int) arr_4 [i_7] [i_7]);
        arr_34 [i_7] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_7] [(signed char)11] [(unsigned char)18] [i_7] [i_7] [i_7])) & (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) | (var_4))))), (((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [(unsigned char)1]))) : (var_3))));
    }
}
