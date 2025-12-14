/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123215
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
    var_11 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((var_0), (var_3)))), (max((((/* implicit */unsigned long long int) var_0)), (var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_2);
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1571828819)) ? (((/* implicit */unsigned long long int) 1571828820)) : (min((((/* implicit */unsigned long long int) arr_0 [(signed char)8] [(signed char)8])), (16513689709165269497ULL)))))) ? (var_1) : (arr_2 [i_0] [i_1])));
            }
        } 
    } 
}
