/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176363
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53854))) | (3028527137U)))));
        var_17 = (((~(1266440136U))) + ((~(2756938672U))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((long long int) var_15));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]));
    }
    var_18 = ((/* implicit */unsigned char) (signed char)0);
}
