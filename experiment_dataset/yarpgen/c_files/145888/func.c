/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145888
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_2))))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))) - ((-(((/* implicit */int) var_7)))))) : (((/* implicit */int) var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 1]))))) ? (max((var_12), ((~(((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */int) var_9)) ^ (((((/* implicit */int) var_3)) | (((/* implicit */int) var_13))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) max((var_3), (var_3)))))) : (var_11)));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >= (min((((/* implicit */int) max((var_2), (var_2)))), (max((var_15), (var_15)))))));
}
