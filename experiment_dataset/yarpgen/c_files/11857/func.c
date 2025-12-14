/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11857
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 62ULL)))))) - (min((57ULL), (18446744073709551553ULL)))))));
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32763)) ? (((arr_5 [i_0] [i_0] [i_0]) << (((arr_2 [i_1]) + (5187890902828853678LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 17179869183ULL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (-(var_12)));
}
