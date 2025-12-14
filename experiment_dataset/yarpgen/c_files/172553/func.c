/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172553
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 += ((/* implicit */long long int) arr_3 [i_0 - 2]);
        arr_4 [i_0] = ((((/* implicit */_Bool) 3685694380U)) ? (1048560U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    }
    var_14 = var_9;
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)18502))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) 0U))), (min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967267U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35224))))))) > (max((((/* implicit */unsigned int) (unsigned short)59583)), (17U))))))));
}
