/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = ((13086 ? 0 : -7841));
        arr_3 [i_0] = (((((!((((arr_0 [i_0]) ? (arr_1 [1]) : var_13)))))) | 1));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((var_0 ? -var_7 : (arr_0 [7])));
        arr_7 [i_1] = ((-7604 ? ((min(4095, 128))) : (min(-511, 65535))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_20 = ((var_16 ? (arr_8 [i_2]) : var_10));
            arr_15 [i_2] [i_2] = (((((1 ? -1 : 1))) ? (arr_5 [i_2]) : ((max(-30125, 3)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_21 = (min(var_21, ((max((((8 ? 5644546515373578163 : 46719))), ((+((-5644546515373578143 ? (arr_11 [i_4]) : var_4)))))))));
            var_22 = (((((23035 ? 65531 : 1969817628))) ? ((min(5657, (((arr_13 [i_2] [i_2] [i_4]) ? 127 : var_2))))) : (max(var_6, (arr_13 [i_2] [i_2] [i_2])))));
        }
        arr_19 [i_2] = (((var_18 ^ (arr_16 [i_2] [8] [i_2]))));
        var_23 = var_17;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_24 = 0;
                        arr_31 [i_7] = (((-((1969817628 ? (arr_9 [i_5]) : (arr_28 [i_7] [i_7] [i_8]))))));
                    }
                    arr_32 [i_7] [i_5] = (((-9220037272092577152 ? 8 : 0)));
                }
            }
        }
        var_25 = (arr_5 [i_5]);
        arr_33 [i_5] [i_5] = var_7;
    }
    var_26 = var_12;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                arr_42 [i_9] [i_10] = var_5;
                var_27 = (max(8, 1));
            }
        }
    }
    var_28 = var_10;
    #pragma endscop
}
