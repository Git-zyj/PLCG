/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10203
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
    var_14 = (+((-((~(((/* implicit */int) var_6)))))));
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)2)) < (((/* implicit */int) (unsigned short)29376))))))), ((~(((/* implicit */int) (unsigned char)95))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)58)), ((unsigned short)17968)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_16 &= arr_2 [i_0];
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (arr_0 [i_0] [i_0])))))))));
    }
}
