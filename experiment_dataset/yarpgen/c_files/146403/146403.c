/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (arr_3 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((2199023124480 || (arr_6 [i_0] [i_0] [i_2] [8]))));
                    var_21 = -103;
                }
            }
        }
        var_22 = (((!var_6) ^ ((-97 ? -36 : 188))));
        var_23 = (!5);
    }
    var_24 = min((max(var_3, (min(var_8, var_8)))), (!-var_18));

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_11 [i_3] = ((-(((-(arr_10 [i_3]))))));
        arr_12 [i_3] = (((((((arr_10 [i_3]) - 116)))) ? (((18446744073709551611 / (arr_10 [i_3])))) : var_16));
        arr_13 [i_3] = ((((((arr_9 [i_3]) / 11736))) ? ((((arr_9 [i_3]) / -7000098614161228227))) : ((18446744073709551610 / (arr_9 [i_3])))));
    }
    #pragma endscop
}
