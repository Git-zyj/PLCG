/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18579
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */int) max((-6146173197521433597LL), (((/* implicit */long long int) ((signed char) arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0 + 1])) + (2147483647))) >> (((arr_0 [i_0]) - (3033165923080612712ULL)))));
    }
    var_10 = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) ((signed char) ((unsigned short) (_Bool)1))))));
}
