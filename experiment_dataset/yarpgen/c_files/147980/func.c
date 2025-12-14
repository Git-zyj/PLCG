/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147980
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
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((/* implicit */int) arr_0 [(short)14]);
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_14 = (signed char)-4;
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_2 [i_1]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((int) -8684225761260219000LL)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_2 [i_1]))));
    }
    var_15 = ((/* implicit */int) min((var_15), (max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1005430053)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) (unsigned char)38)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)15))))))))));
}
