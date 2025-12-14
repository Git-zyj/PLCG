/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154165
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_13))));
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [(short)12] = arr_0 [i_0];
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1] [i_1 - 2]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (var_10)));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_13))));
                arr_8 [i_1] [i_2 - 1] = ((/* implicit */short) var_7);
            }
            for (short i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_5))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2] [i_3 - 3]))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_11 [i_1 - 2] [i_3 - 3] [i_1 - 2]))));
            }
        }
    }
}
