/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_0);
    var_12 = (max(var_12, var_10));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((((min(var_6, (arr_2 [i_0])))) && var_4))), var_5));
        arr_4 [i_0] = ((!((!(arr_0 [i_0])))));
        var_13 = (max(((max(((max((arr_2 [i_0]), var_4))), (min(var_9, var_2))))), var_8));
        var_14 = (max(3566408252763188074, var_3));
        var_15 = (min((max((((-66 - (arr_1 [i_0])))), (min(var_0, var_5)))), ((((221 && -5161251834823542455) >= 224)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_16 = ((var_1 ^ ((min(4294967278, 32767)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 = (((max((min(-4109, -4415120527481385586)), ((min(var_5, (arr_9 [i_1] [i_2] [i_2] [i_1])))))) - ((((arr_8 [i_1 + 1] [i_3 - 1]) - ((max(-75, 25869))))))));
                    var_18 += (min(((max((arr_9 [i_1] [i_1 + 1] [i_1 + 1] [12]), (arr_9 [i_1] [i_1 - 1] [i_1 - 1] [14])))), (-5161251834823542455 / 58)));
                }
            }
        }
        var_19 = (min(var_19, ((((max(-var_2, var_9)) + (((~(arr_8 [i_1 + 1] [i_1 - 1])))))))));
        var_20 = (7 >= -2147483645);
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = var_9;
        var_21 = ((max((87 % 38), 237)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_22 = (min((arr_18 [i_5]), (min((arr_21 [i_5] [i_5]), var_10))));
            var_23 = ((min((arr_21 [i_5] [i_5]), (arr_21 [i_5] [i_5]))));
            arr_22 [i_6] = var_10;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_24 *= ((var_8 ? (max((arr_21 [i_7] [i_7]), (arr_21 [i_5] [i_7]))) : var_8));
            var_25 = (((-(-3440990770260366196 >= var_6))));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_26 = (((((25885 && -32745) / 25869)) >= 209));
            arr_27 [i_5] [i_8] &= -19;
            var_27 += var_1;
            var_28 = (max((max((min(var_8, (arr_20 [i_5] [i_8] [i_5]))), (max(var_7, var_8)))), ((min((arr_25 [i_5]), (arr_25 [i_5]))))));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                var_29 = (min(var_29, (arr_30 [i_5] [i_5])));
                var_30 = (min(((((min(5161251834823542455, -15180)) <= (6 || 477458193)))), (var_10 ^ 1367259328)));
                var_31 = (!-64);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_32 = ((((max(8839687732373531169, (arr_26 [i_5] [i_10] [i_5]))) == var_7)));
                            var_33 = (((-127 - 1) + (-23 <= -3846397279686556062)));
                        }
                    }
                }
            }
            var_34 = (min(var_34, ((min((min((arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] [i_9]), (min(var_6, (arr_20 [i_5] [i_5] [i_9]))))), (~3))))));
            var_35 = (arr_26 [i_5] [i_5] [i_9]);
        }
        arr_40 [i_5] [i_5] = ((((min((arr_23 [i_5] [i_5] [i_5]), var_8))) || ((!(arr_23 [i_5] [i_5] [i_5])))));
    }
    #pragma endscop
}
