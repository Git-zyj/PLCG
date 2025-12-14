/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115121
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
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((arr_0 [i_0] [i_0]) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) (+(((0LL) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                arr_8 [i_0] [2LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)25467))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_5)));
                arr_9 [i_0] [i_1] [7LL] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)7);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_1] [i_0 + 1])))))));
                arr_10 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_1]))));
            }
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) 2010199625U);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_15 *= ((/* implicit */unsigned char) ((arr_12 [i_0 - 3] [i_4] [i_0 + 1]) >= (arr_12 [i_0 - 3] [i_1] [i_0 + 1])));
                    var_16 = ((/* implicit */short) (~((~(22LL)))));
                }
            }
        }
        arr_20 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_1)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)));
    var_18 &= ((/* implicit */_Bool) 4294967277U);
}
