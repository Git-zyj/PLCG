/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (max((((var_6 == var_2) * var_7)), ((max(var_7, 1)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_15 [7] [i_1] [i_1] [i_3] [i_3] = 3989097216;
                    var_13 ^= (((arr_7 [i_2 + 1] [i_3] [i_2 + 1]) ? (arr_7 [i_3] [i_3] [i_2 + 1]) : var_9));
                    arr_16 [i_0] [i_3] [i_3] [i_0] = (((arr_0 [i_1]) << (((arr_2 [i_2 + 1] [i_1]) - 28392))));
                    var_14 &= (arr_7 [i_3] [i_2 + 1] [i_2 + 1]);
                    var_15 = (arr_9 [i_3] [2]);
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_16 = var_6;
                    var_17 = ((!(((450306738268533757 ? (arr_13 [i_4] [i_2] [11] [i_1] [i_4]) : 2717196049496242012)))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_18 = (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1]);
                        var_19 = var_4;
                        var_20 = (20192 ^ 1);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_21 = (-((var_6 ? -2717196049496242030 : 2224176365)));
                        var_22 = arr_0 [i_0];
                        var_23 = 1;
                        var_24 = (min(var_24, (((-926524582519095300 ? (arr_23 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : 4193557833)))));
                    }
                }
                var_25 = -5037671075410944282;
            }
            var_26 = (arr_6 [i_0] [i_0]);
        }
        arr_28 [i_0] = var_0;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_33 [i_7] = 1824865153;
        arr_34 [i_7] = (arr_30 [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_27 ^= (((1555241557 ? 56 : (arr_7 [i_8] [i_8] [1]))) >> 1);
        var_28 -= var_8;
        var_29 = (max(var_29, (((!(arr_0 [i_8]))))));
        var_30 = var_5;
    }
    #pragma endscop
}
