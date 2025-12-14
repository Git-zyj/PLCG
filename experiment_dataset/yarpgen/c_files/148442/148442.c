/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((var_6 ? var_2 : var_8)))), (min(5, 91))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (((!(arr_0 [i_0])))) : ((min((arr_0 [i_0]), (arr_0 [10])))))) : (((((var_9 ? var_1 : -2147483629))) ? (var_6 * 57355) : (arr_0 [i_0])))));
        arr_3 [0] [i_0] = (arr_0 [i_0]);
    }
    var_12 = min((max(var_2, var_2)), var_4);
    var_13 = (((min((~var_7), (~var_8))) & var_10));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [4] [i_2] [i_3] = (max((arr_9 [i_3 - 2] [i_2 - 1] [i_1]), (((arr_10 [i_3 + 1] [i_3 + 3]) ? (arr_10 [i_3 - 1] [i_3 - 1]) : (arr_10 [i_3 + 1] [i_3 + 1])))));
                    var_14 = (min(var_14, var_9));
                    arr_12 [i_1] [i_1] [i_1] [21] = (((arr_10 [i_1] [i_2 + 1]) ? (min(17010479881019634248, 8165)) : (((arr_10 [i_2 + 1] [i_2 + 1]) ? var_10 : (((-(arr_8 [17]))))))));
                }
            }
        }
    }
    #pragma endscop
}
