/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((1120188244 > 2), (min(0, 12))))) ? -1 : var_14);
    var_17 = (min(var_17, ((min(((((max(var_0, var_7))) ? (var_6 - var_4) : var_0)), (min(((var_12 >> (var_15 + 527064936))), (!var_8))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (~123);
        var_19 = ((min(165, var_0)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_20 = (min(((+(max((arr_2 [i_2]), (arr_0 [i_1 - 1]))))), (min(var_2, (arr_6 [i_2 + 1])))));
            arr_7 [i_1] [i_1] [i_2 + 1] = (((arr_3 [i_1] [i_2 + 1]) ? (arr_2 [i_1 - 1]) : (~var_2)));
            arr_8 [i_1] = (min(((max(26087, var_14))), -983383760));
            var_21 = (min((min(18446744073709551598, (arr_2 [i_1 - 1]))), (((var_3 + (arr_2 [i_1 - 1]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_3] [i_3] = (~var_5);
            var_22 = (!var_8);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_23 = (!-67266935);
                        var_24 = (((arr_20 [i_1] [i_4] [i_1] [i_5 + 2] [i_5 + 2]) ? var_5 : (arr_3 [i_1] [i_4])));
                    }
                }
            }
            var_25 = var_11;
            arr_22 [i_1] [i_1] [i_1] = (arr_14 [i_1] [i_1 - 1]);
            arr_23 [11] [i_4] [i_1] = var_6;
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_26 [i_1] = (min(21749, 5612));
            var_26 = (min(var_26, ((min(((max(var_2, -31889))), (((((-(arr_9 [i_1 - 1] [1] [6])))) ? (1526942982 / var_0) : ((max(8128, -79))))))))));
        }
        arr_27 [i_1] = ((((min((max(var_7, 1073741824)), ((max(1073741809, var_15)))))) || var_3));
        arr_28 [i_1] = var_7;
        var_27 = ((!((((arr_25 [i_1 - 1]) & var_13)))));
        var_28 = (((min(-31899, (max(-21739, 1120188250)))) != (min((~1695), (arr_19 [i_1] [i_1])))));
    }
    #pragma endscop
}
