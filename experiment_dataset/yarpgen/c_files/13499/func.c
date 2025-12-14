/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13499
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
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) 326942502)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 2])) + (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 - 1])))))));
                var_13 ^= ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_2), (var_2)));
    var_15 = ((/* implicit */int) (((_Bool)0) ? (10739703517710274639ULL) : (((/* implicit */unsigned long long int) 7631659727805120510LL))));
}
