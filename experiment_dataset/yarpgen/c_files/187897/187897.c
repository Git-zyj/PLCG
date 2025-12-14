/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_5, ((max(var_8, 255)))))) ? 16 : (((17 << 16) ? var_2 : ((3121862982 ? 1 : 534212013))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, -19142));
        arr_2 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [20] [i_1] = (17064425083103077796 <= 9223372036854775789);
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_14 = ((19139 ? ((((!(((arr_6 [i_1]) && 1)))))) : (arr_13 [1] [i_2] [1] [i_3 + 3] [i_4] [i_2])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = arr_5 [i_1];
                        var_15 = ((min((1382318990606473806 > 1700032221), var_8)));
                        arr_16 [i_1] [3] [i_3] [i_4 - 3] [i_1] [i_3 - 2] = (min((min((var_6 == 1352150863), (max(17064425083103077813, 18446744073709551610)))), (!34)));
                    }
                }
            }
            var_16 = (max(((!(arr_3 [i_1]))), (18446744073709551591 >= -6839879224581407436)));
            var_17 = -123;
            arr_17 [19] [19] [i_1] = (((-8286993955130660895 == 653) ? -var_3 : (((min(4294967295, 1))))));
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_18 += var_2;
            arr_21 [i_5] [i_1] [i_5] = (min(((max((min(var_0, (arr_11 [i_1] [i_5]))), 19511))), (max(((18446744073709551604 ? 239 : (arr_18 [i_5]))), -64883))));
            var_19 = -9223372036854775807;
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_20 = 4294967295;
        var_21 = (arr_7 [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_30 [i_6] = ((!((min(17064425083103077804, -124)))));
                    var_22 = ((!(arr_7 [i_6] [i_7])));
                }
            }
        }
        var_23 = (((~((min(208, 15104))))));
    }
    #pragma endscop
}
