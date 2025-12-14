/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102464
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_2 [i_0])))));
        var_14 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0])))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0])))))));
        var_16 = ((/* implicit */_Bool) min((min((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(var_1)))), (var_6)))) ? (((/* implicit */long long int) ((var_6) >> (((min((((/* implicit */long long int) var_5)), (var_4))) + (175834003128984896LL)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))), (min((var_4), (((/* implicit */long long int) var_1))))))));
}
