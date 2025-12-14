/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177064
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
    var_12 ^= ((/* implicit */unsigned short) ((var_8) & ((+(((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((long long int) var_6)) > (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) (~((-(((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 |= ((/* implicit */long long int) arr_7 [i_0] [i_2] [i_3] [i_4]);
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 0ULL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
