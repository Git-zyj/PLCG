/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187941
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (53554872U))))));
        arr_2 [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_16)))))), ((~(((var_2) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
        var_19 = ((/* implicit */short) ((_Bool) arr_1 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_0 [14ULL] [(short)8])))))))));
        var_21 = ((/* implicit */unsigned int) ((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    }
    var_22 |= ((/* implicit */int) var_10);
}
