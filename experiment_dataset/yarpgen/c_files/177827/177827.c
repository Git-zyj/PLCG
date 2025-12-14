/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = (((min((min(24379, var_0)), ((((arr_0 [1]) <= (arr_2 [i_0]))))))) ? ((((((arr_2 [i_0]) ? 1 : var_6))) ? ((var_8 ? var_7 : 761849120)) : var_10)) : (((((1354721766 != (arr_1 [i_0])))))));
        arr_5 [i_0] = (((!((((arr_0 [i_0]) ? 0 : var_0))))));
        arr_6 [i_0] [1] = -26936;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_1] = (min(1, 1));
                arr_12 [i_1] [i_2] = ((var_10 > ((((3640335518919620722 + -1354721780) && 1)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [22] [i_3] [i_3] = ((((((var_4 + (arr_18 [i_3] [i_3] [1] [i_3])))) ? (arr_8 [i_1] [1]) : ((0 ? 2147483647 : var_5)))) - (arr_17 [i_3]));
                            arr_20 [i_1] [11] [i_3] [i_4] = (((((max(1, (arr_13 [i_2] [i_2] [i_2] [11]))) == (1 < var_0))) ? (max((arr_10 [i_1] [1] [i_3]), (((arr_14 [i_3] [i_3]) ? var_11 : (arr_14 [i_3] [i_3]))))) : ((max(var_4, var_10)))));
                            arr_21 [1] [i_3] [i_3] = (arr_10 [i_1] [i_4] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_27 [i_1] [i_1] = (arr_14 [i_6] [i_6]);
                            arr_28 [i_1] [i_1] [1] [i_5] [i_5] [i_6] = (((((var_4 ? (arr_17 [i_6]) : (arr_17 [i_5])))) ? (1355844985618821822 - 32) : ((max((~var_13), 1)))));
                            arr_29 [i_6] [i_5] [i_2] [i_1] = ((var_2 ? (arr_26 [i_1] [7] [i_5] [i_6]) : (((max(225, var_1))))));
                        }
                    }
                }
                arr_30 [i_2] = ((((arr_10 [i_1] [i_2] [i_2]) ? var_8 : (arr_10 [i_1] [i_1] [i_2]))));
            }
        }
    }
    #pragma endscop
}
