/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (max(var_11, ((min((min((arr_0 [i_0 + 1] [i_0]), (arr_0 [i_0 - 2] [i_0]))), (max((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0 + 1] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = arr_9 [i_0] [i_2];
                    arr_11 [i_0 + 2] [i_0] = (min(948342671, (~var_7)));
                }
            }
        }
        arr_12 [i_0] = (max(35, ((((-(arr_9 [i_0 + 2] [i_0 + 2]))) & var_4))));
        arr_13 [i_0 - 1] [i_0] = (min((((arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? ((var_6 ? var_4 : var_2)) : (arr_6 [1] [1] [1]))), ((min((arr_7 [i_0 - 1] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0 - 1] [i_0]))))));
    }
    var_12 = (!1484617402216250118);
    #pragma endscop
}
