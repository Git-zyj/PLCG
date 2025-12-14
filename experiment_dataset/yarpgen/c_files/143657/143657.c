/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = (((((var_3 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (arr_1 [i_0] [i_1]) : (min(((var_5 ? 41405 : var_7)), (arr_4 [i_0])))));
                arr_6 [i_0 - 1] [i_0] [i_1] = ((((var_8 ? (min(var_10, var_9)) : ((min((arr_3 [i_0]), var_8))))) + (var_4 - var_0)));
            }
        }
    }
    var_12 = ((+(((var_9 && 24131) ? var_5 : var_3))));
    var_13 = (((((((-32764 ? 0 : var_6)) * (((var_0 ? var_8 : var_1)))))) ? ((var_11 ? var_2 : (min(var_7, 18446744073709551615)))) : var_10));
    #pragma endscop
}
