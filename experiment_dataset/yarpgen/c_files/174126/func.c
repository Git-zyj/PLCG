/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174126
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
    var_12 += ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */_Bool) ((var_1) - ((+(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = arr_1 [i_0];
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (signed char)-120);
    var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) var_5)) ^ (var_1)))));
}
