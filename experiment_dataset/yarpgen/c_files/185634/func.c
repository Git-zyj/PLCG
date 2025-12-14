/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185634
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [i_2] = var_12;
                    var_17 = ((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned long long int) max(((+(var_10))), (((/* implicit */unsigned int) ((_Bool) var_4))))));
}
