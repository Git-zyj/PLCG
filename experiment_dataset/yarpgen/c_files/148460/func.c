/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148460
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_16 *= ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 1]))));
        arr_3 [i_0 - 3] = ((/* implicit */_Bool) ((unsigned int) var_5));
        arr_4 [5ULL] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_2 [i_0 + 2] [i_0 - 2])))) ^ ((~(var_2)))));
    }
    var_17 = ((/* implicit */unsigned int) var_0);
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 = (+(((/* implicit */int) var_6)));
}
