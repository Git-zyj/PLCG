/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 < (min(1240053752, 1297550436010558554))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 ^= (max((((((arr_1 [i_0] [i_0]) & (arr_1 [18] [18]))) & (arr_1 [9] [i_0]))), (1 + var_6)));
        var_13 ^= (min((((var_4 <= (((arr_0 [i_0]) ? var_8 : (arr_0 [i_0])))))), ((-(((arr_1 [i_0] [i_0]) / (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (max(-1, -1));
        var_14 = (max(var_14, ((((((((min(var_0, var_1))) <= (arr_0 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = ((~((-8190 ? ((var_0 / (arr_3 [i_2]))) : (1 <= var_3)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [13] [i_3] = (!-13230);
            arr_13 [i_2] [i_3] = ((var_4 ? (((!(arr_5 [20] [13])))) : (!-1)));
        }
        arr_14 [13] [13] = (min(1240053757, 1240053752));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (((arr_2 [i_4]) >= -7312791852203668731));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_4] [9] [i_6] = -7378634178239417618;
                    arr_26 [i_4] = -1297550436010558554;
                }
            }
        }
    }
    #pragma endscop
}
