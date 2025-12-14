/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113543
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((1356861011U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-21379)))));
                var_21 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    var_22 *= (((!(((/* implicit */_Bool) max((var_13), (var_17)))))) ? (((((_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_17)) : (max((var_9), (((/* implicit */unsigned long long int) 3544234687U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))));
    var_23 = var_3;
    var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21379)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) 15537357080978519857ULL)) ? (9265136576065933347ULL) : (var_14)))))));
    var_25 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((int) var_4)) - (1195391527)))) + (var_3)));
}
