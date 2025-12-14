/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159511
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
    var_17 = ((/* implicit */int) max((((/* implicit */short) (signed char)-37)), ((short)0)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((((((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), (var_2)))) | (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_2)))))))));
        var_19 = arr_1 [(short)11] [i_0];
    }
}
