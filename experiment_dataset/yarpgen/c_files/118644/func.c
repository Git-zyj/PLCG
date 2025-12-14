/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118644
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
    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((signed char) var_7))) ? ((+(var_11))) : (var_11)))));
    var_16 = min(((-(max((((/* implicit */long long int) var_1)), (var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_13)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_0 [5LL]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) var_6)) : (max((arr_0 [i_0]), (((/* implicit */long long int) var_8)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (min((((/* implicit */long long int) var_4)), (arr_0 [(short)2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [8LL])))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) - (max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((((/* implicit */_Bool) arr_0 [i_0])) && (arr_3 [i_0]))) ? (((arr_3 [9LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */long long int) var_11))))));
    }
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (var_3)))))));
}
