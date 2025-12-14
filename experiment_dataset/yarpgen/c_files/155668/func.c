/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155668
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
    var_17 |= ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) min((((unsigned int) 1073741824)), (((/* implicit */unsigned int) ((int) var_14))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) ((unsigned int) min((var_4), (((/* implicit */unsigned long long int) var_15)))));
                    arr_6 [i_0] [i_1] [i_0] = var_2;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_1);
}
