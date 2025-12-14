/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156838
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
    var_11 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    var_12 = ((/* implicit */unsigned int) ((signed char) var_5));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (14088816500897278600ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (((((-(14088816500897278601ULL))) <= (((/* implicit */unsigned long long int) var_0)))) ? (arr_3 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (var_0)))))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_0 [i_0]))))));
    }
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_2))));
    var_16 = ((/* implicit */long long int) var_9);
}
