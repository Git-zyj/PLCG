/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/41
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
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_2))))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (((((/* implicit */_Bool) arr_4 [i_0] [(short)8])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(min((1488355570U), (((/* implicit */unsigned int) var_3)))))))));
            }
        } 
    } 
    var_15 *= var_0;
}
