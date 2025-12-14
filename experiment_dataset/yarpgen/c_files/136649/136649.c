/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((((!(arr_3 [i_0 - 2])))) << (((arr_1 [i_0]) - 57890))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 ^= ((((((arr_7 [i_1]) ? var_7 : (arr_5 [10] [i_0] [i_2])))) && var_2));
                    var_14 = (var_0 - var_6);
                }
            }
        }
        arr_11 [i_0] &= 2741540691521012287;
    }
    var_15 = ((~((((var_5 ? 2060874844452241328 : 1563397569545174562)) & var_4))));
    #pragma endscop
}
