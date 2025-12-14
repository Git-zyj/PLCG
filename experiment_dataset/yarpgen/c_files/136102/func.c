/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136102
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((var_2) / (var_7)))))))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((var_3), (9223372036854775807LL))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (3471501645258363369LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_15 = ((/* implicit */int) (-(min((-5342860874247900858LL), (-8913018790725493584LL)))));
        var_16 = (~(((long long int) arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) ((short) (short)12)))));
        var_18 = ((/* implicit */int) ((arr_2 [i_1 - 3]) << (((/* implicit */int) ((5342860874247900858LL) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))))))));
        var_19 = ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))));
        arr_4 [i_1] = ((/* implicit */long long int) arr_3 [i_1 - 3]);
        var_20 = ((/* implicit */int) arr_3 [i_1]);
    }
}
