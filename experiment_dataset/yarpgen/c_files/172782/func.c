/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172782
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13856))) : (2892718793U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13856)))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) (~((~(2892718795U)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2813238907U) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))) ? (var_2) : (((/* implicit */int) var_7)))), (((/* implicit */int) (short)23077))));
                arr_5 [i_0] &= ((/* implicit */unsigned int) min((100820201985372013LL), (((/* implicit */long long int) (short)23077))));
            }
        } 
    } 
}
