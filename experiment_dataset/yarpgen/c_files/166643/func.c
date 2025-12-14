/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166643
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 2] [i_0 + 3]));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(3)));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (short)1574);
        var_16 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_12 [22U])));
        var_17 = ((/* implicit */unsigned char) max((arr_6 [i_2]), (arr_12 [i_2])));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]);
    }
}
