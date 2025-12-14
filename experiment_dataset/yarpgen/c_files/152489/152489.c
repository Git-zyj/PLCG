/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 1] = (((((!(var_9 && var_8)))) | (1 != 211565834)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_20 = (var_6 ^ var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = (((!var_3) > (var_1 > 85)));
                                var_21 = ((!(var_4 && 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = (-60 - 21);
                                arr_22 [i_0] [11] [i_2] [i_5] [i_1] = ((!(!var_17)));
                                var_23 &= ((((var_0 != (arr_10 [i_0] [i_1] [i_1] [i_5])))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((((((arr_0 [i_0] [i_0]) == (arr_20 [8] [i_1] [i_2])))) < ((((arr_19 [i_0] [i_1] [7] [8] [i_6]) || 1549)))));
                            }
                        }
                    }
                    var_24 = ((!(-3311284644409626968 + var_15)));
                    var_25 = (((~var_17) <= (~var_8)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (((((((arr_1 [0]) + var_1))) + (((arr_24 [0] [0]) - (arr_21 [i_0] [i_0] [i_1] [i_7] [i_7] [i_7] [i_7]))))))));
                    arr_26 [i_1] [i_1] [i_1] = ((!(!2101181598)));
                    arr_27 [i_1 - 3] [i_1] = ((~((-(arr_21 [i_0] [i_0] [i_0] [2] [i_0] [i_0] [i_0])))));
                    var_27 = (min(var_27, ((((908581852 | -13902) ^ (2 - var_14))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (((~(((101 | 0) & ((18214 >> (8412089497917298133 - 8412089497917298118))))))))));
                    arr_30 [i_1] [i_1] [i_1] = ((!(((~(147 || 5))))));
                    var_29 += (((--286652979) + ((((((arr_24 [i_0] [i_0]) + (arr_13 [i_0] [6] [9] [11] [i_1 + 1] [i_8]))) + 0)))));
                    var_30 = (max(var_30, (((((((((arr_5 [i_1]) - var_14)) - (((arr_5 [i_0]) + 220))))) == (((var_2 & -304350901436033624) & (~var_18))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_31 = ((((((var_7 << (((arr_34 [i_10]) - 2417490503)))) >> (((((arr_32 [i_9]) | (arr_32 [i_9]))) - 129)))) <= (((!(!2057685099))))));
                var_32 = ((((((2342474260 || (arr_33 [i_9] [i_10] [i_10])) && (!var_6))))));
                arr_35 [0] [i_9] [i_10] = ((~(((-96 - -13667) + (var_8 + var_10)))));
            }
        }
    }
    #pragma endscop
}
