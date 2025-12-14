/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((318904740 ? ((((min(var_0, var_16))) ? -var_16 : (!1))) : var_16));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [2] = var_13;
        arr_3 [i_0] [i_0 - 2] = ((~((((arr_1 [i_0 - 2]) || (arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((-((((arr_6 [9]) && var_12)))));
            arr_10 [14] [i_1] [14] = var_1;
            arr_11 [18] [i_1] = (arr_4 [1]);
            arr_12 [i_1] [12] [0] = var_0;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [6] [11] [1] = var_13;
                        arr_21 [i_1] = (min((min((arr_14 [i_3 - 1] [9] [i_4 + 2]), var_12)), (arr_17 [i_1] [i_1] [19] [i_1])));
                    }
                }
            }
            arr_22 [i_1] = ((((((arr_16 [i_3 + 1] [i_3 + 2] [15]) ? (arr_17 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) : (arr_15 [i_1])))) ? (arr_17 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : -16745));
            arr_23 [i_1] [8] = (arr_16 [i_3 + 1] [i_3 + 1] [13]);
        }
        arr_24 [i_1] [16] = -0;
        arr_25 [i_1] = 965289765;
    }
    var_18 = (min(var_9, var_0));
    var_19 = ((var_8 ? ((36 ? 14399473486440779458 : 32619)) : var_8));
    var_20 = var_0;
    #pragma endscop
}
