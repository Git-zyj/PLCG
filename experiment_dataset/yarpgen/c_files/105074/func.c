/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105074
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)102))));
        var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-81))))) : (max((var_7), (((unsigned int) (_Bool)1))))));
    }
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 860094621U)))))) : ((-(var_8)))))) ? (min((((((/* implicit */_Bool) (unsigned char)119)) ? (var_7) : (2157262189U))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3556300964U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) var_9))));
}
