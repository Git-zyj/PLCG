/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(var_6, var_2)), var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = 0;
        arr_2 [i_0] = (max((arr_1 [i_0] [0]), (((var_5 ? (arr_1 [i_0] [5]) : ((21 ? (arr_0 [i_0]) : var_10)))))));
        var_16 = (min(var_16, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (i_1 % 2 == zero) ? (((((((arr_3 [i_1]) << (((arr_4 [i_1]) + 97))))) ? ((((max(0, 6))) ? -3084894193 : (arr_4 [i_1]))) : 0))) : (((((((arr_3 [i_1]) << (((((arr_4 [i_1]) + 97)) - 199))))) ? ((((max(0, 6))) ? -3084894193 : (arr_4 [i_1]))) : 0)));
        var_18 = min(var_8, (arr_3 [i_1]));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 = ((+(((((min((arr_3 [i_1]), 0)))) & var_7))));
                                var_20 = (max((arr_12 [i_1]), ((((arr_8 [i_1] [i_4] [i_1] [i_1]) != (arr_8 [i_1] [i_1] [11] [i_1]))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (((var_8 ? (~9) : ((var_8 ? var_10 : var_5)))))));
                    var_22 = ((((((arr_11 [8] [i_1] [i_3]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? var_11 : ((3120375331827554027 ? (arr_5 [i_1] [i_1] [i_3]) : (arr_8 [i_1] [i_2] [i_2] [i_3])))));
                }
            }
        }
    }
    var_23 = var_12;
    #pragma endscop
}
