/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [11] [14] = arr_5 [i_0] [i_2 - 1];
                        arr_14 [i_0] [i_0] = (arr_5 [i_2 - 1] [i_3]);
                        arr_15 [2] [2] [i_0] = min(((-(arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3]))), ((-(arr_11 [i_1] [i_2 - 1] [i_0] [i_3]))));
                    }
                }
            }
        }
        var_18 = (max(var_18, (arr_7 [1] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_19 = ((!((((arr_19 [i_4]) - 0)))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_7] [i_4] [i_5] [i_7] = var_8;
                        var_20 = (arr_20 [i_4] [i_5] [i_6 + 2]);
                        arr_27 [i_7] [i_4] [i_7] = (!55);
                        arr_28 [i_4] [i_5] [i_5] [0] [i_7] [19] = (arr_6 [i_7 - 1] [i_7]);
                    }
                }
            }
        }
        var_21 *= (+-55);
    }
    #pragma endscop
}
