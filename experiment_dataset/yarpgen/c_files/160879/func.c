/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160879
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_13 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_10)));
        arr_3 [i_0] |= (-(((/* implicit */int) var_10)));
        var_14 ^= ((/* implicit */signed char) ((int) 15046738236719204993ULL));
    }
    var_15 -= ((/* implicit */unsigned char) var_4);
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 6785941886239711049LL)), (var_1)))) ? (492805852U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32754))));
}
