/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167090
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
    for (signed char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) (((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 467364912))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */int) var_3))));
            arr_6 [i_0] [i_0 + 2] [i_1] = ((/* implicit */unsigned int) var_13);
            var_18 = 467364895;
            var_19 ^= ((/* implicit */long long int) var_13);
            arr_7 [i_0] = ((/* implicit */unsigned long long int) var_5);
        }
        var_20 -= ((long long int) ((arr_4 [(unsigned short)6] [i_0]) << (((/* implicit */int) arr_3 [i_0 + 3] [(short)4] [2LL]))));
        var_21 = ((/* implicit */unsigned int) ((arr_2 [i_0]) << (((((/* implicit */int) var_7)) - (11147)))));
        arr_8 [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((512245096126567930LL) & (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_23 = var_5;
}
