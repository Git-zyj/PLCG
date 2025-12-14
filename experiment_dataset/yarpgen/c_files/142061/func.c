/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142061
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [21LL] [21LL] = var_3;
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_0 [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] [(unsigned char)11] [i_1] [5] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_3);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((unsigned char) arr_9 [i_2 + 1] [(unsigned char)9] [i_2] [i_2 + 1]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)124));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 6; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                arr_23 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_0 [i_5 + 2])) : (((/* implicit */int) arr_0 [i_5 + 4])))), (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_0 [i_6])))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_2 [(signed char)21] [(unsigned char)13] [3U]))));
                /* LoopNest 3 */
                for (signed char i_7 = 1; i_7 < 6; i_7 += 2) 
                {
                    for (long long int i_8 = 1; i_8 < 7; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) arr_18 [i_8]);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_29 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 2] [i_9 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_32 [i_5 + 2] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
            }
        } 
    } 
}
