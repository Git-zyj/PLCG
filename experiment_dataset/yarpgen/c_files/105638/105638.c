/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((-(var_8 % var_3)))) ? var_5 : ((((!(((var_0 ? var_7 : var_0))))))))))));
    var_11 += (min(var_5, (max((~var_6), (~var_5)))));
    var_12 -= (var_6 / var_9);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, ((((var_0 ? (arr_1 [i_0]) : 224))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 |= (arr_9 [i_2] [i_0 + 2]);
                        var_15 += (((arr_1 [i_0 - 1]) >= var_4));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_16 *= ((~(((!1) ? ((max(var_1, var_6))) : (~1)))));
        var_17 = (max(var_17, ((max(((((arr_10 [i_4]) ? ((var_6 | (arr_10 [i_4]))) : -var_3))), (((min(var_4, var_2)) & (arr_10 [i_4]))))))));
    }
    #pragma endscop
}
