/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13414
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (2566240882U))));
                var_12 = ((/* implicit */unsigned char) (-(max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) / (2566240882U))))))), (var_7)));
}
