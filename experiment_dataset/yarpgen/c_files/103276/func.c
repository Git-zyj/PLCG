/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103276
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_6))));
                var_18 = ((/* implicit */unsigned int) min((max((var_16), (((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (var_12)));
                var_19 = min((((/* implicit */unsigned int) ((min((var_9), (var_8))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4766))) : (arr_2 [i_1 - 2] [i_1 - 2]))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 3])) ? (((((/* implicit */_Bool) var_1)) ? (-3172445034386009132LL) : (-3172445034386009132LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_15), (var_15)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((var_14), (var_5))))))) : ((~(3172445034386009140LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_0))));
    var_22 = ((/* implicit */_Bool) var_14);
}
