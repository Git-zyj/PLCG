/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((var_10 + 1) ? var_4 : var_0)) / 1));
    var_14 = ((-((((max(var_7, var_1))) ? 1 : ((var_11 ? var_3 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (max(var_10, (~var_12)));
                    arr_10 [i_1] [i_0] = (((arr_7 [i_0] [i_1 - 1] [i_2] [i_0 - 2]) ? (((var_9 ? (arr_6 [i_0] [i_1] [i_1]) : var_4))) : ((max((~79), 1)))));
                    arr_11 [i_2] [i_1] [i_0 - 2] [i_0 - 2] = (((-var_6 == (((601056737 ? var_0 : (arr_7 [i_0] [i_1 - 2] [i_1 - 1] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_15 = (arr_12 [i_3] [i_4]);
                arr_17 [i_3] [i_3] = ((((6248 <= (arr_15 [i_3] [i_3] [i_3]))) ? -1 : (((((var_1 ? 79 : (arr_13 [i_4])))) & (arr_12 [i_4 - 1] [i_4 - 1])))));
            }
        }
    }
    #pragma endscop
}
