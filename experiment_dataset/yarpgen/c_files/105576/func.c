/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105576
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6216762241088706639LL)) ? (min((((((/* implicit */_Bool) var_0)) ? (1073737728LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (short)3584)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(max((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned short)40814)) | (32512))))))))));
                arr_4 [i_1] |= ((/* implicit */short) var_8);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_7);
}
