/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1708
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
    var_10 = ((/* implicit */int) var_8);
    var_11 = ((/* implicit */signed char) max((((/* implicit */int) var_6)), (((int) min((var_8), (((/* implicit */unsigned int) var_7)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), ((signed char)-12)));
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2]))));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}
