/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((min(-31992, var_9)) / (((var_8 ? var_0 : var_6)))))) ? var_9 : var_9));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (max(var_18, ((((min((arr_0 [i_0] [i_0]), 4538441195203173164)) != -32759)))));
        arr_3 [10] = (((max((var_4 > var_14), (((arr_2 [1] [1]) && var_10)))) ? (var_5 >= var_5) : ((var_15 ? (var_3 >= var_7) : (var_9 * 0)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = 732800234;
        arr_8 [2] = 3562167061;
        var_20 += (((min(3588066391, var_6))) && ((min(732800234, var_0))));
        var_21 = (((max(1, var_12)) / (max(3562167059, (max(var_11, 1457338706785087220))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, ((((!var_10) ? var_7 : 1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = ((arr_10 [i_2 + 3]) - 18082896734455554346);
                                var_23 = 1;
                                var_24 &= 1;
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_2] = (var_11 * -31761);
        var_25 -= ((3562167044 ? (((var_6 ? var_5 : var_6))) : 16318315303412799787));
    }
    var_26 = ((var_14 || (!var_11)));
    var_27 = ((var_12 ? var_13 : (max((min(0, var_5)), ((0 ? var_2 : var_6))))));
    var_28 = var_2;
    #pragma endscop
}
