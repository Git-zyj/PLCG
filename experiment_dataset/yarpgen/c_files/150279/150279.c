/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [1] = max(-7713, 341995613);
        arr_3 [i_0] [i_0] = ((-0 || ((max(-6252007232022212307, -87)))));
        var_11 |= 16808845433624896956;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_12 = -2372739053612266628;
        var_13 = ((arr_6 [i_1 - 2]) / (11050370205677612520 * 41));
        var_14 -= ((~(((((max(var_8, (arr_4 [i_1 - 2])))) > ((min(87, (arr_4 [i_1])))))))));
        arr_7 [i_1] = (44625 - 1);
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_15 = (12375443257488207171 >= 215);
            arr_13 [i_2] [i_2] [i_3] |= (((~var_7) <= 127));
            var_16 *= (min(((-var_0 >> (!0))), -1));
            arr_14 [15] [i_2] [i_2] = (!(arr_12 [i_3]));
        }
        var_17 -= ((!((max(((max(var_4, var_2))), (max(2009, 205)))))));
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        arr_19 [i_4] = (((-((min((arr_16 [i_4 - 2]), 180))))));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_18 -= ((min(-6447515972910195573, var_5)));
                var_19 ^= ((-48 % (~1)));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_20 -= ((((max(86, var_2))) - (~-102)));
                var_21 = (162 < -44);
            }
            arr_29 [i_5] = (((max((arr_11 [i_4] [i_4] [i_4]), (arr_10 [i_4] [i_4] [i_4])))));
            var_22 = ((~(max(var_3, var_0))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_23 = ((((1 * 595121592489460259) / (((max((arr_8 [i_4] [i_4]), 22084)))))));
            var_24 = (min(var_24, 19286));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_25 -= (1 < 1);
            arr_37 [i_9] = var_7;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_41 [i_4 - 1] [i_10] [i_10] = (1 < 162896538477925014);
            var_26 = (min(var_26, (41 & 0)));
            arr_42 [i_10] [i_10] = ((arr_34 [i_4 - 1] [i_4 - 4] [i_4]) & -102);
            arr_43 [i_4] [1] [i_4] = -0;
        }
    }
    #pragma endscop
}
