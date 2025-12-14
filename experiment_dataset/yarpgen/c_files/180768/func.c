/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180768
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
    var_10 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((signed char) ((_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (3294766556659590897LL))))))));
                var_12 = ((/* implicit */_Bool) (short)30948);
            }
        } 
    } 
}
