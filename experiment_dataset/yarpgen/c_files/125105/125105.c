/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((57 >= ((1 ? var_10 : var_18))))), (((16367038084286064135 != 48464) | var_15))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= ((((((arr_1 [i_0]) > (arr_1 [i_0])))) > (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (((~(arr_5 [i_0] [i_1] [i_1]))));
            var_21 = ((~((65533 ? (arr_5 [i_0] [i_0] [i_1]) : 24))));
            arr_7 [i_1] = var_8;
            arr_8 [i_0] [i_0] = (-84 == 172);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] = 5878777749205971612;
            arr_12 [i_0] [i_0] |= (-40 ^ var_5);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_15 [3] = ((((max((arr_2 [i_0]), (arr_2 [i_3])))) || (arr_10 [i_0])));
            arr_16 [i_3] = (arr_0 [i_0]);
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_21 [i_0] = var_2;
                arr_22 [4] [i_4] [i_0] [i_0] |= ((max((arr_19 [15] [i_4] [i_0] [15]), var_0)));
                var_22 = 2457636460;
            }
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                var_23 = ((!(arr_20 [i_6 - 1] [i_4] [i_6] [3])));
                var_24 = (arr_20 [i_0] [i_4] [0] [i_6 + 1]);
            }
            arr_27 [i_4] [1] = (arr_18 [i_0] [i_4] [i_0]);
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_31 [i_7 + 2] &= 2047;
        arr_32 [i_7] = ((!(arr_29 [i_7 + 1])));
    }
    var_25 = (min((var_11 / -var_17), var_0));
    var_26 = var_8;
    var_27 = (((min(((255 ? 1909530517 : 536870911)), var_15)) ^ var_15));
    #pragma endscop
}
