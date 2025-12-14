/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (min(var_10, (((var_9 >= var_11) ? var_7 : (max(var_3, var_0))))))));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((5356 ? (((var_4 ? (arr_0 [i_0]) : ((var_5 ? (arr_1 [i_0]) : (arr_3 [i_0])))))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : 3))));
                arr_6 [7] &= (arr_2 [i_0]);
                var_14 &= (arr_3 [16]);
                arr_7 [i_1] [i_0] = ((((((1883246944 ? (arr_2 [i_0]) : (arr_4 [i_0] [i_1]))) >= (arr_1 [17]))) ? (((((((arr_3 [i_1]) == 0)))) - ((var_6 ? var_10 : var_4)))) : (((arr_2 [i_0]) * (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
