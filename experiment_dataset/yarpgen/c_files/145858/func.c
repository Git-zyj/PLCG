/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145858
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                var_13 = ((/* implicit */_Bool) max((var_13), (arr_1 [i_1])));
                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((1567735142) >> (((((/* implicit */int) (unsigned char)244)) - (243)))))))) ? (2139095040U) : (((/* implicit */unsigned int) ((arr_1 [i_1]) ? (arr_0 [i_0]) : (((/* implicit */int) arr_2 [i_0])))))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_2 [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_9);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)98)) || (((/* implicit */_Bool) -2147483640)))))) : (min((((/* implicit */unsigned int) var_5)), (min((var_10), (var_10)))))));
}
