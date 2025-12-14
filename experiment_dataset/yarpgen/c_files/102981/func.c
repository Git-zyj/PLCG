/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102981
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
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) 10393961105717137421ULL);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_1 [i_0] [6U]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        var_17 = ((/* implicit */int) ((long long int) ((arr_0 [i_0] [i_0]) << (((11855952009346522487ULL) - (11855952009346522483ULL))))));
    }
    var_18 = ((/* implicit */long long int) var_2);
}
