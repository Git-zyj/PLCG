/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180912
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
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2080534842)) ? (2107491313) : (-2080534845)));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((int) arr_1 [i_0 + 1])) > (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((signed char) ((signed char) var_17))), (max((((signed char) -1954190007)), (((/* implicit */signed char) ((((/* implicit */int) var_14)) <= (var_3))))))));
    var_23 += ((/* implicit */signed char) var_16);
    var_24 = ((/* implicit */int) var_14);
}
