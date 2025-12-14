/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = var_11;
                var_16 += (arr_2 [14] [14]);
                var_17 *= ((((16167 ? 1777042369 : 58462)) - 15));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_6 [i_2] = var_9;
        var_18 = (min(var_18, ((max((arr_3 [i_2]), (min((arr_3 [i_2]), (arr_3 [i_2]))))))));
        var_19 = 240;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [i_5] = (min((arr_7 [i_3]), ((var_2 ? (arr_9 [i_5 - 2] [i_4 - 1]) : (arr_9 [i_5 - 2] [i_4 - 2])))));
                    arr_16 [i_5] [i_3] [i_3] &= (min(var_13, ((!((((arr_11 [i_4] [i_4]) ^ 24)))))));
                    var_20 = (min(var_20, (((!((max((arr_7 [i_5 + 1]), (arr_11 [9] [i_3])))))))));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 += ((((min((arr_8 [i_4 + 1] [i_4 + 1]), (arr_20 [i_5 - 3] [i_4 + 1] [i_4] [i_4 - 1])))) ? var_1 : ((((arr_8 [i_4 - 1] [i_4 - 1]) && var_11)))));
                        var_22 = (min(var_22, (~var_9)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_24 [i_3] &= (~4943);
                        arr_25 [i_7] [i_5] [i_4] [i_4] [i_4] [i_3] = (((arr_9 [i_5 + 1] [i_4 - 2]) ? 134217472 : ((((arr_9 [i_5] [i_3]) ? (arr_8 [1] [18]) : (arr_20 [i_3] [i_4] [i_3] [i_7]))))));
                        var_23 = (arr_18 [i_5 + 1] [i_4 + 2]);
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_24 = (min(var_24, ((max(var_11, (min((arr_19 [i_4] [i_4]), 5)))))));
                        var_25 += max((arr_28 [i_3] [i_4] [17] [i_3] [i_3]), (arr_26 [1] [1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
