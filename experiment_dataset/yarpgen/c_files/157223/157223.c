/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((((0 ? var_10 : -9223372036854775796))) ? 4294967295 : ((((108 && (!var_1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (54975 == var_7)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((1 ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : 65024)))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = 121;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 = ((var_5 ? (arr_5 [i_4] [i_3] [i_2] [i_0]) : 511));
                            var_18 = (min(var_18, var_8));
                            arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((var_6 == ((var_8 ? var_10 : 1))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 = (max(var_19, (arr_14 [i_2] [i_2] [i_0] [i_3] [i_0])));
                            var_20 = (min(var_20, (arr_14 [i_5] [1] [i_2] [i_1] [i_0])));
                            arr_16 [i_0] [i_2] [i_2] = (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]);
                            var_21 += (((arr_13 [i_3] [i_1] [i_3] [i_3] [i_5]) ? var_2 : (arr_13 [i_3] [i_3] [i_2] [i_3] [i_5])));
                            var_22 -= (((((-906435118 ? 512 : (arr_15 [i_0] [i_0] [i_2] [i_3])))) ? (arr_3 [i_0]) : 10822));
                        }
                        var_23 = (min(var_23, var_2));
                    }
                    arr_17 [1] [i_2] [7] = ((0 ? (arr_0 [i_0] [i_0]) : var_2));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_21 [14] |= (max(((((min(1577057654, 810074034))) ^ ((156 ? 33 : var_0)))), (11330 / 99)));
        arr_22 [i_6] = var_2;
    }
    #pragma endscop
}
