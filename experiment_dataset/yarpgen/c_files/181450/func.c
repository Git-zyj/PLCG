/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181450
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
    var_14 |= ((/* implicit */unsigned int) min((min((var_1), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))), (var_5)));
    var_15 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_10))))))) ? (((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((((/* implicit */int) var_3)) + (76))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19416)) - (((/* implicit */int) (signed char)-124))))));
    var_16 += ((/* implicit */long long int) ((var_5) >> (((var_7) + (2305523709457640421LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) var_1);
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_6)) - (34167)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (min((((/* implicit */unsigned long long int) var_12)), (var_2)))))));
            }
        } 
    } 
}
