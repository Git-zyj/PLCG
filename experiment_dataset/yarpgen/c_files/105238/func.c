/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105238
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_3 [i_0] [2U]);
                var_19 = var_1;
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_0 [i_0] [9])) : (var_15)))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), (arr_4 [i_1] [i_0])));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_17)) : (var_5));
    var_22 = var_6;
    var_23 = ((/* implicit */unsigned int) ((long long int) max((((unsigned char) var_16)), (min((var_0), (var_1))))));
}
