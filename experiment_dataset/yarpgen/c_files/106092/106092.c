/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (max((arr_3 [i_2]), (((arr_8 [i_0 + 2] [i_2 + 1] [i_0 - 1] [i_3] [i_3] [i_1]) & ((var_12 ? (arr_3 [i_3]) : -9053286066826881005))))));
                        var_14 = ((max(7571853951082053956, (((-6339 ? 1 : 18730))))));
                        var_15 = (max(var_15, (((max(var_2, (arr_8 [i_2] [1] [9] [i_2] [i_2] [i_2 + 1])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_16 = var_1;
                    arr_15 [i_0] [i_4 + 2] [0] = ((((min((arr_3 [i_0 + 1]), (arr_9 [i_0 + 1] [i_0 + 3] [i_4 - 1] [i_4 + 1] [i_4 + 1])))) == ((((((-30615 ? 30632 : 1))) || ((min(32750, (arr_1 [i_0])))))))));
                    var_17 = ((!((!(((arr_1 [i_0]) != (arr_9 [i_0 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5])))))));
                    var_18 = (((((arr_3 [i_0 - 1]) > (arr_7 [i_0 + 3] [i_4] [i_0 + 3]))) ? 65523 : (((arr_6 [i_0 + 3] [i_4 + 1] [i_4] [i_4 + 1]) / (arr_6 [i_0 + 3] [i_4 + 1] [i_4] [i_4 + 2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 = (min((max((!var_2), (arr_0 [i_6 + 2]))), (arr_11 [i_6] [i_6 + 1])));
                    arr_21 [i_0] [i_0] [i_6] [i_0] = var_4;
                }
            }
        }
        var_20 = max(((min(var_13, (arr_13 [1] [1])))), (max(35008, 54039)));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_28 [i_8] = (((!6338) << (var_9 - 8178715939573301848)));
            var_21 = 255;
            arr_29 [i_8] = -17856;
        }
        var_22 = var_5;
        arr_30 [i_8] = ((18446744073709551615 || 0) ? (arr_25 [i_8] [i_8 + 1]) : (arr_24 [i_8 + 2] [i_8 + 2]));
        var_23 = -0;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_35 [i_10] = ((var_10 + (arr_26 [i_10] [i_10] [i_10])));
        var_24 = (min(var_24, var_11));
    }
    var_25 = ((((((!(((var_12 ? 7427845115650111025 : var_5))))))) | ((4821474980584724703 ? var_2 : var_13))));
    var_26 = (0 + -3010045148983361602);
    #pragma endscop
}
