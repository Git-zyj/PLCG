/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_2, (var_3 <= 4))) == var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((1 ? -784393521 : ((193 ? 58720256 : -635191809))));
                arr_6 [i_0] [i_1] = var_6;
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    var_14 = (((((min(((-(arr_10 [i_4] [i_2] [i_2]))), ((var_9 ? (arr_10 [i_2] [i_2] [i_4]) : var_5)))) + 2147483647)) << (var_2 - 982753279)));
                    var_15 -= var_3;
                    var_16 = ((((((((3339728964 ? 245065595 : 50755))) ? 2416613788 : 245065569))) ? ((((arr_10 [i_2 - 2] [i_4 - 1] [13]) ^ var_7))) : ((784393535 | (arr_11 [i_3] [i_2 + 1])))));
                }
            }
        }
        var_17 = ((((max((arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 1]), 0))) * (var_8 & 65524)));
        arr_13 [i_2 - 2] [i_2 + 1] = (max((((var_8 / ((96 ? var_5 : var_6))))), (((arr_10 [1] [i_2 - 2] [i_2 - 2]) ? 3339728947 : (arr_10 [i_2] [i_2 - 1] [i_2 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_18 = (min(var_18, (((((min(var_2, (arr_11 [i_5 + 1] [i_5 - 1])))) ? (((arr_11 [i_5 - 1] [i_6]) ? var_11 : (arr_11 [i_5 + 1] [i_6]))) : (((arr_11 [i_5] [i_5 + 1]) ? (arr_11 [i_5 + 1] [i_6]) : 242)))))));
                var_19 = (min(var_19, (min((((arr_9 [i_6]) ? (arr_9 [i_6]) : 11)), (((((arr_1 [i_5] [i_6]) + var_5)) / var_9))))));
                arr_18 [i_5] [i_5] = (-999211766 <= 255);
                var_20 = (min(var_20, (((min(var_3, (arr_11 [i_5 - 1] [i_5 - 1]))) << ((((((min(var_0, var_10))) ? ((min(var_5, 132))) : (arr_9 [i_6]))) - 112))))));
            }
        }
    }
    #pragma endscop
}
