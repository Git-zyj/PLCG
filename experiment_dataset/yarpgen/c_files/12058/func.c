/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12058
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) ((int) var_3)))))));
    var_11 = ((/* implicit */short) min((var_11), (((short) (short)0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) / (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [(short)1] [i_1]))));
                var_12 = ((/* implicit */short) max((var_0), (((int) 1754968153))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_3))) : (min((var_0), (var_0))))), (min((((((/* implicit */_Bool) (short)-2555)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */short) var_2);
}
