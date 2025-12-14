/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_4 [i_0]);
                arr_7 [i_1] [i_1] = ((!((!(arr_0 [i_1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_15 = var_1;
        var_16 = ((~(((((!(arr_9 [i_2])))) - (arr_2 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_17 = (((arr_10 [i_3]) | (arr_10 [i_3])));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_18 |= (arr_0 [i_3]);
            arr_15 [i_3] [i_4] = ((~(arr_14 [i_4] [i_3] [i_3])));
            arr_16 [i_4] [8] &= ((~(((!(arr_12 [i_3]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] [i_6] = 4294967295;
                        arr_24 [i_3] [i_3] [i_5] [i_6] = (((var_8 >= var_4) ? (!7) : var_0));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_19 = (var_13 == (arr_18 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]));
            var_20 = (max(var_20, (arr_3 [i_7 + 1] [i_7 - 1] [i_7])));
            var_21 -= (arr_11 [i_7 - 1] [i_7 + 1]);
        }
        arr_28 [i_3] = (arr_19 [3] [3] [i_3]);
        var_22 = (((arr_22 [i_3] [i_3]) >> (((arr_22 [i_3] [i_3]) - 130))));
    }
    var_23 = var_10;
    var_24 = (min((min((max(var_11, var_4)), var_10)), var_4));
    #pragma endscop
}
