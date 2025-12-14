/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107120
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((int) arr_1 [i_2 - 1] [i_2 - 1]));
                    var_16 = ((/* implicit */signed char) ((arr_1 [i_1] [1ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0U] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 1])))))) & (arr_5 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (var_0)))) ? (((int) var_4)) : (((/* implicit */int) ((_Bool) var_5)))))), (((max((var_7), (522709182U))) % (((unsigned int) var_15)))))))));
    var_18 = ((/* implicit */short) var_14);
}
