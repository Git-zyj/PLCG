/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144415
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
    var_15 = ((/* implicit */unsigned int) var_11);
    var_16 = ((/* implicit */unsigned int) (-(((((((/* implicit */unsigned long long int) var_7)) - (6114115340489416842ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)32767)))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) arr_0 [i_0])))))));
    }
}
