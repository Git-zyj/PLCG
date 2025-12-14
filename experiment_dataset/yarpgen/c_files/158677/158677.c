/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_7;
                    arr_11 [i_0] [i_2] [i_2] = ((((min((((var_9 == (arr_8 [i_0] [i_1] [i_2])))), ((23 ? var_5 : var_1))))) ? (max((((55 != (arr_1 [i_1])))), var_11)) : (arr_7 [i_0] [i_1] [i_2])));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = (arr_4 [i_0] [i_1] [i_2]);
                }
            }
        }
        arr_13 [i_0] = var_7;
        arr_14 [i_0] [i_0] |= max(((min((arr_7 [i_0] [i_0] [i_0]), var_0))), (((arr_5 [i_0]) & var_4)));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_6] = (1 || 0);
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((((arr_25 [i_6] [i_5] [i_4] [i_3] [i_3] [i_3]) ? var_2 : (arr_20 [i_3] [i_4] [i_5] [i_6]))) != var_1));
                        arr_28 [i_6] [i_5] [i_3] [i_3] [i_4] [i_3] = ((((((arr_18 [i_3] [i_4] [i_5]) % var_8))) || var_10));
                        arr_29 [i_3] [i_4] [i_3] [i_6] = arr_16 [i_3];
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_40 [i_3] [i_3] [i_7] [i_3] [i_9] [i_10] = var_3;
                            arr_41 [i_3] [i_3] [i_10] [i_9] [i_10] = (((arr_25 [i_7] [i_7] [i_3 - 1] [i_3] [i_3] [i_3]) << (var_8 + 18136)));
                            arr_42 [i_3] [i_3] [i_7] [i_9] [i_10] = ((((-(arr_37 [i_3] [i_3] [i_10]))) - 1));
                        }
                        arr_43 [i_3] [i_8] [i_9] = -19;
                        arr_44 [i_7] [i_7] [i_3] [i_9] [i_9] [i_9] = ((16211314368393761997 >> (1151407751 - 1151407710)));
                        arr_45 [i_3] [i_3] [i_3] [i_7] [i_8] [i_9] = (arr_38 [i_3] [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]);
                    }
                }
            }
        }
        arr_46 [i_3] = var_10;
    }
    var_12 = var_9;
    var_13 = var_3;
    var_14 = ((1168857633 ? var_4 : var_0));
    var_15 = (((!var_11) ? -2 : -1151407763));
    #pragma endscop
}
