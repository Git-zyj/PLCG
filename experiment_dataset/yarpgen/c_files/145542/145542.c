/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? (((((5 ? var_6 : var_3)) | (var_11 != var_0)))) : (min(((var_9 ? var_1 : var_10)), 28146))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_1;
                var_13 = ((~(((((var_7 ? 541423521512711479 : var_6)) < 26738)))));
                arr_6 [i_0] [i_0] = ((+((var_1 ? (arr_0 [i_0] [11]) : (arr_0 [i_0] [i_1])))));
                arr_7 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (((min((arr_2 [i_2] [i_0]), (arr_10 [i_3] [3] [i_0] [i_0] [i_0]))) - (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2])));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((!(arr_8 [i_2])));
                            arr_14 [i_0] [i_2] [i_0] [i_0] = (min((0 & 65472), var_10));
                            var_14 = (arr_8 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
