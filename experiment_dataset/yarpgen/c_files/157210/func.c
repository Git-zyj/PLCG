/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157210
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */int) max((var_15), (((/* implicit */short) ((unsigned char) var_0)))))) : (((((/* implicit */_Bool) max((8825254660741628405LL), (8388589LL)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) max(((signed char)60), (((/* implicit */signed char) var_11))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_9))) / (((var_5) << (((2993650252U) - (2993650227U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) var_14);
                    arr_9 [i_2] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_1))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)14975)) - (14940)))));
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) 1511785586U)), (6426091166070832942LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
            }
        } 
    } 
}
