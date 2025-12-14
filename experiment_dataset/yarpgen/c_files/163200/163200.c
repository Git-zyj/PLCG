/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (((min((arr_5 [i_0] [i_0] [13]), (arr_2 [i_2])))) ? (arr_2 [i_1]) : var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = (((var_9 / (~3919871420))));
                                arr_14 [i_0] [i_3] [i_0] [i_3 + 1] = (((((-var_4 ? (var_6 <= var_7) : var_8))) ? 2712454552 : var_7));
                            }
                        }
                    }
                    var_11 = (min((((!var_6) || ((min(var_4, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((((var_1 ? var_1 : var_5))) || var_5))));
                }
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
