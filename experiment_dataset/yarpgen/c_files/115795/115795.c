/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0]) / 201);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_21 = arr_6 [i_2];
                            var_22 = ((((((arr_5 [i_0] [i_1 + 1] [i_2] [i_3]) ? var_9 : -9144359832009096440))) ? var_1 : var_17));
                            var_23 = var_4;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_17 [18] [i_0] [i_2] [i_1] [14] [i_0] [i_0] = (((arr_16 [i_1 - 1]) & var_4));
                            var_24 = (-((-967757047 ? 3391874037 : 580869212)));
                        }
                        var_25 = var_2;
                    }
                }
            }
        }
        var_26 = (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 8446));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_27 = ((var_8 + (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        var_28 = (((arr_19 [6]) ? 49 : var_15));
        var_29 ^= (arr_20 [i_6]);
        var_30 = (((((arr_15 [10] [8] [12] [i_6] [i_6]) / var_16)) * ((29 ? 0 : var_0))));
    }
    var_31 = (((max((14807649557043881942 % 4294967284), (3 + var_2))) & (((((((max(21045, var_11)))) < ((var_17 ? var_16 : var_19))))))));
    var_32 = var_6;
    #pragma endscop
}
