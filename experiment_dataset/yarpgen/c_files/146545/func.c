/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146545
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)1))));
                var_18 = ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((var_3) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
                var_19 ^= ((unsigned char) ((signed char) arr_0 [i_0 - 2] [i_0 + 1]));
            }
        } 
    } 
    var_20 += var_2;
    var_21 = ((/* implicit */unsigned int) var_1);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_6))) / (4294967295U)))) ? (((/* implicit */int) var_2)) : (((var_12) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) 1072647596)))))));
}
