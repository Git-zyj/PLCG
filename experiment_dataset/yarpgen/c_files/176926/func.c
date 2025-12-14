/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176926
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
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_10)))) && (((/* implicit */_Bool) var_5)))))));
    var_16 |= ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (-5902561013943849062LL)))))) >> (((((/* implicit */int) var_5)) - (13467)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) arr_1 [0U] [i_0 - 2])) && (((/* implicit */_Bool) -7376459296119227087LL)))))) ? (max((arr_0 [i_0 + 4] [i_0 + 2]), (arr_0 [i_0 + 4] [i_0 + 1]))) : ((-(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [10U] [i_0])))))))))));
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 4]))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 4])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 4] [i_0 + 4]))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 3])) ? (var_4) : (var_4))))))));
    }
}
