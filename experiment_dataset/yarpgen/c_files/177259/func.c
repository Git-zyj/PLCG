/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177259
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
    var_20 = var_18;
    var_21 = 769323790U;
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) ((_Bool) var_12)))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = arr_0 [i_0] [i_1];
                arr_7 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) arr_4 [12U]);
                var_24 = var_9;
                var_25 = (((((-(((/* implicit */int) arr_2 [i_0] [i_1 + 2])))) + (2147483647))) >> (((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_1 - 1] [5LL])) && (((/* implicit */_Bool) arr_4 [i_0])))), (arr_5 [i_1] [i_0])))));
            }
        } 
    } 
}
