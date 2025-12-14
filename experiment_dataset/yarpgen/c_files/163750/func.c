/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163750
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
    var_11 -= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1270443900U)) ? (4250583283U) : (var_7)))))), (((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_12 = ((((/* implicit */_Bool) 1341973563U)) ? (2320990363U) : (var_1));
    var_13 = ((unsigned int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1973976922U))))), (max((2320990369U), (var_9)))));
    var_14 |= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((var_10) >> (((2361586318U) - (2361586288U))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((440573972U) & (3877332251U)))));
        var_17 = ((/* implicit */unsigned int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1])))))));
        var_19 &= ((/* implicit */signed char) (+(max((var_10), (((/* implicit */unsigned int) (signed char)9))))));
    }
}
