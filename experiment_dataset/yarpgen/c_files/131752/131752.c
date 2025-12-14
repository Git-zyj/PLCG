/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (var_13 / 22646);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [8] [i_0] [5] [i_0] [i_0] = ((-3234 != (arr_5 [i_0] [i_0])));
                        var_16 = var_12;
                        arr_11 [i_0] [i_0] [i_2] [i_2] = (arr_6 [i_0]);
                    }
                    var_17 = (~(arr_7 [18] [18] [i_0] [i_0]));
                    arr_12 [i_0] [i_2] [i_0] = (((arr_8 [i_0] [i_0] [i_0] [i_0] [20]) + (~var_12)));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = 538784139850055781;
            var_18 = var_13;
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_20 [i_4] [i_6 - 2] [i_6] = (arr_16 [i_4]);
            var_19 ^= 389822448;
        }
        var_20 = (((((-25396 % -20049) + 2147483647)) << (((((((arr_13 [i_4]) ? (arr_19 [i_4]) : (min(var_13, 38)))) + 1384974576)) - 27))));
    }
    var_21 = (min(var_1, 15));
    var_22 = (((((17179869183 | -11386) + 9223372036854775807)) >> ((max((0 != var_7), (var_1 || var_7))))));
    #pragma endscop
}
