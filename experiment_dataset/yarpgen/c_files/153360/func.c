/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153360
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)181));
        arr_3 [i_0] [i_0] = (~(((/* implicit */int) arr_0 [i_0 - 4])));
    }
}
