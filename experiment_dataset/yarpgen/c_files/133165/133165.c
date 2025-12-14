/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 * -1732751105);
    var_11 = (min(var_11, ((-46 ? var_1 : (var_0 - var_5)))));
    var_12 = (min(var_12, ((min(((max(var_8, ((var_2 ? 197 : 2328577754))))), (max(var_5, ((1430279143 ? var_5 : var_7)))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, var_4));
        var_14 = 266203731;
        arr_4 [i_0] = (min((((arr_0 [i_0]) / 58)), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 -= ((~((-((30 ? 2864688153 : -8353773328631191713))))));
        var_16 = 58;
        arr_8 [i_1] [i_1] = -var_9;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        var_17 = (min(var_17, 197));
                        arr_22 [i_2] = ((min(-24, (~-16))));
                        var_18 = (~(((47756461 ? (arr_12 [7] [i_3] [2]) : var_5))));
                    }
                }
            }
        }
        var_19 = (min((((arr_10 [i_2]) ? (arr_10 [i_2]) : var_6)), var_4));
        arr_23 [13] [i_2] = (max((((arr_15 [i_2] [i_2] [i_2] [i_2]) / (arr_5 [i_2]))), (arr_21 [i_2] [i_2] [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = -var_5;
                                arr_35 [i_2] [i_6] [i_7] [i_9] = ((var_5 * (184010847 == 406832784)));
                                var_21 = ((((((max(159, -9841))) + (~var_0)))) ? (max(((32505856 << (3944557723338789823 - 3944557723338789823))), var_7)) : var_4);
                                var_22 = 576325558;
                                var_23 |= (min((((((-(arr_18 [i_2] [i_9] [11] [i_9] [i_9])))) ? ((19859 ? 46 : (arr_30 [i_8] [i_8] [i_8]))) : ((max(-3944557723338789823, -26348))))), (((!(~302532573))))));
                            }
                        }
                    }
                    var_24 = (((arr_11 [i_7] [i_7]) ? var_2 : (min(197, var_6))));
                    var_25 = ((-38 ? -3944557723338789834 : -1759935092247672864));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_26 = 2864688153;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_27 = (arr_36 [i_10]);
                    arr_43 [i_12] [i_12] [i_10] [i_10] = (arr_6 [i_11]);
                    var_28 = (max(var_28, var_5));
                }
            }
        }
    }
    #pragma endscop
}
