/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186549
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) var_5)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 -= ((/* implicit */int) max((((((/* implicit */unsigned int) arr_0 [i_0])) >= (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 250579552)) && (((/* implicit */_Bool) var_15)))))) < (((var_1) + (((/* implicit */long long int) ((/* implicit */int) (short)-1026)))))))));
        var_19 += ((/* implicit */short) min((((((var_1) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)1] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) ((int) arr_0 [i_0])))));
        var_20 = ((/* implicit */int) (!((_Bool)0)));
    }
    var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (unsigned short)7685)), (min((((/* implicit */unsigned int) var_7)), (var_12))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (1476813181))))));
}
