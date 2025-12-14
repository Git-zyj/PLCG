/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129613
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (~(2239836107U))))))), (var_11)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), ((~(2239836107U)))));
                    var_17 = arr_4 [i_2] [i_1] [i_1 + 1];
                }
            } 
        } 
    } 
}
