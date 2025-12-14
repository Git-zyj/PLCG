/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_15 = (~243);
        arr_4 [i_0] = (((max(var_2, (45987 + 10819))) + (((-2147483647 - 1) + 45998))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (max(5968123565551521650, 45987));
        var_17 = var_4;
        var_18 &= (!var_5);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 = ((~(((~var_12) | (~12478620508158029974)))));
        arr_10 [16] = 35473;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = (~var_6);

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_21 |= ((~((~(!var_7)))));

            for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_21 [i_3] = var_2;

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_22 = -22450;
                    var_23 *= (!12586);
                    arr_25 [i_3] [5] [i_5] [i_6] [i_5] = var_1;
                    var_24 = var_9;
                    var_25 = (min((~var_5), var_12));
                }
                arr_26 [i_3] = ((-(min((min(var_1, var_5)), (~19548)))));
                var_26 = (min((~var_6), var_0));
            }
            for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    var_27 = var_12;
                    var_28 = max(-31202, 17);
                    arr_31 [i_7] [i_7] = (min(((~(var_1 | var_3))), 35473));
                }
                var_29 = var_1;
            }
            for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_30 = 7;
                arr_34 [i_3] [i_3] [i_9] [i_3] = var_11;
            }
            var_31 = var_6;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_32 = (((!var_4) || -12587));
            var_33 = ((!(((var_7 | ((min(var_6, 18675))))))));
            arr_39 [i_3] [i_10] [i_3] = var_4;
        }
    }
    #pragma endscop
}
