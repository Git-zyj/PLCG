/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168329
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1])) + (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 3] [i_0])), (var_12)))));
                arr_5 [i_0] [i_0] [i_0] = min((((var_0) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)51064))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned long long int) (unsigned short)45061);
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (var_12)));
}
