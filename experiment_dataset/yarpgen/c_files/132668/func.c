/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132668
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_17))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) > (((((/* implicit */_Bool) var_11)) ? (var_16) : (var_7)))))), (((var_15) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_6))) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (var_9)));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
}
