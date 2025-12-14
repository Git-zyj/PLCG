/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166807
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_16 &= arr_2 [i_0] [i_0 + 1];
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)141)) ? (((max((6526949019431726080LL), (((/* implicit */long long int) arr_0 [i_0])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)19] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [(unsigned short)8] [(short)7]), (((/* implicit */unsigned char) arr_0 [i_0 + 3]))))))));
        var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])))) % (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 3])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
    }
    var_19 -= ((/* implicit */signed char) var_4);
    var_20 &= ((/* implicit */short) var_4);
}
