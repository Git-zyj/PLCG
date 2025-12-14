/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103313
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) (unsigned char)72))));
                var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (-979255795) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))))) : (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) (-(893011988)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */short) var_15)), (var_10)));
}
