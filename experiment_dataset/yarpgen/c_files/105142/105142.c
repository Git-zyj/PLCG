/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (((!var_8) ? ((((var_9 & 101) ? (max(39328, var_4)) : ((min(30343, var_3)))))) : (max(var_1, (var_2 % var_6)))));

                for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_10 = var_5;
                    var_11 = (min(var_11, -2339));
                }
                for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [i_3] = (!1536);
                    arr_13 [i_1] [9] = (-1527 + 153957691);
                    var_12 = (max(var_12, ((((((var_8 ? var_1 : var_4))) >= (((var_2 & -1536) ^ -1563565205)))))));
                }
                var_13 = (~(!var_8));
                var_14 = ((((((!1) ? ((1024 ? var_8 : var_1)) : (min(var_1, var_4))))) ? ((var_9 + (min(var_0, 15128989970820496518)))) : (~191)));
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_15 = (((((~(var_5 & 152)))) ^ (((var_3 & var_0) ? (((var_3 ? var_4 : -1306867452))) : (var_1 | -1306867452)))));
        var_16 = ((-((min(1714244912, -8408025129438134972)))));
        var_17 *= ((~(1 ^ var_6)));
        var_18 = (((((27289 * (min(49883, 4177920))))) ? (((var_1 ? var_3 : var_8))) : (((((191 ? 65 : 17393060291808549089))) ? (var_5 + var_9) : 16322566544327282061))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_19 = var_1;

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_20 *= var_0;
            arr_23 [i_6] = (var_3 + var_8);
            var_21 = ((((121 ? var_0 : 1418)) - (var_6 ^ var_4)));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = (-1525400133 & 17393060291808549089);
        arr_27 [6] [2] &= (!var_3);
        var_22 = (max(var_22, (((-var_4 ^ (var_5 + var_4))))));
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_23 = (((var_4 & 4187151548489288279) ^ (((1053683781901002526 ? var_1 : var_5)))));
        var_24 = ((-(max(var_0, 99))));
    }
    var_25 = (~var_0);
    #pragma endscop
}
