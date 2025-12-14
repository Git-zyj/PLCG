/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_10 ^= (((((0 ? 127 : 65535))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : ((var_5 ? (arr_1 [i_0]) : var_0))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_11 += (arr_3 [i_1]);
        var_12 = ((((min(-var_5, (arr_4 [i_1] [i_1])))) ? (arr_5 [i_1]) : (min(var_8, (-2147483647 - 1)))));
        var_13 ^= ((((max(((~(arr_6 [i_1]))), (arr_6 [i_1])))) ? (arr_6 [i_1]) : (arr_0 [i_1])));
        arr_7 [i_1] = (!(arr_0 [i_1]));
        var_14 = ((var_5 | (((((((arr_4 [i_1] [i_1]) ? var_2 : (arr_1 [i_1])))) ? (((!(arr_4 [i_1] [i_1])))) : (arr_0 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_2] [3] [i_2] [i_2] = (((-2147483647 - 1) ? (arr_9 [i_2]) : (((arr_12 [i_2]) ? (arr_13 [i_2] [i_2] [i_2]) : (arr_13 [i_4 - 1] [i_3 + 2] [i_4])))));
                        var_16 = var_0;
                        var_17 = var_1;

                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_18 -= min((arr_12 [i_3]), (!1));
                            arr_20 [7] [i_2] [i_4] [i_4 + 1] = arr_8 [i_2];
                            arr_21 [i_2] = (((((((((arr_9 [i_2]) ? var_5 : (arr_12 [i_2])))) ? (((max(var_6, (arr_14 [i_6 + 1]))))) : var_5))) ? ((((!(arr_8 [i_3 + 1]))))) : 268369920));
                            var_19 = (max(var_19, (((var_3 ? (((!(arr_4 [i_4] [i_2])))) : (max(var_2, (~var_8))))))));
                            arr_22 [i_3] [i_2] [i_4] = (!var_9);
                        }
                        var_20 -= (arr_10 [4]);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((-(arr_6 [i_7])));
        arr_28 [i_7] = (((((~(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (arr_0 [i_7]) : (((arr_13 [i_7] [i_7] [i_7]) ? (arr_14 [i_7]) : (arr_13 [i_7] [10] [i_7])))));
    }
    var_21 = var_7;
    #pragma endscop
}
