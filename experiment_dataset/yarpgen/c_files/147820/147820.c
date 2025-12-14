/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_16 = (max(var_16, (((!(((1434070850 ? var_7 : (min(var_5, (arr_6 [i_0] [1] [i_0])))))))))));
            var_17 = -1434070847;
        }
        arr_7 [i_0] [i_0] = (((((!(!var_7)))) >= ((((min(var_5, var_6))) | (max(1434070850, 1))))));
        var_18 = ((-(((arr_0 [i_0 - 2] [i_0 - 3]) - (arr_0 [11] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    var_19 = (arr_11 [i_2] [1] [i_2]);
                    arr_15 [12] [i_3] [i_3] = (arr_3 [i_2]);
                    var_20 = (arr_6 [i_3] [8] [i_3]);
                    var_21 ^= (((arr_13 [i_3] [i_3] [i_3 - 1]) ^ (arr_4 [i_3])));
                }
            }
        }
        arr_16 [0] [i_2] = -1434070829;
    }
    var_22 = (max(var_22, (((~(var_3 | 1))))));
    #pragma endscop
}
