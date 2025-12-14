/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160050
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */int) (short)-25415)) * (((/* implicit */int) (signed char)64))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = var_2;
                    arr_7 [i_2] [i_2] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_12 = var_1;
}
