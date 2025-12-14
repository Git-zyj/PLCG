/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_18 = ((-((-(max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((-(max((min((arr_1 [i_0] [i_0]), var_6)), (((arr_1 [i_0] [i_0 + 1]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_2 + 1] [i_2] = ((-(min((arr_10 [i_2] [i_2] [i_2]), var_5))));
                    arr_12 [i_2] [i_1] [i_2] = ((-var_16 ? ((~(max(var_16, (arr_7 [i_2]))))) : (arr_10 [i_2] [i_2] [i_3 + 1])));
                }
            }
        }
        arr_13 [i_1] = var_15;
        var_19 = ((((((arr_7 [i_1]) | (((max((arr_10 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1] [i_1])))))))) ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : ((~(arr_5 [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 = (min((((-(arr_8 [i_4])))), ((~(1261732668 - var_11)))));
        var_21 = ((arr_14 [i_4] [i_4]) ? -8114 : ((-(arr_7 [i_4]))));
    }
    var_22 = (max(var_6, (((((var_14 ? var_11 : 6939172797181658242))) ? (min(var_14, var_6)) : (((var_13 ? -9 : var_10)))))));
    var_23 = min(((((2016856780 ? var_15 : var_11)) << ((((var_13 ? var_16 : -1872572261)) - 14679)))), -8114);
    var_24 = ((var_13 << (var_2 - 4097)));
    #pragma endscop
}
