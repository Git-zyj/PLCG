/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max((max(var_13, var_13)), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = arr_4 [i_0 + 1] [i_1] [i_1];

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_16 = ((var_14 - ((((max((arr_7 [i_3] [i_0] [i_0] [i_0]), (arr_2 [i_3])))) - (max(var_13, (arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1])))))));
                        arr_11 [i_3] [i_3] [i_2] [i_2] |= (!875719784837547227);
                        var_17 = (max(var_17, (arr_7 [i_0 - 1] [12] [i_3] [i_3])));
                    }
                    var_18 = (((((max((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 2]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) * (max(875719784837547217, 875719784837547205))));
                    var_19 |= (((arr_7 [18] [18] [18] [i_0 + 2]) ? ((((!(arr_1 [i_0]))))) : var_11));
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = ((var_2 / (var_14 ^ var_13)));
    var_22 &= var_8;
    #pragma endscop
}
