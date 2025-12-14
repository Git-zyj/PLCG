/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180175
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
        var_17 = ((/* implicit */unsigned char) (short)-19902);
        var_18 *= ((/* implicit */unsigned char) var_11);
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)27930))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (unsigned short)36060)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_21 &= ((((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_13)) - (14090))));
    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) max((var_15), ((_Bool)1)))) * (((/* implicit */int) ((signed char) var_5))))) - (((var_11) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) var_15))))));
}
