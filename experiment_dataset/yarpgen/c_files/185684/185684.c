/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((!var_2) % (((((0 ? -303768765458289149 : 549722259456))) ? var_6 : var_5))));
        var_15 *= ((9029195141936726830 << ((((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 3])))) - 1797))));
        var_16 = (((!var_13) > (max(23, (arr_1 [i_0 - 1])))));
        var_17 *= (max(var_9, (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (max(var_18, (((!(((549722259456 ? (arr_4 [i_1]) : (arr_5 [i_1])))))))));
        arr_6 [i_1] = (-(min(var_12, (max(var_1, var_7)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = (max(-549722259438, -6463431644219045887));
                    arr_14 [i_4] = ((-(arr_9 [i_2])));
                    arr_15 [i_2] [i_3] [i_3] &= var_9;
                }
            }
        }
        var_19 = (min(var_19, (((+(min((arr_7 [i_2] [11]), (min(var_12, 18160580200995518710)))))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_20 = (min(var_20, (18446744073709551615 & 549722259440)));
        arr_18 [10] = 9029195141936726835;
    }
    #pragma endscop
}
