/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-26 ? (((!((max(var_0, 23)))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = var_4;
                var_18 += ((-(((!(arr_3 [i_0] [3]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_13 [13] [13] [13] |= ((((var_4 ? var_2 : var_15)) == var_14));
            arr_14 [i_3] = ((~(!828342542)));
            var_19 = ((-10 || (arr_10 [i_2] [i_2])));
        }
        arr_15 [i_2] [4] = (((arr_12 [i_2 + 2] [i_2 + 2] [i_2]) >= (arr_11 [i_2 + 1] [i_2 - 1])));
        var_20 = (-((var_8 * (arr_12 [i_2] [i_2] [i_2]))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (~var_10);
        var_21 += (~6);
        var_22 ^= ((~(arr_8 [i_4 + 2])));
        var_23 = ((~(~650019957806260316)));
    }
    #pragma endscop
}
