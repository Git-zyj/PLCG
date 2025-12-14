/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] &= var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            var_15 += 1925629686;
                            var_16 = (max(var_16, var_11));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_17 += (((((~(arr_13 [i_0] [i_1] [i_2] [i_5] [i_2 - 2] [i_2 + 2])))) ? (~var_8) : (arr_13 [i_0] [6] [i_2] [i_3] [i_2 - 1] [i_2 - 2])));
                            var_18 = (((arr_9 [i_0] [i_5]) ? (arr_12 [i_0] [i_0] [i_1] [i_0] [14] [i_1]) : (2369337609 / var_10)));
                            arr_19 [i_5] [i_5] [i_5] [i_0] = (min(-8962, 128));
                            var_19 = ((1 <= ((((max((arr_2 [i_1]), (arr_16 [6] [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]))) >= ((((arr_8 [i_1] [i_5]) << 12))))))));
                        }
                        arr_20 [4] [0] [i_0] [i_3] [6] [i_3] = ((!(!var_6)));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_20 = (max(var_20, 4029661860678002589));
        arr_23 [i_6] = var_2;
        var_21 = ((!(!2369337609)));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_22 = (max(var_22, (~0)));
        arr_26 [i_7 + 1] = (max(((0 ? (arr_22 [i_7] [i_7]) : var_0)), (((!(18446744073709551615 & 15551407627910914843))))));
        var_23 = 31411;
    }
    var_24 = (min(var_9, ((-var_2 ? ((var_13 ? 3580 : var_9)) : var_10))));
    var_25 = (((-(!var_0))));
    var_26 = (~var_1);
    #pragma endscop
}
