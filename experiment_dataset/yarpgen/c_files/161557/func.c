/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161557
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_19))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
                var_22 = ((/* implicit */int) min((2748456549U), (((/* implicit */unsigned int) (short)12691))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) % (((long long int) arr_2 [i_0]))));
            }
        } 
    } 
}
