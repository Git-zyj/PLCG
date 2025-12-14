/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138691
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
    var_13 &= ((/* implicit */unsigned long long int) 2147483647);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) ((signed char) 167014081U)))));
                    arr_9 [i_0] [i_0] [i_2 - 2] [i_2 - 3] = ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
                }
            } 
        } 
    } 
}
