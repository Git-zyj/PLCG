/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144736
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9804))) : ((+(var_8))))))))));
    var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_8)))) * (((((/* implicit */unsigned long long int) var_8)) - (var_10))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3487330502U)))))) ^ (arr_0 [(unsigned short)16] [i_0]))), (((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 2]))))));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_11))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (~(arr_4 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (1596659861U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
        arr_7 [i_1] = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_1])));
    }
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
}
