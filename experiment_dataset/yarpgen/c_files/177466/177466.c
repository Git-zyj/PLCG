/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = var_0;
        var_14 = (max(var_4, (var_12 > var_2)));
        var_15 = ((var_10 % var_2) & (min(var_7, (min(var_3, 35242)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (35230 && var_2);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = var_4;
            var_18 -= (var_2 < var_2);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 = ((((var_3 << (30293 - 30266)))) ? (((var_0 && (-2147483647 - 1)))) : (var_12 && 1304474840));
                            var_20 = (~var_4);
                            var_21 += ((35826 <= (var_10 == 2511220589)));
                            var_22 = ((var_12 ? (~var_6) : var_5));
                            var_23 ^= 4;
                        }
                    }
                }
                var_24 = (1 / var_5);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_25 = (max(var_25, (((-32743 ? (-99 <= -2147483636) : 1)))));
                var_26 = (~-var_1);
                arr_21 [i_1] [i_1] = var_12;
                var_27 = 2147483647;

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_28 = var_7;
                    var_29 = 135;
                }
            }
            var_30 = 9223372036854775807;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_31 = (-22 || var_4);
            arr_26 [i_9] = (21 && var_10);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    {
                        var_32 ^= 2147483628;
                        var_33 = var_11;
                    }
                }
            }
        }
        var_34 = (min(var_34, (((-127 - 1) ? 21 : var_2))));
    }
    var_35 = (min(var_35, (((var_3 ? (min(9, (var_4 + var_10))) : var_12)))));
    var_36 = var_3;
    var_37 = -72;
    #pragma endscop
}
