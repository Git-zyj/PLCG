/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164145
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
    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((18446744073709551615ULL) & (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                arr_6 [i_0] [i_0] = ((/* implicit */short) 2761993009U);
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) max(((~((-(8302665451778256297ULL))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) * (18446744073709551602ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_1);
    var_16 = ((/* implicit */unsigned int) 18446744073709551615ULL);
}
