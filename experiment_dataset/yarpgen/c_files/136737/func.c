/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136737
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
    var_10 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5542087322086920242ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)158))))))) ? (((/* implicit */int) (unsigned short)29455)) : (((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) (unsigned short)28672)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((var_1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)90)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)6] [i_0]))))) : (((/* implicit */int) var_9)))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (((unsigned long long int) var_1))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_0 [i_0]))));
        var_14 = ((/* implicit */_Bool) arr_2 [(unsigned short)1]);
    }
    var_15 = ((/* implicit */short) var_9);
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) (unsigned short)65427)))));
}
