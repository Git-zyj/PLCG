/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113808
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((/* implicit */int) var_13))));
                    var_16 = ((/* implicit */long long int) var_4);
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_12 [i_1] = ((/* implicit */long long int) arr_10 [(unsigned short)21] [i_1] [i_3]);
                    var_17 = ((/* implicit */long long int) ((var_13) ? (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_9 [i_0] [i_1])) - (var_3)))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((max((((/* implicit */int) var_11)), (var_3))) + (((/* implicit */int) ((unsigned char) var_12)))));
}
