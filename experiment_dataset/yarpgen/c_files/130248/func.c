/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130248
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
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-57)) * (((/* implicit */int) var_12))))))));
    var_17 = ((/* implicit */long long int) ((_Bool) (-(max((var_1), (((/* implicit */unsigned int) (signed char)-57)))))));
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) (signed char)89);
        var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
}
