/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 -= (1109061988 - 2147483646);

        /* vectorizable */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_2] [5] [i_0] = (((((arr_0 [i_0] [i_0]) ? var_7 : var_9)) != var_10));

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_20 = (min(var_20, var_15));
                            var_21 = (~-18220);
                            var_22 -= ((~(var_13 ^ var_8)));
                            var_23 = var_16;
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] = ((~((~(arr_1 [i_2])))));
                        }
                        arr_15 [1] [1] [i_2] [i_3] = (~var_15);
                    }
                }
            }
            arr_16 [6] [4] = var_14;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_24 = ((4236193842 ? 2147483646 : 1109061992));
                        var_25 ^= ((-(((var_15 || (arr_11 [i_5] [i_0] [i_0]))))));
                        arr_22 [i_0] [8] [i_5] [i_6] &= 32754;
                        var_26 += (((arr_20 [1] [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_0]) ? (~var_17) : (-1109061969 && var_9)));
                    }
                }
            }
        }
        var_27 = (min(var_27, (1 <= 0)));
    }
    var_28 += var_11;
    #pragma endscop
}
