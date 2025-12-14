/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_4 ? (var_5 || -5670) : (min(var_8, var_3)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((-1412023349 ? (arr_0 [1]) : (0 | 206)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [0] [i_1] [i_2 - 1] = (((((~(arr_3 [i_2 + 2] [i_1 + 1] [i_1 + 3])))) ? ((max((arr_3 [i_2 + 2] [i_1 + 3] [i_1 + 3]), var_14))) : (((arr_3 [i_2 - 1] [i_1 + 1] [i_1 - 1]) ? var_9 : (arr_3 [i_2 - 1] [i_1 + 3] [i_1 + 2])))));
                    arr_7 [i_0] = ((((arr_3 [13] [i_0] [i_0]) ? (arr_4 [i_0] [10] [i_0] [i_0]) : -1405493504)));
                }
            }
        }
        var_17 = (min(var_17, (max(((var_2 & (arr_4 [i_0] [i_0] [i_0] [i_0]))), (arr_4 [0] [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_10 [i_3] |= (arr_8 [i_3] [i_3]);
        var_18 = (min(var_18, ((max((!1405493504), (((arr_9 [i_3]) ? (arr_8 [i_3 - 2] [2]) : (arr_4 [i_3] [i_3] [i_3] [i_3]))))))));
        var_19 = (max(var_19, (((arr_8 [17] [i_3 + 1]) ? ((~(arr_8 [i_3] [i_3 - 2]))) : (((arr_8 [2] [i_3 - 2]) | var_0))))));
        var_20 = (arr_5 [i_3 - 1]);
    }
    var_21 = (((((var_11 ? (max(var_9, var_9)) : (var_2 || var_2)))) || var_8));
    #pragma endscop
}
