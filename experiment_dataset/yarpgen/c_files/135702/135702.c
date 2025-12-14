/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (var_6 && 78);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_5;
                    arr_10 [i_0] [i_0] = var_6;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [i_0] [7] [i_0] = ((((((-(arr_7 [i_0]))) | (((-(arr_8 [i_0])))))) - (((-41495935 ? var_11 : (arr_6 [5] [i_0] [i_1 - 1] [i_1 - 1]))))));
                        arr_15 [10] [i_0] [i_2] [i_0] [i_0 + 2] = ((~((~(arr_4 [i_0] [i_0 - 1] [i_2])))));
                    }
                    var_14 = (arr_2 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
