/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110237
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
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_4 [(unsigned char)0] = ((/* implicit */int) ((unsigned long long int) -1839604582));
        arr_5 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (3849932088U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) ((arr_0 [i_0 - 3]) >= (arr_0 [(unsigned char)8])))) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))))) : (max((5938986684557594557LL), (5938986684557594557LL)))));
    }
    var_14 = ((/* implicit */_Bool) var_10);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((int) var_2)))));
}
