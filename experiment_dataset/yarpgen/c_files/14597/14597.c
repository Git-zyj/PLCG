/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = 5203441691815559390;
                            var_18 = (arr_7 [i_0] [i_0]);
                            var_19 = (min(var_19, (((((min(7360, 26))) && ((var_12 <= (arr_6 [i_0] [i_0] [i_0]))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = 27881;
                                var_21 = arr_3 [i_1] [i_3] [17];
                                var_22 *= var_14;
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                var_23 = (arr_11 [i_0] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_0]);
                                var_24 = 3241892360;
                                var_25 = (max(var_25, var_0));
                            }
                            var_26 &= (min((min((arr_10 [i_3] [i_3] [i_3] [i_2]), (arr_13 [i_0] [i_2] [i_0] [i_0] [i_0]))), (arr_10 [i_0] [12] [i_2] [i_2])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_27 = arr_18 [i_0] [i_0] [i_0];
                                var_28 = arr_13 [i_6 - 1] [i_0] [i_6 - 1] [i_6 - 1] [i_6 - 1];
                                var_29 ^= (min(((((arr_14 [i_1] [i_6 - 1] [i_8]) - (arr_14 [3] [i_7] [i_0])))), var_6));
                            }
                        }
                    }
                }
                var_30 &= (min((((-127 - 1) % -1)), (((16652 ? (arr_2 [i_1] [i_0] [i_0]) : 24267)))));
            }
        }
    }
    var_31 |= var_15;
    #pragma endscop
}
