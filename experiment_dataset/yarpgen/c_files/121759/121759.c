/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 231;
        var_16 = var_9;
        arr_3 [i_0] [i_0] = ((17800077211388557701 ? 231 : 0));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = var_11;
                        arr_12 [i_1] [i_3] [i_2] [i_1 + 2] [i_0] [i_1] = var_5;
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = 4816544717248415643;
                    }
                }
            }
        }
        var_18 += var_9;
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_19 = (max(var_19, ((min(39, 34359738367)))));
        var_20 = ((!(((var_10 && -8233707938910491107) >= (min(var_10, 4294967295))))));
        arr_17 [i_4] = ((!((min((arr_5 [i_4 + 2] [i_4 + 2] [i_4 - 1]), (arr_0 [i_4 - 2]))))));
        arr_18 [i_4] = 43;
        var_21 = ((((max(var_5, (arr_8 [i_4] [i_4] [i_4])))) ? (((min((arr_10 [i_4]), 24)))) : ((217 ? 20 : var_1))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 = (((arr_19 [i_5]) <= (arr_20 [i_5])));
        var_23 = (min(var_23, -503866016150491777));
        arr_21 [i_5] = -100;
    }
    #pragma endscop
}
