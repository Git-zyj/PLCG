/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121712
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [14U] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_21 = 1867575238U;
                    var_22 = var_8;
                }
            }
        } 
    } 
    var_23 = ((((3067463228U) >> (((652774538U) - (652774520U))))) >> ((((~(((unsigned int) var_2)))) - (3402471680U))));
    var_24 = ((unsigned int) ((var_5) >= (((((/* implicit */_Bool) var_19)) ? (var_15) : (var_3)))));
    var_25 = var_18;
}
