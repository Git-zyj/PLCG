/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157214
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
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((((/* implicit */int) var_9)) != (((/* implicit */int) ((short) -129739172))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) min((var_22), (-1858658230)));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((1597277458U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
    }
}
