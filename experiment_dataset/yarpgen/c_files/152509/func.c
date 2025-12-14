/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152509
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
    var_14 = ((/* implicit */unsigned char) ((_Bool) var_11));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1])), (max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) : (((/* implicit */int) ((unsigned char) var_9)))));
            }
        } 
    } 
}
