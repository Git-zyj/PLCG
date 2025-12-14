/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150031
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]);
                arr_7 [i_0 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)41127)) : (((/* implicit */int) (unsigned short)41127))));
                var_19 = ((/* implicit */int) max((var_19), (min(((~(((int) (unsigned short)47340)))), (((int) arr_5 [i_0 - 1]))))));
            }
        } 
    } 
    var_20 = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((var_10) >> (((var_16) + (1342011673)))))) < (var_12)))));
}
