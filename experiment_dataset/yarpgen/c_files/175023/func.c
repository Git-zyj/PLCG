/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175023
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
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) & (18ULL));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
}
