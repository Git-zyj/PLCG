/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 == 0) | (3 / var_9))) | 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [19] [i_0] [i_0] = ((((((var_3 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1]))))) ? (var_5 >= var_6) : ((var_6 ? var_3 : var_5))));
                var_13 = min((max(((min((arr_0 [i_0]), (arr_3 [i_1])))), ((-1 ? var_1 : var_7)))), (arr_2 [i_1] [i_1 + 1]));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_14 += ((((((var_9 ? var_11 : var_5)) != ((min(-4, var_10))))) ? (((arr_14 [2] [i_3 - 1] [1]) ? (arr_14 [i_2] [i_3 + 1] [i_2]) : (arr_14 [i_4] [i_3 - 1] [i_4]))) : var_8));
                    var_15 = (min(var_15, (((((((((((arr_10 [i_2] [i_3 + 1] [i_4]) ? var_6 : (arr_0 [i_4]))) + 2147483647)) << (((arr_1 [i_3]) - 3460))))) ? ((var_0 ? ((max(var_2, 3))) : ((-1 ? var_3 : var_9)))) : -2518615441787852914)))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_16 = (((((var_11 ? var_8 : (((var_7 ? -1 : var_7)))))) && (((14462 >= -1330697639) == (0 >= var_2)))));
        var_17 ^= ((((max((((arr_3 [i_5 + 1]) && var_9)), ((var_9 >= (arr_15 [i_5])))))) & (((31 ^ var_6) ? (var_10 | var_6) : (-32767 - 1)))));
    }
    #pragma endscop
}
