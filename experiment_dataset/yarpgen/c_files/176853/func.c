/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176853
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
    var_16 *= 1204345993U;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) arr_2 [i_0]);
            arr_6 [i_0] [15] = ((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0]);
        }
        arr_7 [i_0] [10ULL] = ((/* implicit */unsigned short) var_4);
        arr_8 [(unsigned short)5] = (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (-1))));
    }
}
