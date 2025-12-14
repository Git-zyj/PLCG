/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150105
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) (short)-9975)), (var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(2578175928U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))) * (arr_2 [i_0 - 1])))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0 + 1]))), ((+(arr_2 [i_0]))))))));
    }
}
