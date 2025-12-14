/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147202
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
    var_13 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) 3001992542U);
                var_15 = ((/* implicit */signed char) ((((_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (arr_1 [i_0])))))))) : (arr_4 [i_0])));
                var_16 ^= (!(((/* implicit */_Bool) 10992246654740388363ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((var_5) ^ (((/* implicit */int) (_Bool)0))));
}
