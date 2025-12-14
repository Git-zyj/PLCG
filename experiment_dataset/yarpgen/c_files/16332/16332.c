/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0] [i_0]);
                var_18 = 538675369656249792;
                var_19 -= 1;
            }
        }
    }
    var_20 = (max(-3197, var_9));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_21 -= (min((916413761 >= 3197), -3197));
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_6] = (-3207 | var_16);
                                var_22 = (((((((min(var_16, (arr_15 [i_2] [i_6] [i_2 - 1] [16] [i_3])))) ? ((32766 ? var_1 : 3204)) : var_2))) ? -var_5 : ((-3185 * (((max(var_7, -3185))))))));
                            }
                        }
                    }
                    var_23 = min((arr_15 [i_2] [i_2 - 1] [i_2] [i_4] [i_4 - 2]), 16256);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_25 [i_2] [i_7] [i_2 - 1] |= (arr_17 [1] [i_3]);
                                arr_26 [i_2] [i_2] [1] [i_4 + 3] [i_7] [i_8] = ((~((+((min((arr_22 [i_2] [i_3] [i_4] [i_3] [1]), 114)))))));
                            }
                        }
                    }
                }
                arr_27 [i_2] [i_3] [i_2 - 1] = ((var_13 ^ (arr_22 [i_2] [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1])));
                var_24 = (((arr_20 [i_2] [i_3] [i_3]) & (((((max(var_5, var_3))) ^ -16239)))));
                var_25 = (min(6784729407151906872, (arr_14 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])));
                var_26 = (arr_15 [i_2] [i_3] [i_3] [i_2] [i_2]);
            }
        }
    }
    var_27 = (var_9 >= var_8);
    #pragma endscop
}
