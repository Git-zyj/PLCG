/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124346
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (410566035058300285ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_12;
        var_18 = max(((-(((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11604600306701157708ULL))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [17ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))))));
        arr_3 [(_Bool)1] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - (10863527113936463420ULL))))) : (min(((~(6842143767008393917ULL))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (var_5)))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), ((((!(arr_0 [i_0]))) ? ((((-(3451791288506794965ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (11604600306701157708ULL)))));
        var_20 += ((((arr_0 [i_0]) ? (3451791288506794946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (var_15))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), ((((~(3451791288506794955ULL))) - (max((((10408021044351393281ULL) - (6842143767008393900ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3451791288506794955ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))))));
}
