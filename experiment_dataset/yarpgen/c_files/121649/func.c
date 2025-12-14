/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121649
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
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 = min((((((/* implicit */_Bool) max((var_15), ((short)3275)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_9))) : ((-(var_5))))), (((/* implicit */unsigned int) (_Bool)1)));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = max((((unsigned int) ((unsigned int) var_4))), (((/* implicit */unsigned int) (_Bool)1)));
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
    } 
}
