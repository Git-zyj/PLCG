/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [14])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = (max(((var_3 ? (((arr_4 [i_0 + 1] [7] [i_2]) ? (arr_2 [i_0]) : (arr_4 [21] [22] [i_2]))) : (arr_3 [i_0 + 1] [i_1 - 1]))), ((1457578520198137169 ? 10892 : 8758897282062114411))));
                    var_14 = (min(var_11, (((min((arr_6 [i_1 - 2]), (arr_6 [i_0 + 1]))) ? ((min((arr_1 [i_0 - 1]), var_12))) : var_5))));
                    var_15 = (arr_0 [i_1 - 1] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min((-1343244406 || 10701574251709588500), ((var_10 ? ((52 ? 15398523565797496860 : 854943972)) : (arr_10 [i_4] [i_0] [i_0] [i_1] [i_1] [i_0])))));
                                var_17 = (min(var_17, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_18 = ((!(arr_2 [i_5])));
        var_19 = var_9;
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_21 [11] [i_6 + 1] [13] [11] = arr_9 [i_6 - 1] [5] [i_6 - 4] [i_6] [i_6 - 4];
                    var_20 = (arr_0 [i_5] [i_6 - 4]);
                    arr_22 [i_5] [i_6] [i_7] = (min((arr_18 [i_6 + 2]), (max((arr_18 [i_6 - 2]), (arr_18 [i_6 - 1])))));
                    arr_23 [i_5] = (!((min((arr_16 [i_7]), ((~(arr_19 [5] [i_6] [i_7] [i_7])))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_21 = ((min(((min((arr_12 [i_8]), (arr_0 [i_8] [i_8])))), (arr_26 [i_8]))));
        arr_27 [i_8] = min((arr_9 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [5]), (max((arr_4 [1] [i_8 + 1] [i_8 + 1]), (arr_25 [i_8] [i_8 + 1]))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {
                    var_22 = (max(var_22, ((((arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_9] [i_9] [i_10]) ? (((arr_9 [i_8 + 1] [i_8 + 1] [4] [i_9] [i_10 + 3]) ? (arr_9 [i_10] [20] [i_10] [i_10 - 1] [i_10 + 1]) : (((1 ? 77 : 2115482127))))) : (arr_34 [i_8] [i_8 + 1] [10] [i_10 + 3]))))));
                    var_23 = (min(var_23, (arr_2 [i_10 - 2])));
                }
            }
        }
        var_24 = (min(((((!4807440871337941358) ? (arr_28 [i_8] [i_8]) : (arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])))), (((arr_4 [i_8] [15] [i_8 + 1]) ^ (arr_4 [i_8 + 1] [i_8 + 1] [16])))));
    }
    var_25 = var_11;
    var_26 = (min(var_4, var_9));
    #pragma endscop
}
