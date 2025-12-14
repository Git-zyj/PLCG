/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175024
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
    var_15 = ((/* implicit */unsigned short) min((((max((var_14), (var_3))) | (min((((/* implicit */int) var_0)), (1776970117))))), (((((/* implicit */int) (_Bool)1)) >> (((var_3) + (296797299)))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)57)) <= (((/* implicit */int) max(((signed char)25), ((signed char)-26))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_7)), ((unsigned short)25390))), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */long long int) var_1)) : (var_8)));
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) - (max((((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_3))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (min((13521833179726537367ULL), (((/* implicit */unsigned long long int) (signed char)-25)))) : (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2])))))));
        var_20 -= ((/* implicit */short) (-((-((-(var_14)))))));
    }
}
