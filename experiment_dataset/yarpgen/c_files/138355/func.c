/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138355
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
    var_17 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1898520510)), (6916632514901534608ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_19 -= ((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
        var_20 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) 11530111558808017021ULL);
        var_21 -= ((/* implicit */_Bool) var_0);
    }
}
