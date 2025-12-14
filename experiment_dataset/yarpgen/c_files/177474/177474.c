/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (24596 || var_9);
        arr_5 [5] = 217;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((~var_7) ? (((!(arr_12 [i_0] [6] [i_2] [10])))) : (var_0 ^ 230))))));
                        var_19 = (((arr_1 [i_0] [4]) ? (arr_0 [i_0]) : (arr_11 [i_0 + 1] [i_1] [i_2 + 1] [i_1])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_20 = ((((((var_4 && var_9) ? 6670402643262296147 : (((min(86, (arr_0 [i_4])))))))) && ((max(6670402643262296138, (arr_12 [i_5] [i_5] [i_4] [i_4]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 |= (-8317640720800978572 / 23);
                            var_22 = (((((((~(arr_10 [i_4] [i_4] [i_6] [i_4]))) || (5422668051775404480 < 13152333750596770519))))));
                            var_23 = (((!var_7) >> (!-var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_24 |= (min(-12049158104501310218, ((((((arr_8 [i_5] [12] [i_9]) / 63428)) - ((-(arr_8 [i_4] [i_4] [i_9]))))))));
                            var_25 = (min(var_25, (arr_0 [i_5])));
                            var_26 = (arr_13 [i_4] [i_5] [i_4] [i_9] [i_9]);
                            var_27 = (((((arr_27 [i_4] [i_5] [i_8]) & ((7488 ? 463915981504193222 : 39)))) | (((((11821 & (arr_19 [i_4] [i_5])))) ^ ((6353960210740487626 ? 38 : 6670402643262296147))))));
                            arr_30 [i_4] [i_4] [i_8] [i_9] = ((((~(-1960218482289736890 | 8814309272232881068))) <= (arr_17 [i_8] [i_5] [i_4])));
                        }
                    }
                }
            }
        }
    }
    var_28 = var_0;
    #pragma endscop
}
