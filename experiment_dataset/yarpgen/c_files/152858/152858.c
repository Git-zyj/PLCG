/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_13 ? -var_3 : (max(var_12, var_2)))) & ((var_4 ? var_7 : (-7134697384304497766 + var_6)))));
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((min(-7134697384304497756, var_2))));
                    arr_8 [i_0] [i_1 + 2] [i_2] = (((((var_9 ? var_2 : (arr_3 [i_0 + 1] [i_0 + 1])))) || (((~(arr_3 [i_0 + 2] [i_0 + 2]))))));
                    arr_9 [i_1 + 2] [8] [i_2] = (((((-7134697384304497784 ? (arr_4 [i_0] [i_1 - 3] [i_2]) : (((arr_2 [i_0] [i_0]) / var_1))))) / ((var_18 ? (arr_5 [i_0] [4] [4]) : (-7134697384304497766 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
