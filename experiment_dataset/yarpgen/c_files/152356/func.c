/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152356
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_0]);
                var_20 = ((/* implicit */signed char) 2084709632);
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_13);
    var_22 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((var_12) | (((/* implicit */unsigned long long int) -2084709633)))))), (((/* implicit */unsigned long long int) var_2))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)2)), (4294967295U))))))), (var_12)));
}
