/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_8;
    var_21 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = 0;
                var_23 = 35794;
                var_24 = -1940728503;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_25 = (~-1708901356);
                    var_26 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
                    arr_8 [i_1] [i_1] [i_1] = arr_2 [i_1] [i_1] [i_2];
                }
                arr_9 [i_1] [4] [i_1] = (var_2 ? (((arr_0 [i_0] [i_1]) ? 1033890442 : (arr_2 [i_1] [i_1] [i_1]))) : (arr_7 [i_0]));
            }
        }
    }
    var_27 = ((var_19 ? (-11 < var_10) : var_11));
    var_28 = var_13;
    #pragma endscop
}
