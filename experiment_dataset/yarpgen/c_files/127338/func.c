/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127338
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0 + 1] = arr_1 [0];
    }
    var_12 = ((/* implicit */long long int) var_10);
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (var_7)));
}
