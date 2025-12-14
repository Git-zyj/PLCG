/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164707
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
    var_10 = ((((var_8) / (((var_2) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) % (((/* implicit */long long int) ((/* implicit */int) var_1))));
    var_11 *= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_3 [i_0]), (arr_3 [i_0])))), (min(((+(arr_2 [i_0]))), (((/* implicit */long long int) arr_1 [i_0]))))));
            }
        } 
    } 
}
