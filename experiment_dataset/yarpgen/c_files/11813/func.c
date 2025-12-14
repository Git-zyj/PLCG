/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11813
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((var_3) + (1950374681))))))));
                var_13 = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-20139)) : (((/* implicit */int) var_1))))))), (((/* implicit */long long int) (-(var_3))))));
    var_15 = ((/* implicit */short) var_8);
}
