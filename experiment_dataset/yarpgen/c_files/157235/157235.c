/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((~((243 ? 49429 : -1))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = ((~1) > 113);
                        var_15 = (arr_1 [i_1 + 3] [i_1 + 2]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (min(var_16, (((((max(var_5, (arr_4 [i_0]))) > var_8))))));
                        var_17 = ((+((((((arr_13 [2] [i_0] [20] [i_2] [i_4]) % (arr_7 [i_0] [i_1 + 1] [i_2]))) > var_7)))));
                    }
                    var_18 = ((!(arr_8 [i_1 + 3] [i_2] [i_2 - 1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
