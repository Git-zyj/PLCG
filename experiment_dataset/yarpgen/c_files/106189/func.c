/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106189
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_0 [i_0]);
                arr_6 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_2)))) || (((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                arr_7 [i_0] = min((var_3), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */short) var_6)), (var_1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_14);
}
