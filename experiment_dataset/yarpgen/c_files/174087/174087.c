/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((var_9 / (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = -61138;
                    var_20 *= -16;
                    var_21 = (min(var_21, (arr_8 [i_0] [i_1 + 2] [i_1] [2])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = (((arr_10 [i_3 + 1]) ? (arr_12 [i_3 + 2]) : (arr_11 [i_3 + 1])));
        var_22 *= (4408 > 9855801758452134822);
        arr_14 [i_3] [i_3] = ((var_12 & (~var_14)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((((1692598372 >= (arr_17 [i_4]))) ? ((((((max(0, 1))) != (arr_16 [i_4]))))) : (arr_1 [2])));
        arr_19 [i_4] [i_4] = (arr_12 [i_4]);
        arr_20 [6] = 685616748639904156;
        var_23 = (min(var_23, ((((((((max((arr_3 [i_4] [i_4]), (arr_12 [i_4])))) ? (~4085218379) : ((1848030926 ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : var_11))))) ? 3535958555533144737 : ((2147483647 >> ((min((arr_15 [i_4]), (arr_10 [i_4])))))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = var_4;
        arr_23 [i_5] [5] = max((max(10575542668117234023, (arr_10 [i_5]))), (arr_3 [i_5] [i_5]));
        var_25 = (~(max((((1 >> (-1848030927 + 1848030958)))), (arr_5 [i_5] [i_5]))));
    }
    var_26 = var_12;
    var_27 = ((10652023562659641306 ? 18446744073709551609 : 8425051743436575616));
    var_28 = var_15;
    #pragma endscop
}
