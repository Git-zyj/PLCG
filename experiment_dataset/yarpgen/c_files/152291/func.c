/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152291
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_8 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) max(((short)22489), (var_14)))) - ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))))));
                arr_9 [i_0 + 1] [i_0 + 1] = ((short) ((short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)13365)))));
                var_18 = ((/* implicit */short) min((((((/* implicit */int) (short)-6537)) + (((/* implicit */int) (short)-15)))), (max((((((/* implicit */_Bool) (short)14756)) ? (((/* implicit */int) (short)-9285)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)1792))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (var_10)));
}
