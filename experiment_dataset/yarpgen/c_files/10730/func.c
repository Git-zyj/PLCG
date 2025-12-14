/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10730
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
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(4498899042974233950ULL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */short) var_7);
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4287981358922416827LL)) ? (4287981358922416826LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_16) != (-4287981358922416834LL)))))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) arr_1 [i_0] [3LL]))));
                }
            } 
        } 
    } 
}
