/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (~-1258795936892373064);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 -= (((((~(arr_5 [1] [i_2 - 1] [i_2] [i_2 - 1])))) ? (((arr_7 [i_1] [i_0] [6]) ? 1 : (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (max(var_6, (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_16 = ((~(((arr_4 [i_2 - 1] [i_2 - 1]) ? var_4 : (arr_4 [i_2 - 1] [i_2 - 1])))));
                    var_17 = (((~(~9223372036854251520))) <= var_9);
                }
            }
        }
    }
    var_18 = ((((((((var_6 + 2147483647) >> var_9))) ? ((1 ? var_3 : var_12)) : (((var_2 >> (var_7 + 1730749556)))))) >> (var_2 - 70)));
    var_19 = (~var_8);
    #pragma endscop
}
