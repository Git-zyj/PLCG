/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = min((!var_15), ((!(arr_1 [i_0 - 1]))));
        arr_3 [1] [1] &= var_14;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (var_6 != 1);
        var_20 *= min(1, 0);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((!(((var_7 ? var_5 : 1)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = (1 - 1);
            arr_11 [i_2] [i_2] [i_3] = ((-(((min(var_10, 1))))));
            var_22 = (!((((arr_7 [i_2]) & (1 ^ 0)))));
            var_23 -= (arr_5 [i_2]);
            arr_12 [i_2] = max(0, 1);
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_24 = max(1, 1);
            arr_15 [i_2] [i_2] = (~-1);
        }
        var_25 = ((~(((arr_10 [i_2]) ^ 1))));
        var_26 += 1;
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = -1;
                    var_28 = (((arr_17 [i_5]) ^ 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 -= var_8;
                                var_30 -= ((0 ? (arr_16 [i_9 - 1] [i_9 - 1]) : (((var_15 < (arr_16 [i_9 - 1] [i_9 - 1]))))));
                            }
                        }
                    }
                    var_31 ^= ((((((min(1, 1))) ^ (arr_19 [i_5] [i_5] [i_5]))) + (((1 <= ((min(var_11, var_2))))))));
                }
            }
        }
    }
    #pragma endscop
}
