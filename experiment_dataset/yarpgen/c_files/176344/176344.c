/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((((((4294967273 ? 1 : (arr_1 [i_0]))) << (var_5 + 1302405892)))) ? ((~(min((arr_0 [i_0]), (arr_1 [i_0]))))) : ((((((arr_2 [i_0]) ? var_10 : (arr_0 [i_0]))))))));
        var_13 = ((((~(arr_2 [i_0]))) | ((125 ? (arr_2 [i_0]) : 58608))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((~(((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : 21234))));
        var_14 = (arr_7 [14] [14]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_1] [i_2] [i_1] = var_5;
                    arr_16 [i_3] [i_2] [i_3] = arr_9 [i_1] [i_2] [i_3];
                    arr_17 [i_3] = var_7;
                }
            }
        }
        arr_18 [3] = ((min(((var_3 % (-2147483647 - 1))), (!var_11))) + (arr_13 [i_1] [1]));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_15 = (((~var_12) << (-32758 + 32767)));
            var_16 = (arr_23 [i_4 + 1] [i_5]);
            arr_24 [i_5] = ((((125 || (arr_12 [i_4] [i_5]))) ? (arr_3 [i_4] [i_4]) : 0));
        }
        var_17 = (arr_6 [i_4 - 1]);
        arr_25 [i_4] = var_11;
    }
    var_18 = (((!-32765) <= -1));
    var_19 = var_12;
    var_20 = var_7;
    #pragma endscop
}
