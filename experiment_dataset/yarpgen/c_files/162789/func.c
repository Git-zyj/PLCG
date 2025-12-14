/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162789
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((8648696508522468840ULL) / (((9798047565187082760ULL) * (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 9798047565187082773ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
    var_10 = (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (var_5))));
    var_11 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) var_2))))), (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (((long long int) 17203503750765248351ULL))));
}
