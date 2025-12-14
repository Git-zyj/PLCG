/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (max(var_12, 8));
    var_16 = var_7;
    var_17 = 18102;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 += var_12;
                var_19 = (min(var_19, var_10));

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0 + 2] [i_1] = ((-(((arr_6 [i_1] [i_1 - 1]) ? (arr_6 [i_1] [i_1 + 2]) : 55105))));
                    var_20 += 31125;
                    var_21 *= ((((((arr_3 [8] [8]) ? (arr_3 [1] [1]) : var_13))) ? (((!(arr_3 [4] [4])))) : (((arr_3 [0] [0]) ? (arr_3 [4] [4]) : (arr_3 [8] [8])))));
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_22 *= ((((~(max((arr_4 [i_0] [6] [i_1] [10]), -8271657993262107927)))) + (((-(arr_8 [1]))))));
                    arr_10 [i_1] = (((4721 + 4965568431020907919) + ((((!(arr_3 [i_1 - 2] [i_1])))))));
                    var_23 = (min(var_23, var_0));
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((((3337096464 ? 3135416477 : 11546))) ? (arr_9 [i_0 + 1]) : var_0);
                    arr_12 [i_0] [7] [i_1] [i_0] = ((((~(~15945))) ^ ((7800834603909754739 ? ((min(var_8, 1))) : (max((arr_6 [i_1] [11]), (arr_6 [i_1] [i_3])))))));
                }
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((38373 ? 25062 : -64)))));
                                var_25 = (max(var_25, ((min((((max(264, (arr_6 [i_5] [i_4 + 1]))) << ((219 ? var_3 : var_9)))), (((arr_17 [i_0] [i_0] [i_5] [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_6]) ? -981265545 : ((((arr_0 [i_4] [i_5]) == (arr_16 [i_0] [i_1 + 1] [i_1 + 1] [i_6])))))))))));
                                var_26 = (((((arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [2] [i_0]) + 2147483647)) << (((arr_15 [i_6] [i_1] [i_0]) - 1))));
                                arr_20 [1] [1] [1] [1] [i_1] = ((9180806567747315244 ? 1 : 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_27 = (max((min(((-966318471 ? 11042460569898025845 : 687057574)), (arr_0 [i_4] [1]))), ((((arr_19 [i_8] [i_8] [i_8] [3] [i_8]) ? (((((arr_8 [i_1]) && 24900)))) : (5 * 3264480179))))));
                                var_28 *= (!(((-((max(1, 20407)))))));
                                arr_27 [i_8] [i_7] [6] [i_1] [i_1 + 3] [i_0] [i_0 - 1] = (~(max(-4760, 1951514766)));
                            }
                        }
                    }
                    arr_28 [i_1] [i_1] [i_1 + 1] = (1 || 0);
                    var_29 = 487577067;
                    var_30 = (min(var_30, (((((var_13 ? ((-40 ? 28109 : var_11)) : var_1)) >> (((~37) + 43)))))));
                }
            }
        }
    }
    #pragma endscop
}
