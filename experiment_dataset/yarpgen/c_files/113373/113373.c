/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [2]);

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = -653728295;
                var_14 = (arr_8 [i_0]);
                var_15 = ((-(((~(arr_2 [17] [i_0]))))));
                var_16 = ((653728291 < (arr_7 [i_1 + 1] [5] [i_1 + 1] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_3] [i_0] [i_2] = (((arr_10 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_1 - 1]) ? (((arr_8 [i_0]) ? ((max((arr_1 [i_2] [5]), var_11))) : (arr_8 [i_0]))) : (arr_12 [i_0])));
                            var_17 += ((min((arr_8 [i_4]), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_5] [i_6] = ((-653728284 + (max(1, 653728302))));
                        arr_22 [i_1] [i_1] &= arr_19 [i_0] [i_1] [i_5] [i_1] [i_0];
                        arr_23 [i_0] [i_1 - 1] [i_1] [i_6] [i_1] = (min(-678127668, var_11));
                    }
                }
            }
            arr_24 [i_0] [i_0] = (arr_0 [i_1] [i_1 + 1]);
            arr_25 [i_0] = -653728295;
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_18 *= (arr_26 [i_7]);
        arr_28 [i_7] [i_7] = (arr_26 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_19 = ((653728311 | (var_10 | 11564)));
                    arr_34 [i_7] [i_8] [i_7] [1] = ((((arr_27 [i_9]) < (arr_29 [i_7] [19]))));
                }
            }
        }
        var_20 ^= 27720;
        var_21 = (min(var_21, (arr_33 [i_7] [17])));
    }
    var_22 = 653728300;
    #pragma endscop
}
