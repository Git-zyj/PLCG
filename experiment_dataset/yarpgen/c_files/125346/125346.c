/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [12] [i_1] = (max((((arr_3 [i_0] [i_1 + 1] [i_1 + 3]) ? 200 : (arr_3 [4] [i_0] [i_1]))), (((arr_3 [i_0] [i_0] [i_1 - 3]) ? (arr_3 [i_0] [i_1 - 2] [i_0]) : (arr_3 [i_0] [i_0] [i_1 - 3])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = max(0, 1);
                    arr_8 [i_0] [i_1] [i_1] [i_1] &= ((((-var_9 ? ((1 ? (arr_5 [i_0] [i_0] [1]) : (arr_3 [19] [1] [i_2]))) : (~var_3))) * (((((min(var_0, 18446744073709551615))) || (((var_2 ? (arr_6 [1] [i_1] [i_1]) : (arr_0 [1] [1])))))))));
                }
            }
        }
    }
    var_12 = ((var_2 ? (var_11 / var_1) : (((max((max(var_0, var_5)), 64))))));
    var_13 = ((1 ? var_11 : 0));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_18 [2] [i_4] [1] = ((18446744073709551615 ? 14971509702230075817 : 1));
                    arr_19 [i_5] [i_3] [1] = ((~(((arr_3 [i_5] [5] [i_3]) / (arr_3 [20] [i_4] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
