/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162372
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
    var_18 = var_15;
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((var_15), (((/* implicit */long long int) var_9)))))))));
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_3 [10U]))));
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_1])))) ? (var_11) : (((/* implicit */long long int) var_13))));
            }
        } 
    } 
}
