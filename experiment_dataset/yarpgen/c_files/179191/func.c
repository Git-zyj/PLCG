/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179191
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
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((var_8) / (arr_0 [i_1 + 3]))) : (arr_0 [(short)13])));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_1 [i_0]) < (((max((((/* implicit */int) var_4)), (arr_1 [(short)8]))) - (((((/* implicit */_Bool) var_0)) ? (var_12) : (var_12)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) var_4)), (((((/* implicit */int) (short)-1280)) - (((/* implicit */int) (short)5356))))));
            }
        } 
    } 
}
