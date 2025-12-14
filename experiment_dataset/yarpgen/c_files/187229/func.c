/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187229
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((unsigned short) var_6);
                var_19 = ((/* implicit */unsigned short) max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-2761)), (1134638205))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned short)31148))));
    var_21 = ((/* implicit */unsigned short) ((_Bool) (short)10963));
    var_22 &= ((/* implicit */unsigned short) var_17);
}
