/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114364
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
    var_14 = var_0;
    var_15 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 3])))) || (((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        arr_4 [(signed char)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((/* implicit */int) arr_0 [i_0 - 3])) : ((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((0ULL) << (((max((arr_2 [i_0] [9ULL]), (arr_1 [i_0]))) - (5804294908413890066LL)))))));
    }
}
