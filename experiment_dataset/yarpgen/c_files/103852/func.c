/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103852
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) var_6);
                var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_19) >> (((var_2) - (5588033691690747932LL)))))), (min((var_14), (((/* implicit */unsigned long long int) -2135677674)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_16))))) >> (((min((((/* implicit */unsigned int) var_10)), (504107342U))) - (504107321U))))) : (min((var_16), (var_10)))));
}
