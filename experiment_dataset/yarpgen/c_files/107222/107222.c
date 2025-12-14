/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] = min((arr_2 [i_0 + 2]), (arr_2 [i_0]));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_5 [i_0 - 1] [i_1] [i_1]) - (((1 >= (arr_1 [i_0 + 2]))))));
            arr_7 [i_0] [i_1] = ((var_8 > (arr_2 [i_0 + 2])));
            arr_8 [i_1] [i_1] [i_1] = (min(1, (arr_4 [i_0 + 1] [i_0 + 1])));
            var_14 = (max(var_14, (arr_1 [i_0])));
        }
        arr_9 [i_0 - 1] = (min((arr_5 [i_0] [i_0 + 2] [i_0 - 1]), 1));
        arr_10 [i_0 + 1] = (((((((1 ? (arr_1 [i_0 + 2]) : var_1)) + (~var_5)))) ? (((min((!var_4), 4064)))) : (min((arr_4 [i_0] [i_0 - 1]), (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [6] [i_3] [i_2] [6] &= ((((626564886 ? (arr_14 [8] [i_3 - 3] [i_3 + 1] [i_3]) : var_3)) | (((((var_3 ? var_1 : -1)) & ((min(0, 85))))))));
                    arr_16 [i_0 + 1] [i_0] [i_2] = 58366;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((((var_1 << (2524151964 - 2524151957)))) ? ((((min(var_11, var_6))) ? (min(var_0, var_10)) : (((1 ? 1213198644 : 255))))) : (((4294967265 / (((~(arr_5 [i_0] [i_3] [i_4]))))))))))));
                                arr_23 [i_0 + 2] [i_2] [i_2] = (((arr_20 [i_0] [i_2]) - (min(12, (min((arr_4 [i_0] [i_0]), 3458426403))))));
                                var_16 = ((((((((arr_22 [i_4] [i_3] [i_3] [i_2] [i_2] [i_4] [i_4]) ? (arr_19 [i_5] [i_4] [i_3 - 1]) : (arr_11 [i_2] [i_4])))) ? ((~(arr_19 [i_0] [i_3 - 1] [i_5]))) : var_3)) >= (arr_21 [i_5])));
                                var_17 = (((1 || -4065) - (((((arr_13 [i_0] [i_2]) << (8378956866866897472 - 8378956866866897471)))))));
                                var_18 *= var_5;
                            }
                        }
                    }
                    arr_24 [i_0 - 1] [i_2] [i_2] = (arr_4 [i_0] [i_3]);
                }
            }
        }
    }
    var_19 = (var_8 >> (var_8 - 1407681095));
    #pragma endscop
}
