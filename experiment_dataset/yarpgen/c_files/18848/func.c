/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18848
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_0 [3U] [12LL]);
                var_21 &= ((/* implicit */int) (unsigned char)230);
                var_22 &= ((/* implicit */unsigned int) max((2849906674794520983LL), (((/* implicit */long long int) (unsigned short)20712))));
                var_23 = ((/* implicit */long long int) var_1);
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)230)) + (((/* implicit */int) arr_1 [4U] [4U]))))) + (((((/* implicit */_Bool) 5635872134751785004LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (726713555U))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_3);
}
