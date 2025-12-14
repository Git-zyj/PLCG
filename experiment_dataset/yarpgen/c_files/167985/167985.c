/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (arr_3 [i_0] [i_1 - 2] [i_1]);
                    arr_9 [i_1] [i_0] [i_0] = ((+((var_1 ? (arr_6 [i_1 - 3] [i_0] [i_0]) : (arr_4 [i_1] [i_1])))));
                    arr_10 [i_0] [i_1] [i_1] [i_2 + 1] = var_12;
                    var_14 &= ((-(((arr_3 [i_1 + 1] [i_2 + 1] [i_0]) ? (arr_3 [i_1 + 1] [i_2 + 1] [i_0]) : (arr_3 [i_1 + 1] [i_2 + 1] [i_0])))));
                }
            }
        }
    }
    var_15 = (((((var_12 ? var_3 : (var_10 == var_4)))) ? ((var_2 ? var_4 : var_12)) : ((((~31992) ? -var_1 : -var_1)))));
    var_16 -= var_8;
    var_17 = (max(var_17, ((max(((min((min(var_10, var_10)), ((var_10 ? 2147483647 : var_2))))), var_4)))));
    #pragma endscop
}
