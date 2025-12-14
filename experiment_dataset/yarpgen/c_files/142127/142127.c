/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_5 ? ((var_2 ? var_0 : 3117460000) : (((7680 ? var_10 : 7691)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 = ((((~(arr_2 [4] [i_0]))) < (arr_0 [i_0] [i_0 + 1])));
        var_13 = 57855;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (min(-214255674, (min(var_10, (arr_3 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2 - 2] [i_1] [i_2] = var_4;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = 1;
                                arr_18 [i_2] [i_2] [i_3] [i_3] [i_3] = (arr_7 [i_1] [i_2] [17]);
                            }
                        }
                    }
                    var_16 = (arr_8 [i_2] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 = (arr_15 [i_2] [i_2] [i_2]);
                                var_18 = (arr_19 [i_2 + 1] [i_6 - 1] [i_7]);
                                arr_25 [i_1] [i_1] [i_2 - 2] [i_2] [i_3] [i_6] [i_7] = ((!(arr_9 [i_2] [i_2] [i_2 + 1] [16])));
                            }
                        }
                    }
                    arr_26 [i_2] = (max((arr_4 [i_2 + 1] [i_2 - 2]), (arr_5 [i_2])));
                }
            }
        }
        var_19 = (arr_7 [i_1] [i_1] [i_1]);
        var_20 = (((arr_15 [i_1] [i_1] [i_1]) ? ((var_5 ? (((max((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [4]), (arr_24 [i_1] [i_1] [i_1] [i_1]))))) : 663760809937193885)) : var_3));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    {
                        var_21 = (((((((16 >> (((arr_9 [i_10] [i_9] [i_8] [i_1]) - 330307063))))) ? 19868 : (arr_32 [i_1] [i_8] [1] [i_8] [i_10] [i_10])))) ? (arr_31 [i_1] [i_8] [i_10 - 1]) : (min((((var_1 ? (arr_27 [i_8] [i_9] [i_10]) : (arr_3 [i_1] [i_1])))), ((var_3 ? var_3 : var_2)))));
                        var_22 = var_7;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_38 [i_11] = -663760809937193886;
        var_23 = (min(var_23, (((((min(((65535 ? var_9 : (arr_37 [i_11] [i_11]))), ((min(3914618602, (arr_36 [i_11]))))))) ? ((((((-1 ? (arr_35 [10] [10]) : (arr_36 [16])))) ? 19 : (arr_35 [i_11] [i_11])))) : ((33877 ? var_9 : 1725143521)))))));
        var_24 = (min(var_24, (((min((arr_37 [i_11] [i_11]), (((arr_37 [i_11] [0]) ? (arr_37 [i_11] [9]) : var_7)))) == (arr_37 [i_11] [i_11])))));
    }
    var_25 = ((var_4 + (((var_4 - var_1) + 663760809937193893))));
    var_26 = ((var_10 ? (max(var_6, var_10)) : var_4));
    #pragma endscop
}
