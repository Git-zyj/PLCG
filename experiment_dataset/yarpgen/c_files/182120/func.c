/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182120
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((606603971447460334LL) + (((/* implicit */long long int) 264241152)))))));
                arr_4 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)47435))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */unsigned short) (_Bool)1);
}
