/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(!var_4)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_5;

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 -= ((+(max((arr_0 [i_0]), (arr_3 [i_1] [i_1] [7])))));
            arr_4 [i_0] [i_1] [i_0] = ((((max((min(var_16, (arr_1 [i_1] [i_0]))), var_5))) ? ((((!(arr_3 [10] [i_1] [i_0]))))) : (6975294988276923608 * 1)));
            arr_5 [i_0] &= var_2;

            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                var_21 = (arr_1 [i_0] [9]);
                var_22 = max(((+(max((arr_6 [i_1] [i_1] [i_0]), 3863)))), (!31));
                var_23 = (arr_7 [i_1] [i_1] [i_2 - 2] [i_1]);
            }
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                arr_14 [i_4] [i_4] [i_4] = (((((arr_7 [i_3] [i_3] [10] [i_3]) ? (var_8 * 1) : (arr_7 [i_4 - 3] [i_4 - 3] [i_4 + 1] [i_4 - 3])))) ? ((((!(arr_3 [i_4] [i_4 - 1] [i_4]))))) : (((1 ^ var_3) + (arr_1 [i_4] [i_0]))));
                var_24 *= (arr_6 [i_0] [i_0] [i_0]);
                arr_15 [i_0] [i_3] [i_4] = (((max((((arr_7 [i_0] [i_0] [i_3] [i_4]) ? var_14 : var_0)), var_6)) + (((~(18446744073709551615 > var_12))))));
            }
            arr_16 [i_0] [i_0] [i_0] = 1;
        }
        var_25 = ((var_14 + ((1 ? var_0 : (max(var_9, 14067214191917877879))))));
        arr_17 [i_0] [i_0] = (arr_1 [5] [i_0]);
        var_26 = (max(8128, -4023393365736797996));
    }
    #pragma endscop
}
