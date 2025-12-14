/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = max(((2355066321 ? (arr_1 [i_2 - 1]) : var_1)), (max(6, 2724827406)));
                    var_12 = ((!((max(-4, (arr_2 [i_0] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_13 = (max(var_13, var_11));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_14 |= max(((-7 ? -53 : (((((arr_14 [i_3]) >= 995236962)))))), (((-2857957067 > (!52)))));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_15 = (arr_23 [i_3 - 3] [2] [i_3 - 3] [i_6] [i_7 - 1]);
                                arr_25 [i_7] [i_3] [i_3] [i_3] [i_5 - 2] = ((~((((((arr_16 [i_3]) && (arr_17 [i_4]))) || ((min(var_0, (arr_24 [i_3 + 3] [9] [i_3 + 3] [i_3] [i_3])))))))));
                                arr_26 [i_6] [i_3] [i_6] [i_6] [i_6] = (((((var_3 ? var_1 : (((min(var_0, -7))))))) ? ((((2375758350 ? (arr_9 [i_3]) : 1919208960)) << (!-64))) : (!3562250297)));
                                var_16 = -12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
