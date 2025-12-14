/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160450
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)227)) : (440448864))) | (((/* implicit */int) var_7))));
                var_15 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) (~(-440448865)))) + (((((/* implicit */_Bool) var_0)) ? (4138161287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))), (((unsigned int) var_5))));
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)53))))) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_4 [i_0 - 2]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) ((-440448869) / (((/* implicit */int) var_8))))));
}
