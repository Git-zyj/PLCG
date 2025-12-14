/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2047;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = var_5;
        var_16 = (min(-2063, -1));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [15] [i_3 - 1] [i_3] [i_3] [i_3] = ((var_6 ? var_4 : var_8));
                                var_17 = (max(var_17, (max((-2058 > 121), ((max(807072019, 19)))))));
                            }
                        }
                    }
                    var_18 -= (-(max(((var_13 ? (arr_2 [10] [10]) : var_7)), var_1)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 = ((((arr_7 [i_6] [i_6 + 1] [i_6 + 1]) << (((0 ^ 26) - 16)))));
                    var_20 = 9277;
                    arr_23 [i_1] [i_1] [i_1] [i_1] = (max((~9277), ((3 ? (((var_5 ? var_12 : -45))) : (max(var_7, var_12))))));
                }
            }
        }
        arr_24 [i_1] = (((max(var_4, (arr_20 [i_1])))));
        arr_25 [i_1] = 3487895277;
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_21 ^= ((max(var_8, (arr_21 [i_8] [i_8 - 1] [i_8 + 2] [i_8]))));
        arr_28 [i_8] = (max(((((-29 + 219) > (~var_2)))), (arr_10 [i_8] [i_8])));
    }
    #pragma endscop
}
