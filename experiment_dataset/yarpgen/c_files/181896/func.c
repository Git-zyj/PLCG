/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181896
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
    var_17 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_10)), (var_7))), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_18 = arr_2 [i_0];
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((arr_0 [(short)6]) - (((((arr_1 [2U]) >= (arr_0 [0U]))) ? (arr_0 [i_0 + 2]) : (((/* implicit */int) var_12)))))))));
    }
    var_20 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32757)) : (var_15))), (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)2188))))))));
}
