/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104680
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
    var_20 = var_1;
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_21 = var_4;
        arr_2 [i_0] = arr_1 [i_0 + 2] [i_0];
        arr_3 [13] &= ((/* implicit */int) ((((((/* implicit */_Bool) 0)) ? (1192163827) : (arr_0 [i_0 - 1]))) <= (((((/* implicit */_Bool) min((374645209), (374645209)))) ? (arr_0 [i_0]) : ((+((-2147483647 - 1))))))));
    }
    var_22 |= max((var_5), (max(((-(374645221))), (((374645209) >> (((var_10) - (47657499))))))));
    var_23 = max((((/* implicit */int) ((var_14) <= (((int) var_3))))), (-251154570));
}
