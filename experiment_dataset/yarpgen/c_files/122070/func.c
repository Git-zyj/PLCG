/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122070
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (6192232161244775889LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [(_Bool)1])))));
        var_12 *= ((/* implicit */short) (-((+(-2470433864945096867LL)))));
    }
    var_13 = ((/* implicit */unsigned char) var_10);
}
