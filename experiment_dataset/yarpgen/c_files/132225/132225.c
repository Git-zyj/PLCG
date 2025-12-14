/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((var_15 ? (8685798198266387670 / 15) : (arr_9 [i_0] [i_1] [i_0])));
                    arr_10 [i_0] = -16;
                    var_20 = (max(var_20, ((min((((arr_5 [i_1] [i_0] [0]) ? (((arr_5 [i_0] [i_1] [12]) + var_7)) : (((max((arr_1 [i_0]), (arr_3 [i_1] [i_2]))))))), ((((arr_6 [i_0] [22]) ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : var_8))))))));
                }
            }
        }
    }
    var_21 = (((((var_3 ? var_15 : var_1))) ? ((max(var_14, (((5115039941304145363 ? var_11 : var_9)))))) : (~var_8)));
    var_22 |= 13428992972954971854;
    var_23 = var_13;
    #pragma endscop
}
