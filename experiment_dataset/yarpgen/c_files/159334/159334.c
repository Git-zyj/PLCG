/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1 - 3] [i_0] = ((var_3 ? ((((arr_1 [i_0] [i_1 - 3]) ? (arr_0 [i_1]) : -30835))) : (arr_0 [i_0])));
                arr_5 [i_1] = (!var_10);
                var_12 ^= ((~(((1 == (arr_1 [i_1 - 4] [i_0 + 4]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_13 = (max(var_13, (((((((arr_10 [i_3] [1] [i_3 - 3] [i_3 - 2]) ? var_9 : (arr_10 [i_3] [i_3] [i_3] [i_3 + 1])))) ? (((min(var_11, 0)))) : (min((arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1]), var_1)))))));
                    arr_14 [i_2] [i_3 - 4] = ((-(arr_9 [i_3 - 1] [i_3 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
