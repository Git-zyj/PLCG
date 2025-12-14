/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) ? (min(15, (!13763360097270174082))) : (((~(arr_1 [i_0 + 2]))))));
        var_19 = (arr_1 [6]);
        arr_4 [i_0] [i_0] = ((+((((arr_2 [i_0 + 1]) <= (arr_3 [i_0 + 1]))))));
    }
    var_20 = (-((((max(626013887, var_0))) ? 26542 : (38983 + var_13))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (max(((-(arr_3 [i_1]))), (max((arr_3 [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = var_5;
                    var_21 = (max(var_21, (((min((max(38983, (arr_2 [i_1]))), (arr_13 [14] [i_2 - 1] [i_2 - 1])))))));
                }
            }
        }
        var_22 = (((arr_8 [i_1] [i_1]) - var_5));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_23 = (min(-1686595356, 17521));
                        var_24 = (max((arr_20 [i_6] [i_4] [i_1]), (min((arr_20 [3] [i_4] [i_4]), (arr_20 [2] [i_4] [i_5])))));
                    }
                }
            }
            arr_23 [i_4] [i_1] = var_12;
            var_25 = (min((min((arr_10 [i_4]), (min(var_1, -7391454146685058073)))), 1447179877));
            var_26 = (12 || 25);
            arr_24 [i_4] [i_4] = (arr_8 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_27 = arr_9 [i_7] [i_7];
            var_28 = ((4294967283 ? (arr_13 [i_1] [i_7] [i_7]) : (arr_11 [i_1] [i_1])));
            var_29 = var_5;
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            arr_34 [i_8] = (~286520701166085375);
            var_30 -= (4294967272 * 1596174173121931027);
            var_31 = ((((-6525696026761161521 ? var_4 : (min(var_3, 27115)))) > ((-(arr_2 [i_8])))));
        }
        var_32 = var_10;
    }
    #pragma endscop
}
