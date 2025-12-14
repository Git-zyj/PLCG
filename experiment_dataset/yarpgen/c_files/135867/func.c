/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135867
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (7936U)));
        arr_2 [i_0] [i_0] |= arr_0 [i_0] [i_0];
    }
    var_12 = ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */int) max((var_5), (var_3)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)233)) : ((-(((/* implicit */int) (unsigned short)0))))))) ? (min((((/* implicit */unsigned int) (unsigned char)13)), (112235889U))) : (var_9)));
}
