/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14669
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = min((var_7), (((/* implicit */int) var_16)));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_17))))), (min((min((((/* implicit */unsigned int) var_9)), (var_2))), (var_2)))));
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) max((((((/* implicit */int) (!(var_5)))) - (((((((/* implicit */int) var_9)) + (2147483647))) << (((/* implicit */int) var_5)))))), (((/* implicit */int) ((min((((/* implicit */long long int) var_14)), (var_1))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_10)))))))));
    var_21 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) var_12)), (var_4))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_7)), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))))));
}
