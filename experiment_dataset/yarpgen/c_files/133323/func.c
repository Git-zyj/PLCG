/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133323
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
    var_11 = (~(((((/* implicit */int) (short)7574)) << (((var_6) - (4000671991062359343ULL))))));
    var_12 = ((/* implicit */int) ((var_6) * (min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_3)), (var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30698)) >= (((/* implicit */int) (short)18820))));
                var_14 ^= ((/* implicit */int) arr_1 [i_0]);
                var_15 = arr_1 [i_0];
                var_16 = ((/* implicit */short) min((max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [18ULL]))), (((unsigned long long int) (short)4814)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_9) : (var_9)));
}
