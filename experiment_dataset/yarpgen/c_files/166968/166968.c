/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((((arr_0 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) < var_3));
                var_15 = (((((arr_4 [i_0] [i_1]) ? var_4 : 2223784260)) > ((max((arr_4 [i_0] [i_0]), var_7)))));
                var_16 = (arr_3 [i_0] [i_1]);
                var_17 = ((!-8878648787909563850) ? -3170502568104036985 : var_4);
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 = arr_5 [i_2] [i_2];
        arr_8 [i_2] = var_12;
        var_19 *= var_1;
    }
    #pragma endscop
}
