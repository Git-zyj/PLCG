/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174562
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((var_3) == (((/* implicit */long long int) ((4294967295U) ^ (((/* implicit */unsigned int) 804215205)))))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)19);
        arr_4 [i_0 - 4] = ((/* implicit */_Bool) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)18))))));
        arr_10 [i_1] [(signed char)16] = var_2;
        arr_11 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (var_2)));
    }
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1)))))))));
}
