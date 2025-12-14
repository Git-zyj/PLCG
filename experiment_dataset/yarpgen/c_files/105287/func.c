/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105287
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
    var_13 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((int) arr_1 [i_0])), (((/* implicit */int) ((((/* implicit */int) (signed char)-126)) != (((/* implicit */int) (signed char)98)))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])))), (var_0))))));
        var_15 = ((/* implicit */int) arr_1 [i_0]);
        var_16 = ((/* implicit */short) (-(((/* implicit */int) (signed char)104))));
    }
    var_17 = var_2;
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)98)), (min((max((6035694867098729194LL), (((/* implicit */long long int) (signed char)98)))), (-1LL)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) << (((min((var_9), (((/* implicit */unsigned long long int) var_2)))) - (62ULL)))));
}
