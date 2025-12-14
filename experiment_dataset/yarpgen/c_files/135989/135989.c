/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_2] [i_4] [i_0] = ((((max((arr_7 [i_1]), -960398858))) ? ((-610734786 ? ((min(var_7, var_4))) : 3334568455)) : var_11));
                                var_13 = 26743;
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] [i_0] = (((((2301339409586323456 ? (!1) : (arr_9 [i_0] [i_1] [i_2 - 3])))) ? ((((26591 > (!3430082408))))) : (((~var_1) ? (((1 ? 1428946016 : var_6))) : var_4))));
                    arr_15 [i_1] [i_1] &= var_7;
                }
            }
        }
    }
    var_14 = ((2170906319551497851 ? (((!((min(3418067003558717563, 16383)))))) : var_11));
    var_15 = (max((min(var_2, ((var_11 ? var_5 : 2508879053)))), var_3));
    #pragma endscop
}
