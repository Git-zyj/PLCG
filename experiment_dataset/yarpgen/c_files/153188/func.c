/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153188
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_11) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((arr_2 [i_0] [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_5 [i_0] = (unsigned short)57215;
        var_15 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))))));
    }
    var_16 -= var_8;
}
