/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 += (-307101759 <= 61705);
        var_16 = (((arr_0 [i_0]) == (arr_0 [i_0])));
        var_17 = (-2058290530 && var_1);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_18 = (max((arr_3 [i_1] [i_1]), (arr_4 [i_1 + 1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_19 -= (max(((((arr_9 [i_1] [i_2] [i_1] [i_1]) & (max(3860, 307101759))))), (min((((arr_12 [i_5] [i_4] [i_3] [i_2] [i_1 - 2]) ? (arr_4 [17]) : (arr_10 [i_1] [2] [i_3] [i_4 - 3]))), 0))));
                            var_20 |= (min((max(var_10, (arr_13 [14] [i_5 - 2]))), ((var_8 ? ((-1120240112 ? var_1 : (arr_12 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))) : 3805))));
                        }
                        var_21 = -32763;
                        var_22 -= ((~(((((min(255, 1))) > 3856)))));
                        var_23 = ((((((arr_7 [i_1] [i_1 - 1]) + ((1 ? 26255 : 24535))))) ? 307101758 : 40978));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (min((arr_16 [i_6] [i_4] [i_3] [i_2] [i_1]), -var_9));
                            var_25 = var_0;
                            var_26 = (((((min(var_9, 1)) - (arr_16 [i_1 - 1] [i_2] [i_3] [i_4 - 3] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_27 = var_2;
                            var_28 = ((!(!37462)));
                            var_29 = 1;
                            var_30 = -307101786;
                            var_31 = (min((arr_18 [i_1] [i_1 - 1] [i_2] [i_3] [i_3] [0] [i_7]), var_5));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_32 = (min(((-(arr_6 [i_8 - 1]))), ((((32767 ? 1 : 0)) + (((arr_15 [i_1 - 1] [i_2] [i_3] [i_4] [i_4]) ? -627472948 : (arr_7 [1] [1])))))));
                            var_33 = (min(2839292137, 107));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        var_34 = (max(var_34, (arr_18 [i_9 - 2] [i_9 - 2] [i_9] [i_9 - 2] [10] [10] [i_9])));
        var_35 = ((((min(-1585020627, 0))) ? 0 : (((arr_7 [i_9 + 1] [i_9 - 2]) ^ (arr_7 [i_9 - 2] [i_9 - 2])))));
        var_36 = ((((((var_0 >> (var_3 - 802394160))) ? ((811564379 ? (arr_0 [0]) : (-2147483647 - 1))) : -1489142430))));
        var_37 = (~-var_13);
        var_38 = (max(var_38, (((-99246790 < (arr_6 [i_9]))))));
    }
    var_39 *= ((((!((max(1, var_1)))))));
    var_40 = var_8;
    #pragma endscop
}
