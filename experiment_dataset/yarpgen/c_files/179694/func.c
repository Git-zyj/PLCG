/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179694
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
    var_13 = ((/* implicit */int) ((var_7) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_11))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) 5678053927510789485ULL)) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (8388604U))));
        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)40)) / (7936)));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31727)) ? (7936) : (((/* implicit */int) (signed char)-51)))))));
        var_16 ^= ((/* implicit */short) ((((unsigned int) (signed char)-51)) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-28)))))));
    }
}
