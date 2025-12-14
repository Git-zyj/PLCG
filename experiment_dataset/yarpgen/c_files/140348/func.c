/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140348
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
    var_20 = ((/* implicit */long long int) ((_Bool) ((unsigned char) 948111122)));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))))) + (2147483647))) >> (((((/* implicit */int) var_16)) - (12138))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 2] [i_3] [(short)14] [i_3] [10ULL] = ((/* implicit */int) var_14);
                                var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_4]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) var_12);
                }
                var_24 ^= ((/* implicit */_Bool) arr_6 [1ULL] [i_1 - 4]);
                var_25 = ((/* implicit */signed char) min((((unsigned long long int) (-(((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((-3440479789012930395LL) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))) & ((~(var_13))))) : (((/* implicit */unsigned int) var_7))));
}
