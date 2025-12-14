/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-5410);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0]) & var_4)) & ((var_1 ? var_2 : var_4)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = var_6;
            var_14 = (-5429 & var_5);
            var_15 = ((-8 ? -5398 : -1696836804));
        }
        arr_7 [i_0] [i_0] = -5109430114671388255;
        var_16 = var_3;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = ((((min((var_0 || 63972), var_11))) || (((-(arr_9 [i_2 + 1]))))));
        var_17 = ((-((((((arr_8 [i_2] [i_2 - 1]) / -267685290))) - ((36 ? (arr_9 [i_2]) : -2730064922248633461))))));
    }
    #pragma endscop
}
