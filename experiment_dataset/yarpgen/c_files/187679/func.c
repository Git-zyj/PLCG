/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187679
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((signed char) (short)-5425)))));
                var_21 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (arr_1 [14] [14]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 3])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
    var_23 = ((/* implicit */_Bool) var_19);
}
