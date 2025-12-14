/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150325
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
    var_12 = ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */short) max((((/* implicit */int) var_0)), (var_9)));
    var_14 = ((/* implicit */unsigned char) max((var_14), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_10)) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))));
                var_15 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 1] [(unsigned short)2] [i_0])) >> (((((/* implicit */int) var_10)) + (125)))))), (((18U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned char) ((_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))))));
}
