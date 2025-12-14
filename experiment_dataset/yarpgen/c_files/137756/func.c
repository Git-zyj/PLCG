/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137756
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
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) ((int) var_16))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) ((unsigned int) var_2))));
        arr_2 [i_0 + 1] = ((/* implicit */long long int) ((unsigned int) ((signed char) ((int) -74380217))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) ((long long int) arr_1 [i_0 + 1]))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((unsigned long long int) (unsigned short)316))));
}
