/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_2] = -2129346084;
                        var_12 = var_3;
                        arr_10 [19] [19] [i_2] [22] [i_3] = ((var_9 ? -1 : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_2 - 1])));
                    }
                }
            }
        }
        var_13 *= (arr_5 [i_0] [24] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_14 = (!-1);
        var_15 = (((arr_5 [i_4] [6] [i_4] [6]) < (((var_1 ? var_6 : (arr_11 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_25 [3] [i_5] [i_4] [1] [i_8] = ((-(((arr_21 [i_6 + 1] [i_7] [i_8] [i_8] [i_8]) << (-5694716444531616881 + 5694716444531616888)))));
                                var_16 = (((((((5690 ? var_11 : 206)) + ((var_10 ? 1509610706 : 3))))) ? 21 : ((min(1509610703, 1823736830)))));
                                arr_26 [i_4] [i_4] [i_6] [4] [1] = -11183;
                                arr_27 [4] [10] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1] = (min(((((-(arr_22 [i_4] [i_4] [i_8]))) ^ var_2)), 1));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_17 = ((arr_20 [i_4] [7] [i_6 + 1] [i_6 - 2]) || (arr_1 [i_6 + 1]));
                        var_18 = ((!(min(((!(arr_1 [i_4]))), (7 && var_3)))));
                        var_19 = ((-(min(-25, (max(var_8, 122))))));
                        var_20 = (((((max(0, 35594)))) ? (((((3662983399 ? 804162657 : 5332532621475684577))) ? (11157 != -122) : var_4)) : 1));
                    }
                    for (int i_10 = 4; i_10 < 8;i_10 += 1)
                    {
                        var_21 = ((!((max(13073857496705102995, (arr_24 [i_4] [i_5] [i_5] [i_5] [i_10] [i_10] [i_10]))))));
                        var_22 &= 102;
                    }
                }
            }
        }
    }
    var_23 = (min((((18446744073709551615 ? 18 : 5332532621475684576))), ((((((var_10 ? 66060288 : var_10))) || ((max(var_1, var_10))))))));
    #pragma endscop
}
