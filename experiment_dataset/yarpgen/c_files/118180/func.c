/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118180
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
    var_14 = var_13;
    var_15 = ((short) (short)8146);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (short)-8146;
                arr_7 [i_0] [i_1] = var_1;
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_4)))))));
}
