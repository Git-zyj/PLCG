/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117693
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) == (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) (short)15))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) (((((((-2147483647 - 1)) - (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) == (2147483647))) && (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (((short) arr_1 [i_1])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 4] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 4] [i_1])) + (1946)))))) ? (((/* implicit */int) ((short) ((int) var_4)))) : (((((/* implicit */int) arr_1 [i_0 + 1])) | (var_8)))));
                var_14 = ((((int) ((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [(short)11])) ^ (var_9)))) - ((~(((/* implicit */int) (short)-15)))));
            }
        } 
    } 
    var_15 &= ((((/* implicit */_Bool) var_1)) ? (max((max((var_8), (var_4))), (((/* implicit */int) ((short) var_1))))) : (((/* implicit */int) ((short) ((var_1) ^ (((/* implicit */int) var_2)))))));
}
