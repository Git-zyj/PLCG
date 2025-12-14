/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (min((((arr_3 [i_0]) / (((var_5 ? var_0 : -11815))))), ((((arr_1 [i_0] [i_0]) - var_10)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [11] = (((((((min(-86, 1))) ? (max(var_4, var_8)) : (var_11 >= var_2)))) ? var_10 : (max(3807128479499630396, (~24053)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_3] = -2;
                                arr_17 [8] [i_3] [i_2] [i_1] [i_0] = (min(1, (min(1416, 28767))));
                                arr_18 [i_0] [i_1 - 3] [i_2 + 1] [i_2] [i_3] [5] = ((-((-8192 ? 127 : ((max(36187, 123)))))));
                                arr_19 [12] [7] [5] [i_0] = 241;
                                arr_20 [i_0] [4] [5] [i_3] [5] [i_4] [i_4] = (((((var_2 ? var_3 : var_5))) ^ ((((31 && (arr_15 [i_0] [i_1] [i_2 - 2] [i_3 + 1] [i_1]))) ? (max(18446744073709551615, 16642)) : (arr_12 [i_3 + 2] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_27 [i_6] [i_5] [i_2] [i_1] [9] = ((((var_2 ? var_7 : (arr_25 [i_1] [i_5] [i_6])))));
                                arr_28 [i_6] [i_5] [i_2 - 2] [i_1] [i_0] = var_3;
                                arr_29 [i_0] [i_1] [i_2] [i_5] [i_5] = ((3807128479499630396 ? (((242 ? 14 : 2129241513))) : ((18 ? -4977 : -8557139416197678937))));
                                arr_30 [i_0] [i_1 + 1] [i_0] [i_2] [11] [i_6] = 0;
                            }
                        }
                    }
                    arr_31 [i_0] = var_5;
                }
            }
        }
        arr_32 [i_0] [i_0] = var_7;
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_35 [19] = ((((((arr_33 [i_7 + 2]) ? (arr_33 [i_7 + 2]) : 4042120296861924862))) * ((((4545 ? -25684 : (arr_34 [i_7 + 1] [i_7]))) * (((-1524449295 ? 0 : -3807128479499630396)))))));
        arr_36 [i_7 + 2] = (max((((arr_33 [i_7 - 1]) + (arr_33 [i_7 - 1]))), (arr_33 [i_7 + 2])));
        arr_37 [i_7] = ((((min((arr_34 [i_7 + 2] [i_7 + 2]), ((min(var_11, 186)))))) ? (arr_33 [i_7]) : var_0));
    }
    var_12 = var_4;
    #pragma endscop
}
