/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-523373312098230085 >= 24465) * 24208));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_17 = (min(var_17, (584893804 ^ -9)));

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    arr_10 [i_0 - 2] [i_2] [i_2] [i_2] [i_3] = (2007 <= 2147483647);

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (8454244829928015549 + (arr_12 [i_3] [1] [i_3] [i_3 - 1] [i_3]));
                        var_19 = (((arr_1 [i_1]) ? var_14 : (arr_8 [i_2] [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 - 2])));
                        var_20 = var_15;
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = (arr_7 [i_0 - 3] [i_2] [i_0 - 3] [i_0 + 3]);
                        var_21 = (min(var_21, (((-2 ? -282237277 : 6812)))));
                    }
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_17 [i_2] [i_1] [i_2] [i_5 - 2] = 6832;
                    arr_18 [4] [i_0] [i_0] [i_2] [i_2] [9] = 192;
                    var_22 = ((((arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [5]) ^ 14238349632773849243)));
                }
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_23 [i_0 + 3] [i_0] = (((arr_4 [i_0 + 3]) ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0]) : 13));
                var_23 = ((-27024 ? (~1) : 13));
            }
            var_24 |= 33554400;
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_27 [i_0 - 1] [i_0 - 1] [i_7] = (126 + 27024);
            var_25 = (max(var_25, 1));
        }
        arr_28 [i_0] = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 3]);
    }
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        var_26 = ((((((1934792861 || -1) ? (arr_6 [3] [i_8 - 3] [i_8 - 3]) : (((arr_24 [i_8] [i_8 - 2] [i_8]) / -8448764831984252328))))) ? 1 : var_9));
        var_27 = (arr_22 [i_8 - 3] [i_8]);
        var_28 = ((111 ? 6962 : 250));
        arr_31 [8] |= 6459012552303785211;
    }
    var_29 = var_9;
    var_30 = (18376133475309005678 == 0);
    #pragma endscop
}
