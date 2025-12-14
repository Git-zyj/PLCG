/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134252
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((arr_2 [i_0 - 2]) != (arr_2 [i_0 + 1])));
        var_14 = ((/* implicit */_Bool) (((~(arr_0 [i_0]))) / (((((/* implicit */long long int) arr_1 [i_0])) - (arr_0 [i_0])))));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_2 [i_1 - 2]), (((/* implicit */long long int) min((var_1), (arr_1 [i_1]))))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_0))), (arr_6 [i_1 + 2])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((30U), (((/* implicit */unsigned int) (_Bool)1))));
    }
    var_16 = ((/* implicit */unsigned long long int) 3985826555U);
}
