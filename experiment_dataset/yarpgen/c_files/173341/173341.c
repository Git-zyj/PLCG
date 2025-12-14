/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_0] = ((max(13782, 14216778999894427819)));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (max(var_16, var_3));
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_2] = var_12;
                        arr_12 [i_3] [i_1] [i_0] [i_3] [3] [i_0] = var_15;
                    }
                    var_17 = ((!(((-8633 ? (((var_8 || (arr_5 [i_0] [i_1] [i_1] [i_0])))) : (!51726))))));
                    arr_13 [i_0] = (!5274920616110352986);
                }
            }
        }
    }
    var_18 = ((((var_7 ? 419263488 : var_12)) >> ((((max(30301, 51750))) - 51695))));
    #pragma endscop
}
