/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145136
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = var_2;
        var_11 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 3])) << (((((/* implicit */int) var_6)) - (64)))));
    }
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))), (var_1)))) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) | (min((((/* implicit */long long int) min((var_3), (((/* implicit */signed char) (_Bool)1))))), (-7037574652435741347LL)))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    }
}
