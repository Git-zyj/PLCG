/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            var_13 = ((var_9 <= (arr_2 [i_1])));
                            var_14 = ((-(arr_8 [i_2] [i_3] [i_3] [i_3 - 1] [i_4] [i_4])));
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4] [i_1] = (((arr_8 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_3]) & var_4));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_5] [i_5] [i_5] = var_2;
                            arr_18 [i_5] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0] = var_5;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_15 *= (arr_6 [i_0] [i_0] [i_0] [i_0]);
                            var_16 += 10390486418786429084;
                        }
                        arr_22 [i_0] [i_1] = (((((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3 + 2])))) ? (var_3 || var_6) : ((var_5 ? var_9 : (arr_11 [i_0] [i_2] [i_2] [i_3] [i_1] [i_3 - 1])))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = ((var_7 * (((arr_10 [i_0] [i_3] [i_2] [i_3] [i_2] [i_3] [i_1]) / var_8))));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_7] [i_0] [i_0] |= (((arr_26 [i_7] [i_1] [i_1] [i_1] [i_1]) | (arr_15 [i_7] [i_7] [i_7 - 2] [i_7 + 2] [i_7] [i_7 - 2] [i_7])));
                            var_17 = (var_3 & var_1);
                        }
                    }
                    arr_28 [i_0] [i_1] [22] [i_1] |= ((~(-var_3 & 1)));
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = (min((((min(var_0, var_4)))), (min(var_11, var_2))));
    #pragma endscop
}
