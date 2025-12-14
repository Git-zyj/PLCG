/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (-88 > 43246);
                arr_6 [i_0] [i_1] [i_1] = (((var_12 | (arr_0 [i_1 - 1] [i_1 + 1]))));
            }
        }
    }
    var_14 = (max(var_4, ((var_0 ? (var_13 ^ -1823072874) : 43246))));
    var_15 = (max(var_15, (((18328180050707281596 / ((((var_13 == 1823072873) ? var_4 : (var_6 + 150)))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = (((arr_8 [i_3]) | ((11461401541411964775 ? 118564023002270019 : -30625))));
                    var_16 = (max(var_16, (((var_0 + (arr_13 [i_4] [i_2] [i_4]))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_17 = ((-var_3 * ((~((118564023002270020 >> (118564023002270005 - 118564023002269969)))))));
        arr_18 [i_5] = ((-var_5 ? (((arr_2 [i_5 + 3]) ? (arr_2 [i_5 + 3]) : var_6)) : (((((((arr_12 [i_5] [i_5] [i_5]) + 2147483647)) << (((-5276829552967166998 + 5276829552967167005) - 7)))) / -977867595))));
        arr_19 [i_5] = (min(30624, (arr_15 [i_5 - 1] [i_5])));
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        var_18 = (arr_12 [i_6] [i_6] [i_6]);
        var_19 = (min(var_19, (!var_7)));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 &= 30625;
                    arr_33 [i_9] [i_9] [i_9] = ((((((((!(arr_24 [5]))))) - (18328180050707281613 | -25053))) > ((min(-1725209369, 367913547)))));
                    arr_34 [i_9] [i_9] [i_9] [i_9] = 1605923757;
                }
            }
        }
        arr_35 [i_7] [i_7] = -18328180050707281622;
    }
    #pragma endscop
}
