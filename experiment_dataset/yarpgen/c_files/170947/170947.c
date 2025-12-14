/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max(((((var_14 ? -2147483644 : 32740)) * (80 == var_2))), var_2)))));
    var_18 = (var_4 ? ((((max(var_8, var_8))) * (var_4 / var_10))) : var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] &= (max((arr_3 [i_2] [i_2]), (arr_4 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (+((-(((arr_1 [i_1] [i_1]) ? (arr_3 [i_0] [i_0]) : var_9)))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (!-1);
                    var_19 = (((18272 > 32256) + (arr_2 [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
