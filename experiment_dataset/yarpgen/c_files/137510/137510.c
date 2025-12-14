/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-974981658 ? 768 : 2499434967337183379));
    var_15 = (((((var_2 ? var_6 : var_1))) ? (((((var_9 ? -51 : 12288))))) : ((33168 ? (((var_5 ? var_9 : var_5))) : ((61837 ? var_8 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [9] [i_1] [i_1] = -1;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [i_3] = (((arr_5 [i_2 + 1] [i_2 - 1] [i_3 + 2]) ? ((((((arr_4 [i_2 + 1] [i_1] [i_0]) ? (arr_0 [12]) : (arr_0 [i_1])))) ? (((arr_8 [i_3] [i_3] [i_0]) ? 117 : (arr_0 [i_0]))) : ((((arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 1]) ? (arr_4 [i_0] [1] [i_0]) : (arr_3 [i_2] [0])))))) : var_1));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((((((var_4 ? (arr_0 [13]) : var_0)))) ? ((var_5 ? ((var_8 ? (arr_9 [i_0] [i_1] [i_0] [i_1]) : var_8)) : (((123 ? 52710 : 0))))) : 141));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_1] = 0;

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] = (arr_1 [i_5 - 1]);
                            arr_20 [i_5] [i_1] [i_2] [i_4] |= (arr_8 [i_2 - 1] [i_4] [i_5 - 1]);
                        }
                        arr_21 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = (arr_0 [i_2 + 1]);
                        arr_22 [i_2] [4] = ((((((arr_7 [i_4] [i_1]) ? 4 : 1058300552150285869))) ? 18360302960654232066 : ((((arr_7 [i_4] [i_1]) ? (arr_7 [i_4] [i_1]) : var_7)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_31 [i_8] = -448909175;
                    arr_32 [1] [11] = (((var_5 ? -1 : ((var_9 ? var_3 : (arr_25 [0]))))));
                }
            }
        }
    }
    var_16 = ((((((13742033214326826191 ? 0 : -6199948526470626333))) ? (((var_0 ? var_12 : var_9))) : var_13)));
    #pragma endscop
}
