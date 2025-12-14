/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_0, -242467891)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (min(var_9, (arr_0 [i_0])));
                arr_4 [i_0] [i_0] [i_1] = (((-57 ? (arr_2 [i_0] [i_1 - 2]) : (arr_2 [1] [i_1 + 1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (((arr_2 [i_2] [i_2]) ^ var_0));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_3] [i_3] [i_2] = (arr_0 [i_2]);
            var_14 = ((-var_5 ? 403399712740532161 : 1));
            var_15 = ((-(((!(arr_10 [i_2] [i_3]))))));
            var_16 = 1;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    {
                        var_17 = (((arr_2 [i_5 - 1] [i_5 - 1]) | (arr_13 [i_5 + 3])));
                        var_18 *= (((arr_16 [i_5 + 2] [8] [i_5 - 2] [i_5] [i_5 + 3]) ? 1 : (arr_16 [i_5 + 2] [i_5] [i_5] [7] [i_5 + 3])));
                        var_19 = (arr_10 [i_5] [i_4]);
                        arr_17 [i_2] [i_2] [2] [i_5] &= (((~(arr_12 [i_2]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_20 = (max(var_20, (arr_19 [i_6] [2])));
        var_21 = (max(var_21, ((((1 ? (arr_19 [i_6] [i_6]) : 65535))))));
        var_22 *= ((-20077 & (arr_19 [i_6] [i_6])));
    }
    #pragma endscop
}
