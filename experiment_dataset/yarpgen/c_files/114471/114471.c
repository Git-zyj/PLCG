/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = (((min((((-(arr_1 [i_0])))), (min(10857639789952793137, 7589104283756758479)))) <= (((((arr_0 [i_0 + 1]) == 15326751308543750872))))));
        arr_4 [i_0] = (((var_9 ? (min(var_6, var_7)) : 20)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_10 -= (((var_3 + (arr_5 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_11 += ((!(arr_12 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                    arr_14 [i_1] [i_1] [i_3] = (+(max((arr_11 [i_1] [i_1] [i_2] [i_1]), (((arr_11 [i_3] [i_2] [i_3] [i_2 + 2]) ? (arr_5 [i_2]) : (arr_9 [i_1] [i_2] [i_3]))))));
                    var_12 = -16;
                }
            }
        }
        var_13 = (max(var_13, ((((arr_10 [i_1]) ? var_2 : (min((arr_7 [i_1]), 3356803882571474073)))))));
        var_14 = ((((max(-30, 9223372036854775807))) ? ((((((12 ? 70 : 3119992765165800744)) == var_2)))) : ((-(((arr_5 [i_1]) ? var_0 : var_3))))));
        var_15 = (arr_13 [i_1] [i_1] [i_1]);
    }
    var_16 = (max(var_16, ((((~2147483647) & (((var_9 ? var_5 : var_6))))))));
    #pragma endscop
}
