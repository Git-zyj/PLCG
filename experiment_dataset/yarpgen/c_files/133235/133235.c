/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_10 = ((var_4 >= (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_11 = var_6;
                    var_12 += ((-((-((var_3 ? (arr_3 [11]) : (arr_8 [i_1] [i_1] [i_1] [i_3])))))));
                }
            }
        }
        var_13 = ((!(arr_1 [i_1] [14])));
        var_14 = ((var_6 ^ ((((max((arr_3 [i_1]), 1927859269))) ? var_7 : (((min(var_5, (-32767 - 1)))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_15 = (((((min(var_6, var_7))) ? 43421 : (arr_0 [i_5]))) % var_3);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_6 + 2]);
                                var_17 += (arr_3 [10]);
                                var_18 |= ((+((min((arr_6 [5] [5] [i_7]), (!var_6))))));
                                arr_22 [i_1] [i_1] [i_1] [i_6 + 1] [i_1] &= ((+((min((arr_13 [i_4] [i_4]), 22126)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 0;
    #pragma endscop
}
