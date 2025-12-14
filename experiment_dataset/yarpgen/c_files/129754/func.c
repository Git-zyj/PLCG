/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129754
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
    var_20 -= ((/* implicit */unsigned char) ((unsigned int) ((short) ((short) var_12))));
    var_21 = ((/* implicit */unsigned short) ((signed char) var_2));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_5);
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_6))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) var_17));
        var_23 = ((/* implicit */short) min((var_23), (((short) var_5))));
    }
}
