/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110818
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) min((var_8), (max((((/* implicit */unsigned long long int) (unsigned short)27153)), (arr_0 [i_0] [i_0])))));
                var_21 = ((/* implicit */int) (~(min((((((/* implicit */_Bool) 2000198286)) ? (((/* implicit */unsigned long long int) 1768502767)) : (var_4))), (max((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 + 2] [i_1])), (7147430152838397236ULL)))))));
            }
        } 
    } 
    var_22 &= var_14;
}
