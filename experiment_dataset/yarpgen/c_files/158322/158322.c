/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((~(arr_4 [i_0]))))) ? (var_6 + 18365492926999799177) : ((((-105769698 == (((arr_1 [i_0]) ? var_13 : (arr_0 [i_0])))))))));
                var_15 = (max(((max(((16320 ? (arr_3 [i_0] [i_0] [i_0]) : var_0)), 16333))), ((-11971 ? -5660481399498074927 : (1 + var_8)))));
            }
        }
    }
    var_16 -= (max(2639355060, var_6));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (arr_8 [i_2]);
        var_18 = var_12;
    }
    #pragma endscop
}
