/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172754
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
    var_12 -= ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)48))));
                    arr_11 [i_1] [(signed char)3] [i_2] = arr_10 [i_0] [i_1] [i_2] [i_2];
                }
            } 
        } 
    } 
}
