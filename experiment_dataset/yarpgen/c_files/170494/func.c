/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170494
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
    var_20 &= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) -615230424766394300LL);
                arr_7 [i_0] [2ULL] [i_0] = arr_2 [(short)2] [(unsigned char)4];
                var_21 = ((/* implicit */unsigned long long int) (unsigned char)6);
            }
        } 
    } 
}
