/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183948
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)2)), ((~(486092159U))))))));
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) var_12);
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 7188213152087969223ULL))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0])))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)))));
        arr_2 [i_0 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (var_10)))));
    }
}
