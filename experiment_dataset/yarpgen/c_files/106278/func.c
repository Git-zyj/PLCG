/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106278
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
    var_18 -= ((/* implicit */signed char) ((int) (_Bool)1));
    var_19 = ((/* implicit */int) ((var_6) < (((/* implicit */long long int) (((~(((/* implicit */int) var_17)))) ^ ((~(1262729494))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min(((+(((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (short)6426)))))), ((~(((/* implicit */int) var_1)))))))));
        var_21 = ((/* implicit */int) min((var_21), (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (var_11)))), (((arr_0 [i_0]) ? (var_8) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_22 *= ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) max(((unsigned short)18736), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))))));
        var_23 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((long long int) (signed char)33))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
}
