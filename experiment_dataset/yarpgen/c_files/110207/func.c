/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110207
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_1 [(signed char)23]);
                        arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_2 [i_1] [i_2])) - (212))))) + (((/* implicit */int) var_1)))) <= (((/* implicit */int) arr_8 [1LL] [i_2] [i_1] [i_0 + 1] [1U] [(signed char)13]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((long long int) var_7)) * (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((var_0) + (147184206))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_4]);
                    }
                    var_14 = ((/* implicit */unsigned short) ((unsigned char) arr_5 [23LL] [i_1] [i_1] [i_0]));
                    var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0] [i_0] [i_0]);
                }
                arr_16 [i_0] = ((/* implicit */signed char) arr_5 [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_3);
}
