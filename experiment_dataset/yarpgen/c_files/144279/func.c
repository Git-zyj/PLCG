/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144279
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
    var_18 = ((/* implicit */signed char) var_15);
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                    arr_10 [i_0] [i_1] [i_2] [(short)14] = ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_13);
}
