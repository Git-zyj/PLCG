/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 += ((106 ? 1 : 4386475349245454604));
        arr_2 [i_0] = ((((max((arr_0 [i_0] [i_0]), -1438682009))) ? 84 : (arr_0 [i_0] [i_0])));
    }
    var_18 = (max(var_18, 112));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (arr_0 [i_1] [i_1]);
        var_19 = ((-(max(((var_3 ? (arr_1 [i_1]) : (arr_4 [i_1]))), (-106 >= 165)))));
        arr_6 [i_1] [i_1] = (min((arr_0 [i_1] [i_1]), (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_13 [6] [i_3] &= 1461594345;
            var_20 = 2342133110;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_21 *= ((((1438681994 >= (arr_14 [i_2 + 2] [11])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    {
                        var_22 = (((arr_16 [i_2 - 1] [i_4] [8] [i_6]) / var_9));
                        var_23 *= (((arr_10 [i_5]) >= (arr_15 [i_4] [i_5])));
                        arr_21 [i_5] [4] [i_2 + 3] [i_2] &= (arr_16 [i_6 - 2] [i_4] [i_5] [i_6]);
                        var_24 = (arr_1 [i_6 - 1]);
                    }
                }
            }
        }
        var_25 = (((var_6 * (arr_14 [i_2] [i_2]))) * (arr_15 [i_2 + 3] [i_2]));
        var_26 = (max(var_26, var_4));
        arr_22 [i_2] = ((18446744073709551615 | (var_5 | -1438681991)));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_27 = (max(var_27, var_1));
        arr_25 [i_7] [i_7] = (arr_14 [i_7 + 1] [i_7]);
        var_28 = (((max((arr_1 [i_7 - 1]), ((var_1 * (arr_9 [i_7] [i_7]))))) & (arr_18 [i_7 - 1] [i_7] [i_7])));
    }
    #pragma endscop
}
