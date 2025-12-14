/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153812
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (90045765U)))) ? (((/* implicit */int) ((signed char) arr_6 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3846614843U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15881)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (3846614848U)))) + (var_7))));
}
