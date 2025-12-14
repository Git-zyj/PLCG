/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126249
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((/* implicit */int) var_14))))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_11)))))));
        arr_3 [i_0 - 1] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (533775788)));
        var_19 = (-(((/* implicit */int) ((unsigned short) 14400705874753564670ULL))));
        arr_4 [(signed char)8] [(signed char)8] = ((/* implicit */_Bool) ((long long int) ((var_11) ? (var_2) : (((/* implicit */unsigned long long int) -533775790)))));
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
}
