/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_19 = (((arr_2 [i_0] [i_0]) && (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [4] = (arr_2 [i_1] [i_1]);
        var_20 = var_0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = (max(-70, (((arr_2 [i_4] [i_4]) ? (arr_11 [i_3 - 1] [i_3 - 4] [i_3 + 1]) : (~1159757203)))));
                        arr_13 [10] [10] [10] [10] = ((((((var_8 ^ (arr_2 [i_4] [i_2])))) ? ((-1002736665 ? 5702001493728907626 : (arr_2 [i_1] [i_1]))) : (arr_7 [i_3 + 1] [i_3 - 4] [i_3 - 4]))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((37 ? (arr_8 [i_4] [i_4] [i_4]) : ((((min((arr_2 [i_4] [i_2]), (arr_0 [i_1] [i_2])))) ? (max(5702001493728907626, (arr_9 [i_1] [i_2] [i_3] [i_3]))) : (arr_2 [i_1] [i_1])))));
                    }
                }
            }
        }
        arr_15 [i_1] [i_1] = var_1;
    }
    #pragma endscop
}
