/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187200
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
    var_13 = ((var_6) | (((/* implicit */long long int) -1)));
    var_14 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_1 [i_0 - 3])));
                var_16 = ((/* implicit */unsigned long long int) 7324898906560924821LL);
                var_17 &= (-(max((((/* implicit */unsigned long long int) -6LL)), (arr_1 [i_0 + 3]))));
            }
        } 
    } 
}
