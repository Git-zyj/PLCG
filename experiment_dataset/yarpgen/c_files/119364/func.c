/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119364
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-101)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [(unsigned short)8]);
        arr_5 [i_0] [3] = ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (~(arr_0 [i_0 + 1])));
    }
}
