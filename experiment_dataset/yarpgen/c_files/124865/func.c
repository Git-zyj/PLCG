/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124865
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
    var_16 ^= ((/* implicit */_Bool) (+(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(((long long int) var_14))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_0))));
                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-7893245111134091709LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(2106874003U))))))) : (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_3 [18U]))))));
            }
        } 
    } 
}
