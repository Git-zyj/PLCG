/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125623
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [4] [18U] [i_2] = ((/* implicit */unsigned char) var_15);
                    arr_7 [i_0] [i_0] [10] |= ((/* implicit */int) var_0);
                    var_18 ^= ((/* implicit */short) var_15);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
}
