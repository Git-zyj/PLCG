/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((((var_9 ? ((((0 >= (arr_0 [0] [i_1]))))) : (~var_8)))) ? var_2 : (((arr_2 [12]) ? (min(-1, 9223372036854775807)) : 15579)))))));
                var_13 = (((((~((min(var_2, 0)))))) ? ((((((var_3 ? (arr_1 [3]) : (arr_0 [i_0] [i_0])))) ? (arr_3 [21] [i_1] [i_1]) : (((arr_0 [i_0] [12]) ? (arr_1 [i_0]) : var_5))))) : (min(var_3, ((var_0 ? var_10 : var_5))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_14 = max(var_1, var_10);
                var_15 = (((((((max(0, var_0))) ? (~var_6) : (((-1502494758711507885 ? var_0 : var_9)))))) ? ((((var_10 ? 6081 : var_4)) * (arr_1 [i_3]))) : (max((arr_7 [i_2] [13]), (max(var_6, var_3))))));
            }
        }
    }
    var_16 = (((max((!var_7), (var_0 > var_5))) ? (((var_6 ? (min(65532, var_1)) : (~var_0)))) : var_8));
    #pragma endscop
}
