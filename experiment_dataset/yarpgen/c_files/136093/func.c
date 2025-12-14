/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136093
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) (signed char)-116);
                arr_8 [i_0 - 1] [i_0] [4U] = ((/* implicit */unsigned int) (signed char)42);
                arr_9 [i_0] = ((/* implicit */unsigned int) (((-(min((3252070346U), (32767U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))));
            }
        } 
    } 
    var_15 = var_9;
}
