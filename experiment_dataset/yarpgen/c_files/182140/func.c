/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182140
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
    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_11));
    var_20 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_1 [(unsigned short)10];
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) -330398807)) && (arr_4 [i_1]))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_12))));
                            var_23 ^= ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_18)) : (-330398807)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [(unsigned short)16] [12])) ? (((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6] [2])) : (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1]))));
                    arr_19 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -330398807)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                    arr_20 [i_1] [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) arr_9 [0LL] [i_1] [i_5] [i_5]);
                }
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    arr_24 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_11);
                    arr_25 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_5)));
                    arr_26 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((var_14) ? (arr_13 [i_0] [i_0] [i_1] [18U] [i_5] [i_5] [i_7]) : (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_7] [i_0])));
                }
                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)20])))));
            }
        }
    }
}
