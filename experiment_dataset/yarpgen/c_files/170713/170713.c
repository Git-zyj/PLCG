/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 *= 7980209029301144387;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (min(var_17, var_14));
                        var_18 = (min(var_18, -8949044408339385694));
                        var_19 = (max((((arr_2 [i_1 + 1]) / (max(var_8, 1437244671)))), (((((max(var_0, 44))) ? (var_10 >= 0) : ((max(var_15, var_9))))))));
                        var_20 = (min((((!-1755681839) ? 46 : 106)), (((!var_2) ? (-1943467970 != -126) : -var_0))));
                        arr_10 [i_3] [i_1] [i_1] [18] = (i_1 % 2 == 0) ? (((38 != (((var_4 + 2147483647) << (((arr_4 [i_1] [i_1 + 1] [i_1]) - 1444216956))))))) : (((38 != (((var_4 + 2147483647) << (((((((arr_4 [i_1] [i_1 + 1] [i_1]) - 1444216956)) + 393177691)) - 29)))))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = (!11347);
                        arr_14 [i_4] [i_1] [i_1] [i_0] = var_1;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [i_2 + 1] [i_1] [i_1] [i_0] = max(15009, 1);
                        arr_18 [i_1] [i_1] = var_9;
                    }
                    arr_19 [i_1] = -17518;
                    var_21 ^= ((((!(arr_5 [i_2 - 1] [14] [14] [i_0]))) ? (((arr_3 [i_2 + 2] [i_1 + 1] [i_0]) ? var_9 : (max(1, -1311509052)))) : var_14));
                }
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            {
                var_23 = ((+((-(((arr_21 [i_7] [i_6]) - -1))))));
                arr_24 [i_7 + 2] = (((((arr_22 [i_7 + 2] [i_7 + 2] [i_7 + 3]) ? -var_7 : (max(-23416, 9094520818049296002)))) < (~-23428)));
                var_24 = (min(var_24, (((!(max((!var_15), 1)))))));
            }
        }
    }
    #pragma endscop
}
