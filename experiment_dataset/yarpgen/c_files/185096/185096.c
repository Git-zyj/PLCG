/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_15 | var_12) ? (15885 | -1536508638) : (var_14 <= var_10)))) ? (((var_2 ^ var_16) ? ((0 ? 1 : var_16)) : (var_2 == var_11))) : var_11));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = var_5;
        var_19 = (1 & 1928);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 ^= (arr_0 [i_1]);
        arr_7 [i_1] = ((~(((!((max(var_14, (arr_0 [i_1])))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_21 = (+-5);

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_18 [i_2] = ((((-(var_6 * var_12))) == (arr_17 [i_2 - 2] [i_3 - 1] [i_4] [i_4])));
                    arr_19 [i_2] [i_2] [i_2] [1] = ((~(((arr_0 [i_2 - 1]) ? var_9 : (arr_0 [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (min(((((arr_9 [i_2 - 1]) ? var_9 : var_10))), (var_13 / -74)));
                                arr_24 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [3] [11] = (((~-var_3) != (!1)));
                                arr_25 [i_6] [i_3] [i_4] [i_5] [i_4] |= var_3;
                                arr_26 [i_6] [i_5] [i_4] [i_3 + 1] [i_2] [i_2] = ((-((((arr_16 [i_2 - 1] [i_2 - 1] [i_4]) != var_11)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, 8628988473795877675));
                                var_24 = var_15;
                            }
                        }
                    }
                    arr_31 [i_4] [i_3] [i_2] = (((47464 ? 3885377347241213132 : 2587235299)));
                }
            }
        }
    }
    #pragma endscop
}
