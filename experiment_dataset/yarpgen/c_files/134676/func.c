/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134676
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
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 1])) <= (((/* implicit */int) arr_2 [i_1 - 2] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 1]))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-68)) ? (((int) min((-168500962), (((/* implicit */int) arr_2 [i_0] [i_1 - 2]))))) : (((int) 239710561U))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4268056764U)) && (((/* implicit */_Bool) 4268056748U))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((4268056785U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35199)))));
    var_21 = ((/* implicit */unsigned int) var_8);
}
