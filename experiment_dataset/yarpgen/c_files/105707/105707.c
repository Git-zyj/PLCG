/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_10 = (((min(8099875533447709347, (arr_3 [i_0] [i_0] [i_0])))) ? 770689478 : (min(var_0, (arr_1 [i_1 - 1]))));
                        arr_10 [i_0] [i_0] [11] [i_2] [i_0] = ((((((arr_7 [i_1 - 2] [i_1] [i_2]) >= 2147483645))) <= 1486621642));
                        var_11 = (-8099875533447709347 <= -8099875533447709360);
                        var_12 = (((((((4833726025960616684 ? var_2 : (arr_6 [i_0] [i_0])))) ? -var_0 : (min(var_9, (arr_8 [i_3] [i_2] [i_0] [i_0]))))) <= ((8099875533447709367 ? (((arr_6 [12] [12]) - var_1)) : var_4))));
                    }
                }
            }
        }
        arr_11 [6] = 0;
        var_13 = ((((var_3 ? (arr_1 [i_0]) : -8099875533447709367)) + (((-2147483647 - 1) ? 1640102406 : -5578403911008458744))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_14 ^= (min(((((min(var_0, var_6))) - (var_3 - -2105361544))), ((min(-1533405260, var_5)))));
        var_15 = (max(var_15, (((!((min(var_6, ((70 ? 3250210133922797491 : (arr_5 [i_4] [16] [i_4] [i_4])))))))))));
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_28 [i_8] [i_8] [i_7] [i_8] = (var_9 || -var_4);
                        var_16 = (max(var_16, ((((((((min(var_9, (arr_21 [i_5] [i_5] [5] [i_5])))) ? (min(var_1, (arr_9 [i_5] [14] [i_7] [i_8]))) : (arr_27 [i_8] [i_8] [i_8] [i_8] [9])))) ? (((-408076511 ? var_1 : var_1))) : ((((-2105361520 ? 1533405272 : -3250210133922797467)) * (((4193792 ? 4130422427 : -2105361559))))))))));
                    }
                }
            }
        }
        var_17 = (((((-650478168 ? ((var_2 ? 3250210133922797474 : (arr_5 [i_5] [i_5] [11] [i_5]))) : ((((arr_23 [i_5] [i_5] [i_5] [i_5]) ? var_1 : var_1)))))) || (((-504867622 ? var_4 : (arr_24 [i_5] [2] [i_5] [i_5] [2]))))));
        var_18 ^= ((-(arr_23 [i_5] [i_5] [6] [i_5])));
        var_19 |= (arr_23 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
