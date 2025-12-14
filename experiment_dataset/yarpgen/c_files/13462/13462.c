/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(9223372036854775788, 45));
    var_20 = 30448;
    var_21 = ((3237853513540301937 ? var_0 : (((var_4 ? var_2 : (min(var_10, var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_3] = ((var_0 + (((min((min((arr_3 [13] [13] [i_2 + 1]), (arr_10 [i_2] [18] [18] [1] [18]))), (arr_11 [i_2 - 3] [i_2 - 3] [i_2 - 4] [i_3])))))));
                        arr_14 [i_0] [i_1] [4] [i_3] = (((arr_4 [i_3 + 1]) || (arr_6 [i_2 - 1] [i_3 + 1])));
                        arr_15 [i_0] [i_1] [i_0] [i_3 - 1] [i_3] = (min((arr_9 [i_0] [i_3 + 1] [i_3] [i_3] [i_3]), (arr_9 [i_1] [i_3 + 1] [i_3] [i_1] [20])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_4] = 28;
                        arr_20 [i_4] [i_4] [i_4] = (arr_12 [11] [i_1] [8] [i_1] [i_1] [11]);
                    }
                    arr_21 [2] [2] [i_1] [i_2] = (((((arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2]) ? var_17 : ((-(arr_6 [i_1] [i_2]))))) >= (arr_12 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2] [i_2])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_26 [i_0] [i_5] = -1024;
                        arr_27 [i_1] [i_2] = (var_7 / var_15);
                        arr_28 [i_0] [i_0] [20] = ((var_0 / (arr_25 [i_2 + 1] [i_2 - 1])));
                        arr_29 [6] [i_1] [18] [4] [i_5] = (-127 - 1);
                    }
                    arr_30 [i_0] [i_1] [4] = (var_2 ? (max(var_7, var_11)) : ((var_11 ? (arr_8 [i_2] [12]) : (~var_8))));
                    arr_31 [i_0] [i_1] [17] [i_2] = var_14;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_34 [i_6] = (((var_18 * 0) >> (11116583318609431460 >= var_0)));
        arr_35 [i_6] = (arr_10 [i_6] [i_6] [i_6] [18] [i_6]);
        arr_36 [i_6] [i_6] |= 30433;
    }
    #pragma endscop
}
