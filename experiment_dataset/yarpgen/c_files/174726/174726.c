/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(((min(-96, 0))), 1));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] = (min((max(((max((arr_5 [i_0]), (arr_5 [i_0])))), (min(-7930087974862276782, (arr_2 [i_0]))))), -2465312890358550980));
            arr_8 [i_0] [i_1] = (max(15429315022513656637, -1788489311));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 &= (!0);
            var_22 = (min(var_22, (arr_9 [i_2] [i_2] [i_0])));
            var_23 = (max(var_23, var_5));
            var_24 = arr_2 [i_0];
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = (max(((max((arr_0 [i_3] [i_0]), (arr_0 [i_0] [i_0])))), (max((((((arr_0 [i_0] [i_3]) + 2147483647)) >> (((arr_11 [i_0]) - 31)))), var_10))));
            var_25 = max(var_18, var_11);
            var_26 *= ((((((arr_11 [i_0]) != (arr_11 [i_0])))) / ((max((arr_11 [i_0]), (arr_11 [i_0]))))));
            var_27 = ((!((((arr_3 [i_0] [i_3] [i_3]) | (arr_4 [4] [i_3] [i_3]))))));
            var_28 = -2694941869334587425;
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_29 = (max(var_29, (~3017429051195894979)));
            var_30 = var_5;

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_31 = (max(var_31, ((min((arr_11 [i_4]), (((!var_5) ? (arr_18 [i_0] [i_0] [i_4] [i_0]) : (max((arr_6 [i_5]), (arr_14 [i_0] [i_4] [i_5]))))))))));
                var_32 = (max((arr_15 [i_0]), 5508));
                var_33 = ((((((arr_16 [1] [1]) & (arr_16 [i_0] [i_0])))) ? (max(-2694941869334587421, 0)) : (((2147483647 ? (arr_16 [i_0] [i_4]) : (arr_16 [i_0] [i_4]))))));
                arr_21 [i_0] [1] [i_5] [1] = (max(2147483633, 15429315022513656609));
            }
            var_34 += (((arr_1 [i_4] [i_0]) && (((~(15 == var_2))))));
        }
    }
    var_35 = (max(var_1, var_18));
    var_36 = (max(var_36, (((((max((~2147483633), (~1)))) ? (((var_11 ? 2829015137 : var_4))) : (((((((9900823286068971193 ? 950703699 : var_3))) && var_15)))))))));
    #pragma endscop
}
