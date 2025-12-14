/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181486
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
    var_16 = ((/* implicit */signed char) 1531479134);
    var_17 = ((/* implicit */unsigned short) (-(var_5)));
    var_18 = ((/* implicit */int) ((var_8) >> (((unsigned int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [3] = ((/* implicit */unsigned int) arr_5 [i_0 + 3] [i_1 - 1]);
                var_19 *= ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1 - 2]) || (((((arr_2 [i_1]) || (((/* implicit */_Bool) var_9)))) && (arr_0 [i_1] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) 1531479153);
        arr_10 [i_2] = ((/* implicit */short) arr_3 [i_2]);
    }
}
