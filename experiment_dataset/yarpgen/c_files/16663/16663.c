/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (-17779402698485947 / -2232027854482647635);
    var_16 = ((2232027854482647635 ? var_5 : 2537830289));
    var_17 += var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min(4531260314911775372, -34));
        var_18 &= (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((!(((1 ? 34 : 2232027854482647618))))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_19 = (min(var_19, 4531260314911775370));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = ((((max(59, (arr_1 [i_1 - 2])))) ? var_10 : (var_2 / -4904836446040274232)));
            var_21 &= max(((min(26, 47))), (((arr_5 [6] [i_1 + 2] [i_1 + 2]) ? 75 : 1)));
        }
        var_22 = 181;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] = ((527511548775354042 ? var_1 : (((arr_13 [i_1] [i_1 - 1] [i_4 - 1] [i_4 + 1]) % 51283))));
                        var_23 = -4531260314911775387;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (max(-21, (max(4531260314911775358, 24939))));
                            arr_19 [i_1] [i_1] = (min(2043045361, var_1));
                            arr_20 [i_1] [i_3] [i_3] [i_3 + 4] [i_3] [i_3 + 3] [i_3] = (max(522645191, 2678575585627547958));
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_25 += max(var_1, (((arr_11 [i_1 - 2] [i_1 - 2]) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_7]) : 1380315265845664980)));
                            var_26 &= ((!((((arr_21 [i_1 + 1] [i_3 - 1] [i_4 + 1] [i_1 + 1] [i_7 - 1]) ? 181 : (arr_21 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]))))));
                            var_27 = (arr_11 [i_3 + 4] [i_4 - 2]);
                            var_28 += (max(((max(var_6, var_11))), ((min(2232027854482647614, 16214716219226904002)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = ((-(((!(arr_18 [7] [i_8] [i_8]))))));
        arr_27 [i_8] [i_8] = (min(24135, (max(181, 12445))));
        var_29 = 37797;
    }
    #pragma endscop
}
