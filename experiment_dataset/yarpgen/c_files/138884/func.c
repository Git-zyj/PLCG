/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138884
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [(signed char)6] |= ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0 + 3])) + (((/* implicit */int) arr_1 [i_0 + 3])))), (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 3]))))));
        arr_3 [(signed char)18] [(signed char)18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [(signed char)24]))) ? (min((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_9)))), ((~(((/* implicit */int) arr_0 [(short)4])))))) : (((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) arr_0 [18ULL])) : (((/* implicit */int) var_1)))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_0 [(short)18]))))))));
    }
    var_16 &= ((/* implicit */signed char) min(((unsigned char)158), (((/* implicit */unsigned char) var_11))));
}
