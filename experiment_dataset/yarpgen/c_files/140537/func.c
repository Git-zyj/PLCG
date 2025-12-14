/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140537
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
    var_16 = var_5;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) var_8);
                    var_18 ^= ((/* implicit */_Bool) (+(((var_11) << (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2])) || (((/* implicit */_Bool) var_7)))))))));
                }
            } 
        } 
    } 
}
