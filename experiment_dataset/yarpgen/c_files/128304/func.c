/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128304
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_4 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_1])) - (52)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)18416)))))));
                var_16 = ((/* implicit */_Bool) arr_3 [i_1] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18410)) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))));
    var_18 = var_1;
}
