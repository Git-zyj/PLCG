/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(((((arr_2 [i_0]) | (arr_0 [8])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (-27436 ^ 27435);
            var_20 = (max(var_20, (arr_0 [i_0])));
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {
                        var_21 = 1;
                        arr_16 [10] [i_0] [i_3] [i_3] [20] = (arr_1 [i_0]);
                        arr_17 [i_0] [i_0] [i_3] [i_4] [i_3] [i_0] = ((((((var_1 ? (arr_5 [i_0] [i_2] [i_4]) : 1)) ^ 16)) * (((((-(arr_4 [i_3]))) != (arr_13 [14] [i_3] [14] [10]))))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_22 = (((((arr_4 [i_2 + 2]) * (arr_4 [i_2 - 1]))) & ((32958 ? var_16 : (arr_4 [i_2 + 3])))));
                            var_23 = (max(var_23, 127));
                            var_24 = var_4;
                        }
                        var_25 = ((((max(218, (arr_5 [i_0] [i_2] [i_2])))) - (((4294967295 ? 0 : (arr_18 [i_0] [i_0] [i_3] [i_4 - 2] [1] [21]))))));
                    }
                }
            }
        }
    }
    var_26 *= (((((max(var_2, var_1))) << var_18)));
    var_27 = (-93 && -var_18);
    #pragma endscop
}
