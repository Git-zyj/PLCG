/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((-((min(173, 1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_4] [i_3] [0] [0] [i_0] &= var_8;
                            arr_18 [14] [i_1] [1] [i_1] [i_1] [14] = ((~(max(var_4, (min(var_10, var_6))))));
                            arr_19 [i_0] [10] [i_0] [i_0] [i_4] = 76;
                            var_16 = (((~61) ? ((max(var_7, 35))) : (max((~var_1), ((min(var_8, var_7)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, 1));
                            var_18 = (~var_9);
                            var_19 = (~var_3);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((-var_13 >= ((var_12 ? var_5 : var_2))))))));
                            arr_27 [i_6] [i_1] [i_6] = var_12;
                            arr_28 [i_6] = ((min(var_8, var_4)));
                            var_21 = (max(var_21, (((1178257565 ^ (max((min(1, -586690225)), -12)))))));
                        }
                        var_22 = (min(var_22, ((((min((min(var_6, var_11)), -5642)) | (((max(var_2, var_8)))))))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_1] = 0;
                        arr_30 [i_0] = max(((-12 ? -37 : 11)), ((var_7 ? -150 : (!var_7))));
                    }
                }
            }
        }
        var_23 *= ((!(!233)));
        var_24 = (((-((max(1, var_11))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_25 = var_8;
            var_26 = (~var_5);
            var_27 = var_7;
            var_28 = (min((max(((min(var_9, var_13))), ((var_10 ? 1 : var_6)))), (((-(1 || 117))))));
            arr_36 [i_8] [i_8 - 1] = ((var_0 || ((max(var_10, (var_12 - 1178257563))))));
        }
        var_29 = var_11;
        arr_37 [i_7] = ((40281 ? (1 || 7155) : (min(((var_3 ? var_5 : var_2)), ((min(var_1, var_12)))))));
        arr_38 [i_7] = (((min(var_7, var_11))) ? 1 : (596770413 >> 7));
    }
    var_30 = ((min(22, 0)));
    #pragma endscop
}
