/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-1047077812 ? ((var_2 ? var_10 : (var_3 / var_3))) : ((((var_0 || var_11) ? ((min(1, var_10))) : -var_1)))));
    var_14 = var_5;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (1047077804 + var_10);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_4 + 1] [i_0] [i_0] [i_0] [i_0] = (max(((((arr_0 [i_4 - 1] [i_4]) > var_0))), (min(-var_5, (((arr_10 [i_0] [14] [i_0] [14] [i_0 - 1]) ? -3244247087744352027 : var_1))))));
                            var_15 = ((((((var_6 ? var_9 : var_7)) ? ((var_8 ? (arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1]) : var_10)) : ((min(37802, var_0)))))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((((min(3345532866, 124))) + ((((((arr_5 [i_1]) ? 1 : var_1))) ? ((-87 ? 1811955231877846610 : -685148788525090517)) : (((-(arr_3 [i_0]))))))));
                        var_16 = ((~(max((~27723), (!1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
