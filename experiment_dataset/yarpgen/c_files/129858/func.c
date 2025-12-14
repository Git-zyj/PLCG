/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129858
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_3 [i_1])))));
                var_21 = ((/* implicit */signed char) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) var_4)));
    var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)13887)))))) : ((~(((/* implicit */int) ((_Bool) var_8)))))))));
}
