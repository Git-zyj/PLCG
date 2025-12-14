/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189067
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
    var_20 = ((/* implicit */short) max((((/* implicit */long long int) min(((+(((/* implicit */int) var_9)))), (min((((/* implicit */int) var_10)), (-1944569345)))))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_1 - 1]);
                var_21 &= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((min(((+(arr_1 [i_1]))), (arr_1 [i_1 - 1]))) | (((/* implicit */long long int) (~(-1944569345))))));
            }
        } 
    } 
}
