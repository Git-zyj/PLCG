/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111813
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (min((((((/* implicit */int) ((18446744073709551610ULL) >= (arr_3 [i_0] [i_1])))) + (((0) & (var_10))))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (14130038360847874109ULL)))) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])))))))));
                var_15 ^= ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_1]))))) <= (990993720))), (((((var_10) / (1780576036))) <= (-2147483637)))));
            }
        } 
    } 
    var_16 += ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) | (max((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((3855824412090988732ULL) & (16ULL)))))));
}
