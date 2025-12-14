/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_2 ? (max(var_15, var_7)) : (var_18 > var_19))), ((min(20636, ((-13 ? -21 : 110)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [6] [i_0] = (max(((((((arr_8 [0] [0] [i_2] [i_2]) - var_7))) ? ((137 * (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (-2147483647 - 1))), -12));
                            arr_10 [10] [i_1] [9] [i_1] = (((-(arr_0 [i_0]))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = (((-(arr_5 [i_3] [i_2] [i_2] [i_2]))));
                            arr_12 [i_0] [1] [i_0] [i_0] = 153;
                            arr_13 [i_0] [i_0] [3] [i_0] [i_0] = ((((max(((!(arr_7 [i_0] [i_1] [i_2] [i_1]))), ((!(arr_6 [i_0] [i_1] [i_2] [9])))))) <= (11 && 5731028730322982675)));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = -13;
                arr_15 [i_1] [9] = ((7088689927377634369 + ((((min(-1154219653, var_16)))))));
                arr_16 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                arr_22 [i_4] [15] [i_4] = 11;
                arr_23 [i_4] = var_16;
                arr_24 [i_4] = ((arr_21 [i_4] [i_5]) ? var_12 : (((!(((-(arr_19 [i_4] [i_4]))))))));
                arr_25 [6] [6] = ((((max(9, (arr_19 [i_5] [i_4])))) % ((max(10, (arr_19 [i_5] [i_5]))))));
            }
        }
    }
    var_21 = ((((var_0 % (1 + 419657303))) >> (var_16 - 2968253334420991500)));
    var_22 = var_6;
    #pragma endscop
}
