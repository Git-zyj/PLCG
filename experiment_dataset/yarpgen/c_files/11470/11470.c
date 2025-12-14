/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_12 [i_3] = (min((((!((min(-22258, 0)))))), ((((((arr_2 [i_1]) ? (arr_1 [i_4]) : var_10))) ? (((~(arr_8 [2] [i_1] [i_2] [2] [i_3])))) : ((1193 ? 0 : 1))))));
                            arr_13 [i_0] [i_1] [i_4] [i_4] [i_4] = (((arr_8 [i_0] [i_0] [i_2] [7] [i_4]) ? var_12 : (min(0, ((-22245 ? var_16 : (arr_4 [i_0] [i_1] [i_2] [i_3])))))));
                            arr_14 [i_3] [i_1] [i_4] [i_3] [i_4] &= (max(1191, 3190260884));
                            arr_15 [i_3] [i_1] [i_2] [2] [1] = (arr_8 [i_0] [i_1] [i_2] [i_2] [i_4]);
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = (min((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]), (((-(arr_0 [0]))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_19 [i_0] [i_0] [i_0] = var_11;
                arr_20 [i_0] [i_1] = ((+((var_18 ? (arr_2 [3]) : 2773))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                arr_25 [i_0] [i_6] = 24963;
                arr_26 [0] [10] [i_1] [i_6] = 0;
                arr_27 [10] = (((0 ? (arr_24 [i_6 + 1] [i_1] [6]) : -24)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_30 [i_7] [i_7] [i_1] [i_0] = (!8584939262820925565);
                arr_31 [i_0] [i_1] [i_7] [5] = -18446744073709551596;
            }
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                arr_35 [i_0] [i_1] [i_1] [i_0] = (!(arr_2 [5]));
                arr_36 [i_0] [i_1] [i_8 - 2] = (((0 ? 8232 : 14322)));
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((((((var_4 ? var_11 : var_6) < (~1))))));
                arr_38 [i_0] = (((var_16 ? ((var_6 ? 3386441537 : var_15)) : (1669316559 < 1))));
            }
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            arr_41 [i_0] = (((arr_32 [i_0] [i_0] [i_0]) ? var_5 : var_5));
            arr_42 [i_0] [i_9 + 2] [i_9] = 178;
            arr_43 [i_0] = 1;
            arr_44 [i_0] [i_0] = -32768;
        }
        arr_45 [i_0] = ((var_7 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [9] [1]) : var_8));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_49 [i_10] [i_10] &= (!-4154260794481034781);
        arr_50 [i_10] = ((var_18 / ((((!(arr_48 [i_10]))) ? var_7 : (1 * 1)))));
    }
    var_19 = ((((!var_8) ? (((31128 ? 0 : -18122))) : 18398374579452232665)));
    var_20 = (~var_0);
    #pragma endscop
}
