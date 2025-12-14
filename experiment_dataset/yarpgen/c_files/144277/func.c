/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144277
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
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_19))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) < (((((/* implicit */_Bool) (+(2181843386368LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [0U]))))) : (((((/* implicit */_Bool) arr_1 [(short)4])) ? (1005301002) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_22 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) << (((((/* implicit */int) ((unsigned short) (-(arr_0 [i_0]))))) - (48987)))))) : (((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) << (((((((/* implicit */int) ((unsigned short) (-(arr_0 [i_0]))))) - (48987))) - (3878))))));
        var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [6U]))))));
    }
    var_24 = ((/* implicit */short) 1005301002);
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) ((-1005301002) > (((/* implicit */int) var_9))))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))));
}
