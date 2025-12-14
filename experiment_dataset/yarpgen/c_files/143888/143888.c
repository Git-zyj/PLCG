/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_1])))) ? (arr_3 [i_0] [i_0]) : (~var_11)));
                var_12 = (max(var_12, (((((((max(var_3, 127))) - ((var_4 ? var_5 : 91)))) / (max(((var_4 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))), ((var_2 / (arr_3 [i_0] [i_0]))))))))));
                arr_6 [i_0] [i_1] = (((((var_3 ? ((-42 ? -8 : 23)) : var_0))) || ((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                var_13 = (min(var_13, ((((arr_4 [2] [i_1]) | ((max((arr_3 [i_0] [i_1]), (arr_3 [1] [i_1])))))))));
            }
        }
    }
    var_14 = ((!(((-98 ? 20 : -64)))));

    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [4] = var_6;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_20 [i_4] [i_3] = ((!((((arr_14 [i_2] [0] [0]) ? (arr_15 [i_5 + 1] [i_5 + 1]) : (arr_12 [i_2 + 1]))))));
                        var_15 = (max(var_15, (((53 ? (((arr_17 [11] [i_3] [i_4] [i_5]) ? (arr_14 [i_4] [i_4] [i_4]) : (arr_10 [i_2 - 2] [i_3] [i_3]))) : (arr_18 [i_2 - 2] [i_2 - 3] [i_2 - 1]))))));
                        var_16 = ((-(((arr_11 [11] [i_3] [i_3]) + (arr_14 [i_5 + 1] [i_5 + 1] [i_2 + 1])))));
                        arr_21 [i_4] [i_3] [i_3] [3] = ((((((((var_10 ? 75 : (arr_19 [i_2] [i_3] [i_4] [i_2])))) ? (arr_15 [i_2 - 3] [i_5 + 1]) : ((var_1 ? -16 : (arr_8 [i_2] [11])))))) ? (arr_15 [i_2] [i_3]) : (((arr_7 [i_2 - 3]) % 22))));
                    }
                }
            }
            var_17 -= ((!((max(var_4, (arr_11 [i_2 - 1] [i_2 + 1] [i_3]))))));
            var_18 = (min(var_18, (((~((var_5 | (arr_8 [i_2 + 1] [i_3]))))))));
            arr_22 [1] [i_2] = var_6;
        }
        arr_23 [i_2] = var_8;
    }
    var_19 = (min(var_19, var_2));
    #pragma endscop
}
