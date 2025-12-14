/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = 16284;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = var_10;
                    arr_9 [i_0] [i_0] = (((max((((-23751 ? var_9 : 1070565019557980220))), ((var_10 ? (arr_3 [i_0] [i_1] [1]) : 5291497679439692095))))) ? 18596 : (arr_7 [i_0 + 4]));
                    var_14 = ((+((((max((arr_7 [i_2]), var_9))) ? (!23744) : var_10))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] = (((!-6410120792197179360) == (min((((~(arr_4 [i_0] [i_0])))), (min((arr_8 [10] [i_1]), (arr_3 [i_0] [i_2] [i_3])))))));
                        var_15 = (((((arr_6 [i_1 + 1] [11] [11]) > var_4)) ? (((13757 > 0) ? (arr_2 [i_0 + 1]) : (((1 ? (arr_3 [i_0] [i_0 - 2] [i_0]) : var_6))))) : ((((max(251, -25628))) ? (min(var_2, (arr_0 [i_0] [i_1]))) : (min(-25628, var_0))))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_16 = var_9;
        arr_15 [i_4] = ((((-(arr_14 [i_4])))) ? 117 : ((((max(var_6, -118))) ? 6142 : ((min(-94, var_4))))));
        arr_16 [i_4] = (((min((((arr_0 [i_4] [i_4]) ? 70 : 13757)), (((2750 && (arr_0 [i_4] [i_4]))))))) ? (max((arr_5 [i_4] [i_4]), (!var_8))) : ((((((arr_8 [i_4] [13]) && var_8)) ? ((((arr_1 [i_4]) && 17423335931031537443))) : (!18446744073709551615)))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_17 = ((!(((-(((-61 + 2147483647) << (115 - 115))))))));
                    arr_23 [i_4] [i_4] [i_6] = (((((arr_0 [i_5] [i_5 + 3]) ? 6079442310665731319 : (arr_8 [i_6] [i_5 - 1]))) ^ (~12819)));
                }
            }
        }
        var_18 = (((arr_5 [i_4] [i_4]) || (((arr_18 [i_4]) && (!var_1)))));
    }
    #pragma endscop
}
