/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_3 ? var_2 : var_8)) >= var_2));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 1] [i_1] [i_0] = (((((arr_9 [i_0] [14] [i_2] [3]) << ((((var_4 ? (arr_6 [i_0] [i_0] [i_2]) : (arr_9 [7] [7] [i_2] [17]))) - 190)))) << (var_7 - 3705573920476310782)));
                    var_11 = (min(var_11, var_5));
                    var_12 = (((min(((((arr_4 [i_0] [i_2 - 2]) ? (arr_1 [i_0]) : (arr_8 [i_0])))), var_5)) / (((arr_4 [i_0 + 2] [i_2 - 3]) ? var_7 : (var_0 & var_2)))));
                    arr_11 [0] [0] &= var_8;
                }
            }
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_13 = (max(var_8, ((var_9 | (~var_4)))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            arr_24 [i_0] [i_3] [i_4] [i_0] [1] = (((arr_15 [i_0 + 2]) ? (((arr_15 [i_0 + 2]) ? (arr_15 [i_0 + 2]) : var_7)) : (arr_15 [i_0 + 2])));
                            arr_25 [i_0] [13] [i_0] [i_5] [i_6] = ((((((arr_23 [i_5] [i_3] [i_6 + 2] [i_5]) ? var_5 : var_4))) ? (arr_17 [i_0]) : var_7));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_14 = (((1 ? 18446744073709551615 : 65518)) << (arr_3 [i_0]));
                            var_15 ^= ((((((arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3]) / (arr_17 [i_4])))) > (((((-(arr_17 [i_4])))) + (arr_19 [i_0] [i_0] [i_0] [i_4] [i_7])))));
                            var_16 = (max((((var_0 == (arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_0] [i_4 + 1])))), (arr_14 [i_4 + 1] [i_4 - 1] [i_4] [i_0])));
                            var_17 = ((((((arr_13 [i_3] [i_0]) ? ((var_1 ? var_6 : (arr_19 [i_5] [i_3] [i_4] [i_0] [i_7]))) : (arr_4 [i_4 - 1] [i_7])))) ? (arr_23 [i_5] [13] [i_4 - 1] [i_5]) : (((var_1 ? var_2 : (arr_7 [i_3] [i_7]))))));
                            arr_28 [i_5] [i_3] [i_0] [i_5] [i_3] [i_0] [8] = ((((var_3 ? (arr_15 [i_0 - 1]) : (arr_15 [i_0 - 1])))) ? var_1 : ((((arr_15 [i_0 + 1]) - var_6))));
                        }
                        var_18 = ((((((((239 ? 8695610641647826718 : -2147483646))) ? var_4 : var_7))) ? (((((16 ? 0 : 1)) > -var_1))) : (arr_23 [i_5] [i_0] [i_0] [i_0])));
                        var_19 = (max((((arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_4 + 2]) ? var_4 : (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_4 + 1]))), (((255 ? 24 : 10705)))));
                        arr_29 [i_5] [i_0] [i_0] [i_0] = ((0 ? 0 : 3920417465641925057));
                    }
                }
            }
        }
    }
    #pragma endscop
}
