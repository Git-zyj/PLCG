/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(var_7, var_9)) ? var_17 : var_16)) + 2147483647)) >> (var_8 - 2342585560)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [2] [2] = (max(((max((1835320831 | 1), (~var_8)))), (arr_1 [0] [1])));
                var_19 = -459400317;
                arr_7 [i_1] = var_17;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_20 = (~13211601587884589640);
                var_21 |= (((var_6 ? (max(var_10, (arr_13 [i_2] [i_3]))) : (arr_9 [i_2]))));
                var_22 = (((max((arr_0 [i_2]), ((((arr_5 [i_2]) >= (arr_1 [i_3] [i_3]))))))) ? (((((arr_13 [i_2] [i_2]) == var_6)) ? (arr_10 [5] [1]) : (arr_11 [i_2] [i_3] [i_3]))) : var_10);
            }
        }
    }
    var_23 = (var_7 + var_13);
    #pragma endscop
}
