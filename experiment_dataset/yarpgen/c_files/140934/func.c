/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140934
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
    var_20 = ((/* implicit */int) ((unsigned long long int) (-(1412858664))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)127)) ? (1140864177U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))));
        var_21 = 4294967287U;
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [i_0]));
    }
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_7)), (var_9))))))));
}
