/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 -= (~105);
        var_20 = ((var_0 ? -2147483635 : (-2147483635 <= var_14)));

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_21 = (-39555144 > 2147483635);
                arr_6 [i_0] [i_1 + 1] [i_0] [i_1] = (var_15 * -5);
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_22 = -var_14;
                var_23 = (min(var_23, (~-960982373)));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_24 ^= ((4467570830351532032 ? 2147483624 : 45));
                            var_25 &= var_6;
                            arr_13 [i_0] [i_0] [0] [i_1] [i_0] [i_0] [i_0] = ((((min(var_18, 2391243819))) ? ((7318016589343912791 ? var_13 : (-2147483647 - 1))) : (!var_3)));
                            arr_14 [i_5] [i_1] [i_5] [i_5] [i_5] |= ((~((max(var_14, var_9)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_20 [5] [5] = (max((4304206570961704981 ^ -1440242713667036652), (18446744073709551600 || -2147483635)));
                            var_26 *= (((var_4 | 0) <= (51656 < 2391243819)));
                            var_27 = (max(var_27, (((!((max((min(263749257450195148, 12471305)), (((-4 ? var_4 : var_14)))))))))));
                            var_28 *= (~var_15);
                        }
                    }
                }
                arr_21 [i_0] [1] [9] = (min((max((!var_14), var_15)), var_10));
            }
            arr_22 [i_0] [i_1] = min(var_16, (~18446744073709551615));
            arr_23 [i_0] = ((!(!var_2)));
            var_29 = ((var_0 ? (!var_14) : var_2));
            var_30 = -38;
        }
        arr_24 [i_0] = (min((!4282495997), ((var_12 >= ((31 ? var_10 : 15))))));
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_30 [i_8] = 7;
            var_31 = (222158956 - 0);
        }
        arr_31 [i_8] = (((-2147483647 - 1) ? ((-2147483624 ? (min(63, var_9)) : (var_12 >= var_2))) : (((-var_1 ? 1273346388 : 33)))));
        var_32 = (max(var_32, (((~(min(1675488819, 31)))))));
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_33 = var_6;
        arr_34 [i_10] = (~((min(var_7, (max(var_5, 0))))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_34 = (min(var_34, (1466646123 || var_18)));
        arr_37 [i_11] = var_4;
    }
    var_35 = (min(var_35, (~var_16)));
    #pragma endscop
}
