/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (((-var_3 ? var_6 : (520093696 / 3352113795))) * ((var_12 ? (var_18 / 2147450880) : -var_12)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((((var_15 ? var_19 : (arr_0 [i_0] [i_0])))) || var_8))), (((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0 + 1]) : (arr_0 [i_0] [i_0 - 2])))));
        arr_3 [i_0] [i_0] = ((((13534 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) - ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_22 = ((65535 << (((2716942977 - 375) - 2716942601))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [7] = ((3111481223 >> (((((var_14 * (arr_4 [i_1] [3])))) - 529771237))));
        arr_8 [i_1] &= -51416;
        arr_9 [i_1] = (((((!(arr_6 [i_1])))) >> (((((arr_0 [i_1] [i_1]) * (arr_0 [i_1] [i_1]))) - 661004099))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                {
                    var_23 = (arr_5 [i_3]);
                    arr_16 [i_3] [i_2] [i_2] [i_3] = ((((max(((((arr_5 [i_1]) <= (arr_14 [i_1] [i_1])))), var_9))) * (arr_15 [i_3] [i_2] [3] [1])));
                    arr_17 [i_1] [i_2] |= ((!((!(arr_12 [i_3 - 2] [i_2] [i_1])))));
                    arr_18 [i_3] [i_3] = (((((!((((arr_4 [i_1] [i_1]) * (arr_1 [i_1] [i_3]))))))) > (arr_5 [i_2])));
                }
            }
        }
    }
    var_24 = -var_3;
    #pragma endscop
}
