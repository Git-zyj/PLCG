/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_18 && var_14) ? ((min(var_10, var_11))) : (var_12 * var_4)))) ? (-2147483632 || var_3) : var_10));
    var_21 = (((min(var_8, var_0)) ^ var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min(-var_17, 2818061709));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                var_22 = 1;
                                arr_14 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0] = arr_10 [3] [i_4] [i_4] [i_3];
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_23 ^= ((((!(arr_16 [6] [1] [5] [i_3] [i_3])))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(-var_13, ((((arr_5 [i_3] [i_5]) * 498066754)))));
                                arr_18 [i_0] [i_0] [1] [4] [5] [4] [i_0] = ((((-((var_17 ? var_15 : 1))))) ? 3796900541 : (-2147483647 - 1));
                                arr_19 [i_5] = (((((arr_7 [i_0] [i_2] [i_2] [i_5]) ? var_18 : var_2)) / 39));
                                var_24 -= -var_18;
                            }
                            arr_20 [i_2] [11] [i_2] [i_3] [i_3] [i_0] = (~498066754);
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_14, -6408));
    #pragma endscop
}
