/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (arr_2 [i_0] [4]);
        var_20 -= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [17]) : ((((!(arr_0 [i_0] [13])))))));
        arr_3 [i_0] [14] = var_3;
        var_21 = (((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])));
        var_22 = ((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_3);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (arr_2 [i_1] [i_1]);
        var_23 = 3583;
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [10] [i_4] = (arr_4 [i_4]);
                    var_24 = ((((var_11 << (((-2752177273227821819 + 2752177273227821872) - 53))))) ? (((~((min((arr_5 [i_2]), (arr_11 [i_2] [i_4] [i_2] [i_4]))))))) : (arr_0 [i_2] [21]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_2] = 9843;
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] = ((!(arr_14 [i_2] [i_2] [i_2] [i_2 - 1])));
                                var_25 ^= var_16;
                                var_26 ^= ((-((-((var_0 ? var_2 : var_6))))));
                            }
                        }
                    }
                    var_27 = (((arr_12 [i_2] [i_2] [i_2] [i_3]) * (min((arr_10 [i_2]), ((max((arr_4 [i_3]), 3591)))))));
                }
            }
        }
    }
    var_28 = (min(var_28, -var_2));
    #pragma endscop
}
