/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = (max(var_11, (((~((~(arr_0 [i_0 + 3]))))))));
        arr_4 [i_0] = (((4294967283 ? (arr_0 [i_0 + 1]) : (!var_1))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 = (max((((arr_6 [i_0 + 1]) >> (((arr_6 [i_0 + 3]) - 8138372550948337796)))), (((-(arr_10 [i_1 - 1] [i_1] [i_1] [i_3] [i_1 - 1] [i_0 + 3]))))));
                        arr_11 [i_0 - 2] [13] [13] [i_3] = ((((((arr_7 [i_0 - 1] [i_0] [i_1 + 1] [i_3]) ^ (arr_7 [i_0 + 3] [i_0] [i_1 + 1] [i_2])))) ? (max((arr_7 [i_0 - 3] [i_0 - 3] [i_1 + 2] [i_3]), (arr_7 [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1]))) : (((arr_7 [i_0 - 3] [i_1] [i_1 + 1] [i_0 - 3]) & (arr_2 [i_0 + 3])))));
                        var_13 = (max(var_13, (((((-(arr_8 [8] [i_0 + 3] [i_1] [i_1 + 3]))) == ((max((arr_8 [i_0] [i_0 + 2] [2] [i_1 + 3]), (arr_8 [i_0] [i_0 - 2] [i_1 + 1] [i_1 - 1])))))))));
                        var_14 = ((~(1 <= 1)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_14 [i_4] = ((~((max((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [1]), (arr_10 [7] [7] [4] [7] [7] [i_4]))))));
        var_15 = ((!(arr_3 [i_4])));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_16 = (((((~(arr_24 [i_8] [i_7] [5] [i_5])))) ? (((-(arr_18 [i_5])))) : (~18446744073709551602)));
                        arr_25 [i_5] = 1;
                    }
                }
            }
        }
        var_17 = ((((((arr_19 [3] [i_5]) ? var_2 : var_8))) ? var_9 : (!var_5)));
        var_18 = (((~132) ? (!1152920405095219200) : (1 - 1)));
    }
    #pragma endscop
}
