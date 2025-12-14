/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (max((((((-(arr_2 [i_0])))) ? var_12 : -var_1)), (arr_5 [i_0] [i_0] [i_1])));
                arr_6 [i_0] = (arr_4 [i_0]);
                var_22 += 28799;
                var_23 = (min(var_23, ((((((arr_4 [6]) ? (arr_4 [12]) : (arr_4 [0])))) ? (((arr_4 [2]) ? (arr_4 [6]) : var_10)) : ((85276993 ? (arr_4 [22]) : (arr_4 [16])))))));
                var_24 = ((((arr_0 [i_0]) ? var_6 : (arr_4 [i_0]))));
            }
        }
    }
    #pragma endscop
}
