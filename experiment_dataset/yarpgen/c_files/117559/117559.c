/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (((!((min((arr_3 [i_0]), (arr_5 [i_3] [i_2] [i_0])))))));
                        var_17 = (((!-7261) < 1239517899));
                    }
                    var_18 = (((((arr_2 [i_2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0]))) * ((461755880 ? (arr_2 [i_0 + 1]) : 424244126))));
                }
            }
        }
    }
    var_19 = var_7;

    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_20 = (min((86 * -7264), 8484755342667475561));
                        var_21 = 1;
                    }
                }
            }
            var_22 = ((!-8292) ? (arr_3 [i_4]) : (((arr_4 [i_4 + 2]) - (arr_5 [i_4] [i_4 - 1] [i_4 + 3]))));
            var_23 = var_5;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_24 = (((arr_25 [i_9 + 1] [i_10]) != ((-(arr_25 [i_4 + 3] [i_10])))));
                        var_25 = ((((7587554014276444341 ? (arr_20 [i_4] [i_4]) : (arr_7 [i_4] [i_10])))));
                    }
                }
            }
            arr_31 [i_4] = (~-17194);
            var_26 = (((max(((var_5 ? 7512990132973216853 : (arr_5 [1] [1] [i_4]))), (((7280 ? (arr_13 [0]) : 989885684))))) & (((1239517922 ? (arr_4 [i_4]) : ((min(7272, var_1))))))));
        }
        var_27 = var_9;
        var_28 = -62;
        var_29 = (min(75, 3664860143299070374));
    }
    var_30 = ((((max(var_0, var_13))) << (var_4 - 1224815546)));
    #pragma endscop
}
