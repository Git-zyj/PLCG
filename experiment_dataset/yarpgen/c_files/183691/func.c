/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183691
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = 5611982687162226163LL;
                arr_6 [i_1] = ((/* implicit */short) (((~(5611982687162226163LL))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_9))));
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
}
