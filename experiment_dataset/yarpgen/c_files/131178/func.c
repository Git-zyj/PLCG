/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131178
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)4] [(unsigned short)4]);
                var_13 = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) arr_1 [i_0])), (max((7982678763473058663LL), (((/* implicit */long long int) (unsigned short)38932))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (0U)));
    var_15 += ((/* implicit */short) (+(4193280U)));
}
