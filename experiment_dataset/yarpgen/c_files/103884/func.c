/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103884
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [15ULL]))) / (var_0)));
                    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((unsigned short) arr_5 [i_1 + 1] [i_1 - 1])))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3]))))));
        arr_10 [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3])))));
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = (~(max((arr_4 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])))));
        arr_15 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))) ? ((-(arr_4 [i_4] [i_4]))) : (arr_3 [i_4] [i_4])));
        var_12 &= arr_9 [i_4] [i_4];
    }
    var_13 = ((/* implicit */unsigned int) var_9);
    var_14 = ((/* implicit */unsigned short) max(((((~(16383LL))) / (((-16383LL) * (-16383LL))))), (((/* implicit */long long int) var_3))));
}
