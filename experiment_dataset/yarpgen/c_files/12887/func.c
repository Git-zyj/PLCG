/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12887
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2])))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((827864813681645445ULL) | (((/* implicit */unsigned long long int) 9223372036854775792LL)))))))));
        var_19 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_2 [i_0 + 3] [i_0])) >> (((((-9223372036854775795LL) - (-9223372036854775791LL))) + (32LL))))));
        arr_3 [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (((long long int) 2147483640))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned short)3] [i_0 + 3])) >> (((((/* implicit */int) arr_0 [i_0])) - (201)))))) || (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_10))))));
    }
}
