/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121594
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((var_4) < (((((/* implicit */_Bool) var_7)) ? (0LL) : (((/* implicit */long long int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_4))), (((/* implicit */long long int) arr_4 [i_1] [i_1 + 2] [i_1])))));
                var_12 = ((/* implicit */_Bool) min((var_12), ((_Bool)1)));
            }
        } 
    } 
}
