/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119471
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
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)32753))));
    var_15 ^= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */int) ((unsigned int) var_5));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32784)) ? (((/* implicit */int) arr_1 [i_0])) : (((2147483647) ^ (((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
}
