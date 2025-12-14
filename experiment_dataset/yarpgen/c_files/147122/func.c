/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147122
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    var_18 = ((/* implicit */signed char) ((int) (short)-1073));
                    var_19 |= ((/* implicit */unsigned int) (~(arr_1 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (var_3)));
    var_21 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-9474))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_5)))))) + (((((/* implicit */_Bool) min((533543242516842763LL), (((/* implicit */long long int) -589269909))))) ? (((/* implicit */unsigned long long int) ((16320) % (-753997636)))) : (max((((/* implicit */unsigned long long int) 753997637)), (462840798154811930ULL))))));
}
