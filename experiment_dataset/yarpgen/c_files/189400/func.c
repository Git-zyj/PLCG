/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189400
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
    var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */int) var_12)), (min((var_3), (((/* implicit */int) var_14)))))), ((-(max((((/* implicit */int) var_15)), (var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((unsigned char) ((((/* implicit */_Bool) 1113604142)) ? (((/* implicit */int) min((arr_2 [i_1]), ((signed char)52)))) : (((1314449431) / (((/* implicit */int) (signed char)122))))));
                var_19 = ((/* implicit */int) arr_1 [8]);
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((arr_4 [9] [i_0] [(signed char)4]), (arr_5 [i_0] [i_1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_13);
}
