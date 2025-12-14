/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (~-3701974472826656842)));
                    var_16 *= (((((!((max(178, var_4)))))) % 184));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 *= ((!(!799011153)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_18 -= (((((1 ? 1 : 445320024))) ? (((-9223372036854775807 - 1) + 7934)) : ((((arr_11 [i_3] [i_3] [i_3]) * var_2)))));
                var_19 |= ((var_1 ? (arr_7 [i_3]) : (0 + var_8)));
                arr_17 [i_3] [i_5] = ((((((arr_7 [i_4]) - var_9))) >= var_11));
            }
            var_20 ^= var_5;
            arr_18 [i_3] [i_4] [i_3] = (((arr_8 [i_3]) ? (arr_7 [i_3]) : (arr_9 [i_3] [i_4])));
            arr_19 [i_3] = (var_9 && var_14);
            var_21 &= ((((1706163923 ? 170 : 1637983502)) >> (-1 + 9)));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_6] = arr_11 [i_8] [i_8] [i_7];
                            arr_31 [i_7] |= var_1;
                        }
                    }
                }
            }
            var_22 = (min(var_22, (10 & 1)));
            arr_32 [i_6] = (((((arr_28 [i_3] [i_3] [i_6] [i_3] [i_3]) ? (arr_14 [i_3] [i_3] [i_3]) : 1569662848)) + var_5));
        }
        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            var_23 &= ((var_4 & (1 & 11514)));
            var_24 ^= ((1 ? var_4 : (!var_4)));
        }
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            var_25 = ((var_14 ? (!var_0) : var_9));
            var_26 = ((11507 ? 32501 : 1294020391));
        }
        arr_39 [i_3] = -184;
    }
    #pragma endscop
}
