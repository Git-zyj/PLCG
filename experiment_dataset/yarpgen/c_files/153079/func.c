/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153079
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_6 [i_0]);
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (1445015955U) : (1445015955U)))) ? (((/* implicit */unsigned long long int) min((1445015955U), (((/* implicit */unsigned int) (_Bool)1))))) : (arr_6 [i_1 + 1]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_1 + 1] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
