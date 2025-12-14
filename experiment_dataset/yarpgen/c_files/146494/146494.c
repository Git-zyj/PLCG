/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 >= (var_7 && 1661091346)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (max(var_12, var_10));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_0 [i_0] [i_0])));
            var_14 = (((arr_1 [i_1]) - 1545729658089639534));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 -= var_1;
            var_16 -= (-13680 && 1288869253);
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_17 -= (((((arr_4 [i_0] [i_3] [i_0]) ^ 14748610180424514968))));
            arr_10 [i_0] [i_0] [i_3] = (70 + 1771733789);
            var_18 ^= ((((((arr_8 [i_0]) / (var_9 % 20731)))) && (2063948416 % var_3)));
        }
        arr_11 [i_0] = (1 ^ var_2);
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_19 *= (((((arr_12 [i_4]) + (arr_12 [i_4])))));
        arr_14 [i_4] [1] = (((var_9 / 30544) * (((((var_10 | var_9) >= (1 / 1)))))));
        var_20 = (max(var_20, ((((arr_13 [i_4] [i_4]) / var_7)))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_21 = (((var_9 || (((arr_17 [12] [i_5] [i_5]) > 0)))));
                    arr_19 [i_4] [i_5] [i_5] [1] = (53847 ^ (var_2 / 10375349196814740965));
                    var_22 *= ((((var_0 >= var_7) / var_10)) % (var_0 | var_0));
                    arr_20 [i_4] [i_5] [i_5] [16] &= (((((arr_15 [i_4] [i_5] [i_6]) - 2840268002683254933)) * (((-70 + (arr_16 [i_6] [i_4] [i_4]))))));
                    var_23 = (max(var_23, (((((var_6 - var_1) / (-1771733796 ^ var_10)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((((arr_16 [i_7] [15] [i_7]) >= 12)));
        var_24 = (4205079521404973596 & var_9);
    }
    #pragma endscop
}
