/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184491
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
    var_15 = (-((~((~(578652189U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                arr_7 [12U] = (~((+((+(var_6))))));
                arr_8 [i_0] [i_1] [13U] = (-(1161086828U));
            }
        } 
    } 
}
