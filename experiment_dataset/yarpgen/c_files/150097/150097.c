/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_0, var_4));
    var_18 = var_1;
    var_19 = (((((-((var_7 ? 8 : var_8))))) ? -11 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0 - 1] = (((((((var_12 ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (max(261888, var_13)) : (-9223372036854775807 - 1)))) ? (arr_2 [i_0]) : (min(4294705407, (((arr_5 [i_0]) % (arr_1 [i_0]))))));
                arr_7 [i_0] [i_0] = (max(((((min(2294039110, (arr_3 [i_0])))) ? (((arr_5 [1]) ? var_11 : (arr_2 [i_0]))) : ((((arr_1 [i_0]) ? var_11 : var_0))))), (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
