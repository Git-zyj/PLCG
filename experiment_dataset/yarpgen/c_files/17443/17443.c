/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = arr_6 [i_0] [i_3] [i_0] [i_3];
                        var_13 = var_4;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_14 = (arr_2 [i_0] [i_5 - 1]);
                    var_15 = ((-(!1273730542)));
                    arr_18 [i_4] [i_4] [i_5] [i_5 - 1] = -1273730522;
                }
            }
        }
        var_16 = ((-(min(((var_3 - (arr_14 [i_0 - 2]))), -1273730542))));
        arr_19 [i_0 - 1] = ((((~(arr_16 [4] [i_0] [i_0] [4])))) ? (arr_15 [i_0] [i_0 + 2]) : (((arr_16 [8] [8] [i_0] [8]) ? (arr_16 [4] [i_0] [i_0] [4]) : (arr_15 [i_0 + 1] [i_0]))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_17 = -28315;
        arr_22 [i_6] = max(((((((-1273730543 ? 1273730542 : 0))) < 3592748100975627621))), ((((((arr_20 [i_6]) ? 22 : (arr_20 [i_6])))) ? (((arr_20 [i_6]) ? -1273730565 : (arr_20 [i_6]))) : ((~(arr_21 [i_6] [1]))))));
        var_18 = -3398;
    }
    #pragma endscop
}
