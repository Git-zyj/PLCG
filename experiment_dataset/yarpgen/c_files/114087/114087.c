/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((max(var_9, var_12)), var_15)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((197 ? var_7 : (arr_6 [i_1] [i_1] [i_1]))) - ((min(var_2, (arr_0 [i_2])))))), ((min(var_14, 0)))));
                                var_19 += 1548769935;
                                var_20 = var_11;
                            }
                        }
                    }
                    var_21 = ((max((1548769926 && 1548769921), (arr_12 [i_0 - 3] [i_1 + 2] [i_1] [i_2 + 3] [i_1 + 2]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_21 [i_6] [i_6] [i_5 + 2] = ((!(((~((1548769935 ? (arr_0 [i_5]) : 255)))))));
                    arr_22 [i_5] [i_6] = -2746197368;
                    arr_23 [15] [i_6] [i_5] = (!1548769926);
                    var_22 = (min(var_10, (var_6 >= var_12)));
                }
            }
        }
    }
    #pragma endscop
}
