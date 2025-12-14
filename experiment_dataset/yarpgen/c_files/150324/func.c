/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150324
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
    var_14 = ((/* implicit */signed char) (_Bool)1);
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (var_11)))) ? (var_11) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) > (1152921504606846976LL)))))), (((/* implicit */int) (signed char)(-127 - 1)))));
    var_16 = (!(var_12));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */short) arr_0 [i_0]);
                arr_5 [4LL] [4LL] &= ((/* implicit */unsigned short) (~(((arr_3 [i_0 + 1] [i_0 + 2]) / (arr_3 [i_0 + 1] [i_0 + 2])))));
            }
        } 
    } 
}
