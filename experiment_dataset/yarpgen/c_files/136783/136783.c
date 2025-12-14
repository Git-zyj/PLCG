/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((-(arr_1 [i_0]))))));
        var_22 = (130816 > 130793);
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_23 = (((130844 ? (arr_4 [i_1] [i_1 - 2]) : (arr_4 [i_1] [i_1 + 1]))));
        var_24 = (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = arr_5 [23];
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    {
                        var_26 *= ((-(arr_21 [i_2 - 3] [i_2 - 3] [i_5 - 1] [i_5 + 1])));
                        var_27 = (((arr_5 [i_2 - 2]) - (var_7 - var_12)));
                        var_28 = (max(var_28, 1));
                        var_29 = (arr_16 [i_2] [i_2] [i_2 + 1]);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_30 = ((((min((arr_23 [i_2 - 3]), (arr_6 [i_2 - 3] [i_2 + 1])))) ? 2411043708 : (max(428806534, var_2))));
            var_31 *= (((var_19 || (((-126 ? 130807 : (arr_18 [i_6])))))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_32 |= (min(14380888888852274693, (arr_2 [i_9])));
                            var_33 *= (min(((((arr_30 [i_2 + 1] [i_2 - 3] [18] [4] [i_2 - 2] [i_2 - 2]) & (min((arr_21 [i_9] [i_2] [i_7] [i_2]), 65535))))), (min(var_15, 1))));
                        }
                    }
                }
            }
        }
        var_34 = (max(var_17, (((((0 ? var_13 : (arr_0 [i_2])))) ? (arr_5 [i_2]) : 3545461500013451388))));
        var_35 -= ((((((~4294836476) ? 1 : ((((arr_8 [i_2]) > (arr_4 [1] [1]))))))) + (max(3257251376, 127))));
        var_36 = (((((~(-13368 & 25082)))) ? (~130820) : (((((4294836455 ? var_12 : (arr_30 [1] [i_2 - 1] [i_2] [i_2] [11] [i_2]))) & ((var_0 ? 0 : (arr_5 [i_2]))))))));
        var_37 = ((((-(arr_25 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 1]))) + var_14));
    }
    #pragma endscop
}
