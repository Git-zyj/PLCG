/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169136
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (4672177179471818499ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1])))) != (((int) arr_7 [i_2] [i_2] [i_1 + 2] [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
