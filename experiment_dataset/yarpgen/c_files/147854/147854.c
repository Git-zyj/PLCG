/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_2;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = ((arr_2 [i_1]) != ((-(arr_2 [i_0]))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [12] [i_1] [i_2] = (~1);
                        arr_12 [i_0] [i_2] [i_2] = ((((min((arr_4 [i_2] [i_0]), 1023))) ? ((18446744073709551615 ? (((max(17350, (arr_9 [i_0] [i_1] [i_2] [1]))))) : (min((arr_4 [i_0] [i_0]), -1)))) : ((((!(arr_4 [i_3] [i_3])))))));
                        arr_13 [i_1] [i_1] [1] [i_2] [9] = (max(1, (((((-(arr_0 [i_2])))) ? (arr_7 [9]) : (((arr_5 [4] [i_2] [i_1]) ? (arr_0 [i_0]) : var_5))))));
                        arr_14 [i_0] [i_2] [i_0] [i_0] = ((arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1]) || var_7);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_21 [i_5] [i_4] [i_4] [i_0] = (min(((var_1 ? (((2094886693139173100 ? (arr_0 [i_0]) : var_2))) : ((var_2 ? (arr_4 [i_0] [i_1]) : (arr_1 [0]))))), (((-(arr_20 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]))))));
                        arr_22 [i_0] [i_1] [i_1] [i_4] [12] [i_5] = max((((!(arr_19 [i_0] [2] [i_0] [i_4] [i_4] [i_0])))), (max(var_6, var_0)));
                        arr_23 [i_4] [i_4] = -26132;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] = (arr_25 [i_6]);
        arr_27 [i_6] [i_6] = 57383;
        arr_28 [i_6] |= (!((!(!var_8))));
    }
    var_12 = ((((74 ? ((var_7 ? 0 : var_7)) : var_3)) * 30064771072));
    #pragma endscop
}
