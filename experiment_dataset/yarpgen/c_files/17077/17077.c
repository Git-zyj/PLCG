/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = var_7;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 *= ((((((arr_0 [i_0]) ^ (arr_4 [i_0] [i_0] [i_0])))) ? (((arr_2 [i_1] [i_1]) ? 2147483647 : (arr_2 [i_0] [i_1]))) : (arr_1 [i_0])));
            arr_5 [i_0] [i_0] = 0;

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                var_21 = (((arr_6 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_0] [i_1] [i_0]) : (arr_0 [i_0])));
                var_22 *= (var_6 || var_10);
                var_23 = (arr_6 [16] [i_2] [i_2 + 1]);
                arr_8 [i_0] [i_2] [i_0] [i_0] = ((!((((arr_7 [i_0] [1] [i_2]) & (arr_3 [i_0] [i_0]))))));
                arr_9 [i_0] [3] [i_2] [i_2] = (((((var_7 ? 0 : (arr_4 [i_0] [i_0] [8])))) ? -873563479 : (arr_7 [i_0] [11] [11])));
            }
            for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_24 = ((3971301456803485278 ? (!-7385092837063796097) : (1 + var_5)));
                            arr_18 [i_1] [i_1] [i_1] = 89;
                        }
                    }
                }
                var_25 = ((~(var_4 / var_5)));
            }
            for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
            {
                arr_21 [i_6] [i_6] [i_6] |= ((7896861328107145510 != ((114290459 ? (-9223372036854775807 - 1) : (-2147483647 - 1)))));
                arr_22 [i_0] [i_0] [i_0] [7] = 9244;
                var_26 = ((~(arr_15 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_6] [i_6])));
            }
            arr_23 [1] = ((var_18 == (arr_7 [i_0] [i_0] [i_0])));
        }
    }
    var_27 = var_6;
    #pragma endscop
}
