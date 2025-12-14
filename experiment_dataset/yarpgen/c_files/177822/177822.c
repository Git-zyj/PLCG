/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_12, (max(var_7, 5993210924046841478))));
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (max(var_21, var_12));
                arr_4 [i_0] [i_1] = (arr_2 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_0] [i_2] = var_4;
                        arr_12 [i_0] [i_1] [i_3] [i_3 - 1] = (-32767 - 1);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] = -32759;
                        arr_16 [i_0] [i_1] [i_2] [i_4] = -var_4;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1 + 2] [i_5] [i_5] = (-(var_12 & var_2));
                        arr_20 [i_0] [4] [i_0] &= var_10;
                    }
                    var_22 = 32767;
                    arr_21 [i_2] = (max(((((((arr_8 [i_0] [6] [i_2] [i_0]) ? var_2 : (arr_14 [i_0] [i_1] [i_1 + 1] [i_2]))) != (max((arr_18 [i_0] [i_0] [18] [i_0]), (arr_1 [i_2] [i_1])))))), 32767));
                }
            }
        }
    }
    var_23 = (((!var_2) < 8983404161468189254));
    #pragma endscop
}
