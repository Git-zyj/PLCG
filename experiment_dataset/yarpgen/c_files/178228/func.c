/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178228
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (var_11)))) ? (((/* implicit */long long int) var_4)) : (max((-49095427940348620LL), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        arr_4 [i_0 + 1] = ((/* implicit */long long int) arr_0 [8ULL]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) - (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (short)29649))))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (49095427940348619LL) : (-49095427940348614LL))) : (min((((/* implicit */long long int) (short)-23352)), (49095427940348624LL))))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 3])) * (((/* implicit */int) arr_5 [i_1 - 3]))));
        arr_8 [i_1 - 2] [(short)23] |= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 - 1])) * (((/* implicit */int) arr_5 [i_1 + 1]))));
        var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_1]))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_14);
    var_20 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    var_21 = ((_Bool) ((((/* implicit */_Bool) -4837901406433677583LL)) ? (var_4) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_9))))));
}
