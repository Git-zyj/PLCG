/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177472
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (arr_6 [i_1] [i_1] [i_1])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_15))));
    var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) % (((/* implicit */int) var_4))));
    var_22 = (~(var_8));
}
