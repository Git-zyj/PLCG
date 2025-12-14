/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135782
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
    var_12 = ((/* implicit */unsigned int) (signed char)-119);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 + 1]))) ? (((/* implicit */int) arr_0 [8ULL] [8ULL])) : (((/* implicit */int) var_11))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) var_10))))), (max((((/* implicit */long long int) arr_0 [i_0] [i_0 + 3])), (arr_1 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) 4354789814146346462LL);
        var_13 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
}
