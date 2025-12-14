/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 ^= (min(5364852681730133522, -6504995755110585757));
    var_17 = (min(var_17, var_6));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(((var_0 ? var_7 : (arr_2 [i_0 - 2] [i_0 - 2]))), ((max(var_11, (arr_2 [i_0 - 1] [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_3] [i_4] [i_0 - 2] = var_2;
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = (max((((((var_2 ? var_10 : (arr_0 [i_0 - 3])))) ? var_5 : var_0)), (((!((((arr_1 [i_0 - 3] [i_1]) ? (arr_1 [i_0 - 1] [i_1]) : var_8))))))));
                            }
                        }
                    }
                    var_19 ^= var_7;
                    arr_14 [15] [i_1] = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_20 = ((4383123415452203002 ? 2621 : -3512257794608873212));
        arr_17 [i_5] = (arr_8 [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_21 = (max((((-740 ? var_9 : ((min(var_12, -3325)))))), (max(var_5, (-127 - 1)))));
        var_22 += (((max((arr_18 [i_6] [i_6]), (arr_7 [i_6] [i_6]))) / (min(((min(var_11, var_10))), (var_9 ^ var_11)))));
    }
    #pragma endscop
}
