/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14237
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
    var_12 = ((/* implicit */short) ((var_7) < (max((max((((/* implicit */unsigned long long int) var_0)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) var_6))))));
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((long long int) 4ULL));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((_Bool) 5ULL)))));
                var_16 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))))));
            }
        } 
    } 
}
