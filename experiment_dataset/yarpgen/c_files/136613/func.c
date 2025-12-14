/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136613
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
    var_19 |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : ((+((-(-1071780655))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (55))));
        var_21 = ((/* implicit */short) (signed char)8);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned short)1016))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) ? ((+((~(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((int) var_0)) : (((/* implicit */int) (signed char)-8))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_18))));
        arr_3 [i_0] = ((/* implicit */short) ((long long int) var_8));
    }
    var_23 = ((/* implicit */unsigned short) var_10);
}
