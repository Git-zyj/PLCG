/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135026
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) 5419744896901509558ULL);
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_9);
        var_21 ^= (!(((/* implicit */_Bool) (signed char)-107)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0])))))))))));
    }
    var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12))))) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(7U)))) ? (((/* implicit */int) (unsigned char)187)) : (((((/* implicit */int) (unsigned short)29143)) ^ (((/* implicit */int) (signed char)-118)))))))));
}
