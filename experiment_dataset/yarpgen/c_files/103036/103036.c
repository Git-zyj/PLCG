/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(var_11, ((min(5848, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (((1 ? (arr_8 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_2] [i_2 - 3]) : var_6)));
                            arr_9 [i_0] [i_1 - 2] [i_2 - 4] [i_3] = arr_7 [i_0];

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                                var_18 = (max(var_18, 5234));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                var_19 = (max(var_19, (arr_11 [i_2 - 1] [i_5 + 1])));
                                var_20 = (-2282556289540302087 == var_8);
                            }
                            for (int i_6 = 3; i_6 < 24;i_6 += 1)
                            {
                                var_21 = ((var_4 * (2282556289540302091 || 2282556289540302086)));
                                var_22 = (max(var_22, ((((!(arr_13 [i_0] [i_1 - 2])))))));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_0] = (((((var_3 ? (arr_17 [i_1 + 2] [i_2 - 2] [i_3] [i_3] [i_3]) : var_15))) ? (((max(56481, 7)))) : (min(var_12, ((2282556289540302077 ? (arr_7 [i_0]) : var_11))))));
                        }
                    }
                }
                var_23 = (arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]);
                var_24 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
