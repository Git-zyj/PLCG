/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144031
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) ((signed char) (signed char)-116));
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_4 [(unsigned short)7] [(unsigned char)1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> ((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (210))))));
    }
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = var_7;
}
