/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147548
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            var_11 += ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0 + 1]))));
            var_12 ^= ((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [(short)4])) - (((/* implicit */int) arr_7 [(unsigned char)7] [(unsigned char)7] [i_1 - 1])))));
            arr_8 [i_1 - 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3462579650960571246ULL))));
        }
        var_13 = ((/* implicit */unsigned char) ((((long long int) arr_1 [i_0 + 1])) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))));
        var_14 = ((/* implicit */unsigned long long int) ((long long int) arr_0 [6]));
    }
    var_15 = ((/* implicit */int) ((((((((var_2) * (((/* implicit */long long int) ((/* implicit */int) var_7))))) % (((/* implicit */long long int) max((var_6), (((/* implicit */int) (short)18012))))))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) ((_Bool) (short)-29451))), (min((((/* implicit */unsigned long long int) var_4)), (var_3))))) - (1ULL)))));
    var_16 = ((/* implicit */long long int) var_3);
}
