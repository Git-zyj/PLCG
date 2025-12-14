/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 18446744073709551608;
    var_11 = -var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = 1;
        var_13 = var_0;
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 2147483635;
        arr_7 [4] = ((-(min(var_7, var_1))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_14 = (max(((min(var_5, 1))), ((var_4 ? var_7 : -24192))));
        var_15 = ((867 ? -24192 : -398844854));

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_16 = (min(-6783472934519791256, ((((!var_9) ? (max(-118, 398844864)) : var_3)))));
            var_17 = (~var_6);
            var_18 = var_0;
            var_19 = 3;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_20 = min(((min(3, var_4))), ((var_3 ? var_1 : 28527)));
            var_21 = (max(1, 16438053262209470483));
            arr_16 [i_2 + 1] = var_3;
            var_22 = 58950;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_23 = ((((min(((140 ? 255 : 398844853)), 269343535))) ? -65534 : (!var_0)));
            arr_19 [6] = var_9;
            var_24 = (((~-7566123771906628202) ? -146 : 6601));
            var_25 = var_6;
        }
        var_26 = 2008690811500081134;

        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_27 = var_5;
            var_28 = var_3;
            var_29 = ((min(65534, var_5)));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_30 = 28527;
            var_31 = (~(!var_1));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_32 = (!var_0);
                        arr_36 [i_2] [i_10] [i_10] [i_10] = 2008690811500081150;
                    }
                }
            }
            var_33 = (~var_7);
            var_34 = ((!((max(var_4, var_5)))));
        }
    }
    #pragma endscop
}
