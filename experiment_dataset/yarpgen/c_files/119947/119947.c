/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((8266665448961726855 + (((var_4 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))) ? (((((max(166, 1))) ? 1 : var_2))) : (min((var_7 ^ -113), (arr_0 [i_0])))));
        var_13 = (min(var_13, ((max(1416852390, 0)))));
        arr_3 [i_0] = (max((((max(-3174052327678022115, 740319478)) - 1)), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!(!var_6)));
        arr_8 [i_1] [i_1] = -1543019698;
        var_14 = (arr_5 [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_2] [i_2] = (max((var_9 + 6308698017114276438), ((((arr_5 [i_2 - 1]) != (arr_5 [i_2 + 1]))))));

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_23 [i_2] [i_2] [i_2] [14] = -10399;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_27 [i_2] [i_2] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4] = (((arr_22 [i_2] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_2]) / (arr_22 [i_2] [i_5] [i_3] [i_4 + 2] [1] [i_2])));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_10;
                            var_15 = 40653276;
                        }
                        arr_29 [11] [11] [i_4] [i_2] = ((-(arr_18 [i_2] [i_3])));
                        arr_30 [i_3] [i_2] = (((arr_9 [i_2 + 1]) ? var_9 : (arr_9 [i_2 + 1])));
                    }
                    var_16 = (max(var_16, ((-var_5 | (((((max(var_6, (arr_18 [i_2] [i_3]))) == ((((arr_18 [i_3] [i_4 + 2]) ? 155 : var_7)))))))))));
                    arr_31 [2] [12] [12] [i_2] = (((~(arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
                var_17 = (max(((max(10399, -1543019699))), (((arr_13 [i_2 - 1]) - (arr_13 [i_2 + 1])))));
                var_18 = ((-42 ? (((arr_26 [i_2 + 1] [i_2 + 1] [i_3] [i_2 - 1] [i_2] [i_3]) ? var_7 : (arr_17 [i_3]))) : (max(166, -1543019699))));
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
