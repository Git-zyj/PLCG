/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (max(((0 ? (min((arr_0 [i_0 - 3] [i_0]), 255)) : var_3)), (arr_2 [i_1 + 1])));
                    var_12 |= (((((-(arr_4 [i_1 + 1] [i_0] [i_0 - 4])))) ? (arr_4 [i_1 + 1] [i_0] [i_0 + 2]) : (arr_7 [i_0 + 2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_13 = (arr_10 [10] [i_4]);
                    arr_17 [i_3] [10] [i_3] &= ((~(arr_15 [i_3])));
                }
            }
        }
    }
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                arr_24 [i_6] [i_7] = 0;
                var_15 = ((((-(arr_20 [i_7])))) ? 1033808245 : (((((arr_23 [i_6] [i_6] [i_6]) <= (arr_21 [i_7]))))));
            }
        }
    }
    #pragma endscop
}
