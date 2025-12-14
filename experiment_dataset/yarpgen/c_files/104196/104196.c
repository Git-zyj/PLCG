/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (var_9 <= var_0);
                var_11 = (max(var_11, ((max((((152 >= (max(var_6, (arr_0 [i_0])))))), ((((((-8635800005002340668 + 9223372036854775807) >> 3))) ? (min(1202246432, (arr_2 [i_1] [i_1]))) : (arr_2 [i_0] [i_1]))))))));
                arr_5 [i_0] [1] [i_0] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_12 = min((arr_6 [i_2]), (((arr_7 [i_3 - 1] [i_3 - 1]) ? (arr_10 [5] [i_3 + 2] [i_2 - 1]) : var_6)));
                var_13 = (max(var_13, var_9));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [1] [1] &= (-9223372036854775807 - 1);
                            var_14 &= (max(-var_2, ((((((-9223372036854775807 - 1) ? var_10 : -3187575074536442286))) ? ((0 ? (-9223372036854775807 - 1) : (arr_9 [2] [1] [i_4]))) : (arr_7 [i_4] [i_3 + 2])))));
                            var_15 -= ((!(arr_14 [1] [4])));
                            var_16 = (((((var_7 ? 755797612 : (((-2065071022 / (arr_11 [5] [9] [i_4]))))))) ? ((~(max(1, (arr_8 [9] [i_2]))))) : ((((arr_7 [i_2 - 1] [i_2 - 1]) ? 1 : (arr_16 [i_2 - 1] [i_2 - 1] [i_3 + 2] [i_3 + 2]))))));
                            var_17 = (((min(0, 8589934336)) >> (3538039340 - 3538039298)));
                        }
                    }
                }
                arr_19 [i_2] [i_2] = var_6;
                arr_20 [6] [i_2] [i_3] = (arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1]);
            }
        }
    }
    var_18 = (((((~((max(var_10, 143)))))) / ((var_6 ? var_3 : (~var_7)))));
    var_19 = (min(var_1, var_7));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_20 = (((arr_10 [i_6 + 2] [i_6 - 1] [11]) * var_0));
        arr_23 [i_6] = var_0;
        arr_24 [i_6] [i_6] = (var_7 % -1466648023);
        arr_25 [7] = var_0;
        arr_26 [i_6] [i_6] = (arr_6 [6]);
    }
    #pragma endscop
}
