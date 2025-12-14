/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = ((((max(var_5, var_7) ? 1 : (((arr_3 [i_0]) ? var_9 : 1))))));
        var_15 = (((arr_0 [i_0] [i_0]) ? ((max(1, (arr_1 [i_0] [i_0])))) : 0));
        var_16 = (max(((min(1, var_4))), (((arr_3 [i_0]) ? var_11 : var_4))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 *= var_3;
                    var_18 = (!((max(((var_10 ? (arr_3 [i_1]) : 1)), -var_8))));
                    var_19 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (!0)));
                                var_21 = arr_10 [i_1] [i_4] [i_1];
                            }
                        }
                    }
                    var_22 = ((+((var_9 ? (arr_8 [i_1]) : var_2))));
                }
            }
        }
        var_23 = (((((var_0 ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : var_10));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_24 = (((arr_15 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7]) ? (arr_15 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7]) : var_1));
                    var_25 = (((arr_8 [i_1]) / (((arr_8 [i_6]) ? var_7 : (arr_9 [i_1])))));
                    var_26 = ((((max((!1), ((-(arr_24 [i_1] [i_6] [i_6])))))) ? (arr_16 [i_7 - 1]) : (((arr_14 [i_1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]) ? 1 : (arr_19 [i_7 - 1])))));
                }
            }
        }
        var_27 = (!(((arr_21 [i_1] [i_1]) >= 1)));
        var_28 = (((arr_24 [i_1] [i_1] [i_1]) ? -var_6 : (((((arr_4 [1] [i_1]) ? var_12 : var_9))))));
    }
    var_29 = -var_6;
    var_30 = ((((((var_8 ? var_6 : var_9))) ? (!1) : ((var_3 ? 1 : 0)))) < 1);
    var_31 = 1;
    #pragma endscop
}
