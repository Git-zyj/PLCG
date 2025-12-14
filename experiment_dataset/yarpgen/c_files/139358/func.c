/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139358
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)-1))))))) : (var_18)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_3 [i_0 + 2] [i_1 + 1])) > (((long long int) arr_3 [i_0 + 1] [i_1 + 2]))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((((((/* implicit */_Bool) (-(arr_0 [i_0 + 1])))) ? (min((((/* implicit */long long int) (signed char)-2)), (1839091414739714263LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) (+(((/* implicit */int) (signed char)98)))))))));
            }
        } 
    } 
    var_23 *= var_14;
}
