/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(171, 532676608));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 2165905016;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] = (-32743 & 238);
                            var_10 = ((((max(36, 197))) <= (arr_13 [i_2] [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_0])));
                            var_11 = (((((arr_14 [i_4] [i_3] [12] [i_2] [i_2] [4] [i_0]) + (arr_8 [i_1 + 1] [i_1 + 1] [i_0]))) | (!1)));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_0] = (!202);
            var_12 = ((((((23909 ? 85 : var_6)) ? (arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]) : (((min(var_3, var_1))))))));
        }
        arr_17 [i_0] = ((((max(221, 30744))) ? (arr_4 [i_0] [i_0] [i_0]) : var_8));
        var_13 = (min(((((min(532676595, var_0))) ? (arr_10 [i_0] [i_0] [i_0]) : ((min(91, (arr_1 [i_0])))))), (min(-255, (arr_11 [3] [i_0] [i_0] [i_0] [3])))));
    }
    var_14 = (min(4024189320, var_1));
    #pragma endscop
}
