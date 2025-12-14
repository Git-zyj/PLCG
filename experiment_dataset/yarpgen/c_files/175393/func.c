/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175393
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
    var_18 = ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */signed char) var_17);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) var_10)) : (var_1))) & (var_11))) : ((-(-6049163306679931156LL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((6950085403256749892ULL), (((/* implicit */unsigned long long int) 2872685189783459872LL))));
        arr_4 [i_0] = ((arr_1 [i_0]) ? (((/* implicit */long long int) ((int) max((var_4), (((/* implicit */unsigned int) arr_1 [i_0])))))) : (((((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) - (max((var_2), (((/* implicit */long long int) arr_1 [i_0])))))));
        arr_5 [14ULL] = ((/* implicit */int) arr_1 [8ULL]);
    }
}
