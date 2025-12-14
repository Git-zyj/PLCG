/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [1] [i_3] [i_4 - 2] = ((((max((arr_11 [i_4] [i_4 - 1] [12] [i_4 - 3] [i_4 + 1] [i_4]), (arr_11 [i_4] [4] [9] [i_4 - 3] [i_4 + 1] [0])))) ? ((var_4 ? var_4 : var_12)) : (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3] [8])));
                                var_13 = ((((((max(-87, -2888337951735320988))) ? (arr_9 [i_4 - 2] [i_4 - 1] [i_4 + 1]) : ((0 | (arr_11 [i_0] [i_1] [i_2] [4] [i_3] [14]))))) <= ((((!((max(var_5, var_3)))))))));
                                var_14 = (arr_9 [i_1] [i_1] [12]);
                            }
                        }
                    }
                    var_15 = (max(((((max((arr_6 [i_1] [i_2]), var_0))) ? 3172499922500498939 : (arr_11 [i_0] [i_1] [i_2] [i_0] [i_0] [2]))), (arr_11 [i_1] [0] [2] [i_1] [i_0] [0])));
                    arr_16 [i_0] [i_0] = max((((!(arr_14 [14] [6] [i_1] [14] [i_2])))), ((2442325918 ? (((-(arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0])))) : (((arr_12 [i_0] [i_0] [11] [i_0] [i_0] [11] [i_2]) ? var_5 : (arr_6 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_16 = -var_0;

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_17 = (min(var_17, ((((1852641400 | 23477) || (max((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5]))))))));
        arr_19 [i_5] [i_5] = ((var_11 ? 23477 : (((arr_17 [i_5]) ? (max((arr_18 [7] [7]), var_6)) : ((max(17, var_8)))))));
        arr_20 [i_5] = (((!4285842386) & (arr_17 [i_5])));
    }
    var_18 = (min(var_18, (((14304936298172815539 ? 23472 : (max(((0 ? var_6 : 0)), (((15537349864264092356 ? -18 : -23503))))))))));

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_19 += ((((((max(1426443631, -26746177136522291))) ? (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_8]) : var_1))) ? ((~(((arr_7 [10] [10]) << (((arr_24 [i_6]) - 124)))))) : var_10);
                    var_20 -= (((((((((arr_29 [i_8] [i_7] [1] [1]) % (arr_22 [i_6])))) ? (arr_18 [i_6] [i_7]) : (max((arr_5 [i_6]), var_0))))) ? ((((!(var_7 / var_3))))) : (arr_8 [i_6] [i_7] [i_8] [i_8])));
                }
            }
        }
        var_21 = (max(var_21, (((-(arr_4 [12] [13] [4]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_22 = (min(var_22, 242));
        var_23 ^= (1 || 1668226387834297382);
        var_24 = (((arr_31 [i_9]) ? var_3 : (arr_31 [i_9])));
        arr_34 [15] = var_9;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_37 [7] = ((122 >> (((((arr_14 [i_10] [i_10] [i_10] [0] [i_10]) ? var_6 : (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]))) - 17564273018942692562))));
        var_25 = max(var_10, (~var_4));
        arr_38 [i_10] = var_10;
        var_26 = (((max(1, 9))));
    }
    #pragma endscop
}
