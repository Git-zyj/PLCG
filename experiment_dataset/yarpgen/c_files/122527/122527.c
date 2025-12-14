/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max((var_13 != var_11), (((var_7 + 2147483647) >> ((((max(56162, 6656))) - 56157))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = ((max(((1 ? (arr_0 [i_0] [1]) : var_13)), ((min(var_10, 1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3] = (min(27940, ((max(var_13, (arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 1]))))));
                        arr_10 [i_0] [i_2] = (min(((max((arr_3 [i_0] [i_0 - 3]), var_2))), ((var_3 % (arr_7 [i_0] [i_0 - 2] [i_0 - 3] [1] [i_3 + 1])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_20 = (max((min(-65534, ((max(var_13, var_2))))), var_0));
        arr_14 [i_4] = (var_9 + var_1);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_21 *= ((var_1 ? (((arr_25 [i_4] [16] [i_8] [i_4] [i_8 - 1]) & var_16)) : ((var_0 ? var_3 : var_3))));
                            var_22 = (arr_25 [i_4 - 1] [i_5 + 1] [i_4] [i_7] [i_8]);
                        }
                        arr_26 [i_6] [4] [i_6] [i_4] = (((((arr_22 [i_4]) < (arr_23 [i_4 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_7] [i_7]))) ? ((((arr_22 [i_4]) <= (arr_23 [i_4 + 1] [i_5 - 1] [5] [i_7] [i_4 + 1] [i_7])))) : (((arr_13 [i_4 + 2]) - var_2))));
                        var_23 = (arr_20 [i_4] [i_5 - 1] [i_6] [i_7]);
                    }
                }
            }
        }
        var_24 = arr_16 [i_4 + 1];
    }
    #pragma endscop
}
