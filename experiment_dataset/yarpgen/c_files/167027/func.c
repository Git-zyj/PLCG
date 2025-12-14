/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167027
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
    var_16 = var_9;
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 -= var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_1] [14U] [i_0] = ((/* implicit */unsigned long long int) arr_1 [14ULL]);
            arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        arr_6 [i_0] = ((/* implicit */long long int) arr_0 [2ULL]);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) arr_3 [3U] [i_2] [1ULL]);
        arr_10 [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
        arr_11 [i_2] = ((/* implicit */signed char) arr_1 [i_2]);
    }
}
