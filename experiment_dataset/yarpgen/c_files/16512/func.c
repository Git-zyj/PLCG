/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16512
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
    var_19 &= ((/* implicit */long long int) var_12);
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_21 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 579332142U)) ? (579332130U) : (579332128U))));
        arr_2 [i_0] = ((/* implicit */short) min((((arr_0 [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
    }
}
