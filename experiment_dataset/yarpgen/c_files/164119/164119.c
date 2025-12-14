/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (max((((((var_13 ? -9222222812565448106 : var_3)) != var_8))), var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(var_16, (((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_17 = -13;
        arr_2 [15] &= ((!(arr_1 [11])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] &= (arr_3 [i_0] [i_1] [i_1]);
            var_18 = (((arr_1 [i_0]) % ((2098402945 << (((arr_1 [i_1]) - 1685484908))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_2] [i_0] [i_0] = (((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [15] [15] [i_0]) : -10));
            var_19 = ((~(arr_7 [3] [14])));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 = (((arr_1 [9]) ? (arr_1 [i_0]) : 4294967295));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 = var_8;
                            var_22 = ((!(arr_12 [i_3 + 2] [i_3] [9] [i_4 + 1])));
                            var_23 *= 0;
                        }

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_22 [i_0] [i_3] [1] [6] [i_7] [i_3 + 2] [i_7] = (!var_12);
                            var_24 &= (((~var_1) ? (arr_3 [i_4] [i_3 - 1] [i_3]) : (arr_7 [i_4] [0])));
                            var_25 &= (arr_9 [i_4]);
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_7] = var_8;
                            var_26 = (((arr_12 [i_0] [i_3] [i_4 - 4] [i_5]) ? (arr_6 [i_3 + 3] [i_3 + 2] [i_4 - 2]) : var_0));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (arr_12 [15] [i_4] [i_3] [i_0]);
                            var_28 = (min(var_28, var_7));
                        }
                    }
                }
            }
            var_29 *= arr_18 [i_3] [i_3] [i_0];
        }
    }
    #pragma endscop
}
