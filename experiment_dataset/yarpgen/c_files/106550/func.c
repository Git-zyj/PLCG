/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106550
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((short) (~(arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_1 [i_0 + 1])), (max((((/* implicit */long long int) min((((/* implicit */short) arr_2 [i_0])), (arr_1 [i_0 + 2])))), (min((((/* implicit */long long int) (short)31240)), (arr_0 [i_0])))))));
        var_16 = min((arr_1 [i_0]), (arr_1 [i_0]));
    }
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) (signed char)-8)))))));
}
