/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((((((min(var_7, 0))) + 2147483647)) >> (18446744073709551590 - 18446744073709551560)))) ? var_8 : (min(((2962000204657831402 >> (475317080 - 475317074))), (var_6 + -2962000204657831411))))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((((min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 1])))) ? (((~(arr_0 [i_0 + 2])))) : (min((arr_0 [i_0 - 1]), 0))));
        arr_3 [i_0] = (19206 < 19);
        var_13 = (((((arr_1 [i_0 + 3]) / var_7))) && (((~19206) && 0)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (((((3819650207 >> (((arr_0 [i_1]) + 25674))))) ? (((1 == (arr_4 [i_1] [i_1])))) : ((max(1, (arr_0 [1]))))));
        arr_8 [0] = ((11414005 ? ((((max(2776382459, var_0))) ? 3819650207 : 1686896682)) : 1433359317));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [i_5] = ((1 / ((((max(3574994935, 48))) ? (21621 | var_1) : (-3 | var_5)))));
                        var_15 *= (arr_14 [i_2]);
                        arr_22 [i_5] [2] [i_3] [i_5] = 64;
                        var_16 = var_5;
                    }
                }
            }
        }
        var_17 = (min(var_17, (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [6])));
        var_18 = 2962000204657831402;
    }
    #pragma endscop
}
