/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        arr_3 [4] = ((-((var_9 ? var_6 : var_13))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_2] [i_1] = (min((((var_0 + (((arr_4 [i_1]) ? var_7 : (arr_7 [i_2] [1])))))), ((((((arr_7 [i_1] [i_1]) | (arr_0 [6])))) ? (min(-974019323, (arr_4 [2]))) : ((-8073 ? 0 : 1))))));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_11 [9] = (max(((((((arr_9 [i_1] [i_3]) ? 2 : (arr_9 [i_1] [7])))) ? (((arr_5 [i_3] [i_1]) ? (arr_10 [7] [i_2] [i_2] [i_1]) : 1337360579)) : (~var_3))), (((arr_10 [i_1] [7] [i_2] [i_3]) ? ((var_7 ? var_4 : 1)) : (((arr_5 [i_1] [i_1]) ? 8080 : (arr_6 [18] [i_1])))))));
                arr_12 [i_3] [i_2] [i_1] = ((((!((max((arr_7 [16] [i_2]), (arr_9 [i_1] [i_1])))))) ? (!var_2) : ((1 ? (arr_1 [i_3]) : (arr_9 [i_1] [i_1])))));
                arr_13 [1] [i_2] [i_3] = (((!-1164765953) % (((arr_0 [i_1]) ? var_1 : (arr_6 [i_1] [i_3])))));
            }
            arr_14 [i_2] = ((var_2 << (((((arr_7 [i_2] [i_1]) - 1)) - 36552))));
        }
        arr_15 [i_1] = (max(((~(min((arr_7 [i_1] [i_1]), var_2)))), (((~(var_0 == var_14))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_23 [i_1] [4] [6] [4] = (((arr_19 [8] [i_5] [16] [i_1]) == ((min((arr_20 [i_4 - 1] [12] [12] [i_5]), (arr_7 [i_4 - 1] [i_4 - 1]))))));
                    arr_24 [i_5] [i_4] [i_1] = (1 ? -8073 : ((-((((arr_20 [i_4] [i_4] [i_4] [i_1]) && (arr_7 [i_4] [i_5])))))));
                }
            }
        }
        arr_25 [i_1] = ((!((((!1) ? (arr_7 [i_1] [i_1]) : var_2)))));
        arr_26 [i_1] = 127;
    }
    var_15 = (min(((-(max(var_13, var_14)))), var_8));
    var_16 = ((1 ? (((67341461 & var_10) ? ((0 ? var_1 : var_9)) : var_13)) : var_10));
    var_17 = -1624509866594232603;
    #pragma endscop
}
