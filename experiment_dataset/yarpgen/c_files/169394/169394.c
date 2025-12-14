/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [15] [15] [i_1] = min(153438416, 1);
                arr_6 [i_0] [i_1] = ((((-(min(var_17, 3837533586262996644)))) ^ ((max((min(var_11, var_3)), (((var_6 == (arr_1 [i_1] [i_0])))))))));
                arr_7 [i_0] = ((((max((((arr_4 [i_0] [i_1] [i_0]) ? (arr_1 [i_0] [16]) : var_16)), (!var_10)))) ? (((max((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0]))) ? (arr_2 [i_0]) : (max(var_12, var_11)))) : (((min(var_10, (arr_2 [i_0])))))));
            }
        }
    }
    var_19 = ((((max((min(var_10, var_2)), ((var_6 ? var_12 : var_9))))) ? -var_1 : var_6));
    #pragma endscop
}
