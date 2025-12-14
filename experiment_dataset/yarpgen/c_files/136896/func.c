/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136896
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */int) arr_2 [i_0]);
        var_13 -= arr_0 [i_0 + 1];
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_1]))))));
        arr_6 [2] [2] &= ((/* implicit */long long int) arr_0 [i_1]);
        arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_0 [i_1]) ? (((/* implicit */int) (short)-32)) : (((/* implicit */int) arr_0 [i_1]))))), (arr_1 [i_1] [i_1])));
    }
    var_14 = ((/* implicit */unsigned short) ((unsigned int) var_4));
}
