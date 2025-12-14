/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] &= (max((((arr_3 [i_0] [16] [i_0]) > var_11)), (((var_0 - var_11) > (arr_5 [9] [i_1] [i_2])))));
                    arr_9 [i_0] [5] [22] [1] = (-32767 - 1);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_18 = (arr_0 [i_0 + 1]);
                        arr_12 [i_0] [3] [i_2] [i_3] = (((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) % -1)) > (arr_6 [i_0 - 2] [8] [i_0 - 2])));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = (((-32767 - 1) / ((max(5632, var_6)))));
                        var_19 = (((var_11 < ((var_0 ? -32752 : var_12)))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_20 = max(var_9, (arr_2 [i_4] [i_2] [i_1]));
                        var_21 = (!22581);
                        arr_16 [i_2] [i_2] = var_13;
                        var_22 = (var_16 > 6471645040565032107);
                        var_23 = (min(var_23, ((max((arr_4 [5]), (~var_7))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
