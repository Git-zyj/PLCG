/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147672
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
    var_11 = ((/* implicit */unsigned char) max((min((258048ULL), (258048ULL))), (((/* implicit */unsigned long long int) ((signed char) var_6)))));
    var_12 = var_1;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((int) var_5))))) | (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_1 [i_0]) ? (-1075921138) : (((/* implicit */int) arr_1 [i_0]))))))) % (((-9223372036854775789LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
