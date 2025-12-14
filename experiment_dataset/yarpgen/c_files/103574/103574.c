/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = (((max((arr_1 [i_0 + 1]), 13217))) ? (((arr_1 [i_0 - 1]) * var_6)) : (1202059341 | 2632337739));
        var_15 = (((3 || (arr_1 [i_0]))) ? 3446053821 : 848913458);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((~(arr_4 [i_1] [i_1]))) - (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));
        arr_7 [i_1] = ((6265 ? var_8 : (max(var_7, 12))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = var_2;
        arr_11 [i_2] = (arr_3 [i_2] [10]);
    }
    var_16 = min((var_9 & 10), 36);

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 = (min(var_17, var_1));
            arr_18 [i_3] = var_8;
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_18 = (min(var_18, 1202059320));
                        arr_25 [i_5] [i_5] [i_6 + 1] [i_7] = min(4173102183, 112);
                        var_19 = (max(var_19, var_5));
                    }
                }
            }
            arr_26 [i_5] [i_5] = var_5;
        }
        var_20 ^= 3446053849;
    }
    var_21 = (var_2 % 52534);
    #pragma endscop
}
