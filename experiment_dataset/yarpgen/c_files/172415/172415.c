/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((!(arr_6 [i_0 + 4] [i_1 - 1] [i_0 + 4]))))));
                var_17 = (max(var_17, var_5));
            }
        }
    }
    var_18 -= ((!(((((var_4 >> (var_0 - 11836140284050895443)))) || -783169317))));

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 -= ((var_14 ? ((((min(var_11, 111))) ? (max((arr_15 [2] [i_2]), var_11)) : ((var_7 ? var_9 : (arr_10 [i_5] [i_4]))))) : (arr_8 [i_4])));
                        arr_17 [1] [i_3] [i_2] = (min((-2147483647 - 1), (max(27, (((var_1 ? var_6 : (arr_2 [8]))))))));
                        var_20 = (max(-var_7, (((16384 ? var_12 : var_7)))));
                        var_21 -= (min(var_6, (arr_9 [i_5])));
                        var_22 = ((var_7 ? ((((arr_8 [i_3]) < (arr_11 [i_4])))) : ((((min((arr_10 [i_5] [13]), var_7))) ? ((var_12 | (arr_1 [i_5]))) : ((max(7882, (arr_13 [i_2] [i_3] [4] [i_3]))))))));
                    }
                }
            }
        }
        var_23 = ((1927507626 ? 2367459673 : ((((arr_6 [i_2] [i_2] [i_2]) / (arr_15 [i_2] [i_2]))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = (arr_5 [i_6]);
        var_24 -= var_0;
        arr_21 [i_6] = (arr_2 [i_6]);
        var_25 = arr_4 [i_6] [i_6] [0];
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_26 += ((arr_22 [i_8]) ? ((((arr_5 [i_8]) | (((arr_26 [i_7] [i_8] [i_8]) & var_2))))) : (arr_4 [i_7] [i_7] [i_7]));
            var_27 = var_8;
            arr_28 [i_8] [i_8] [5] = (((arr_19 [i_7] [i_8]) != (~0)));
            var_28 += (((((0 >= (arr_25 [i_7] [i_7] [14])))) < ((((((!(arr_27 [i_7] [i_7]))) && (arr_1 [i_7])))))));
            var_29 -= ((2072187952 >> (((((arr_3 [i_7] [i_7] [11]) ? ((var_11 ? var_8 : (arr_4 [i_7] [16] [i_8]))) : (arr_5 [i_8]))) + 8944863097050286526))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_30 = ((((max(((((arr_5 [21]) && var_11))), (arr_3 [i_9] [i_7] [i_7])))) / (max((arr_26 [i_7] [i_9] [i_7]), (arr_26 [i_7] [i_9] [i_9])))));
            var_31 = ((!((((arr_29 [i_7]) * (arr_27 [i_7] [i_7]))))));
        }
        var_32 = (arr_4 [i_7] [i_7] [i_7]);
    }
    var_33 = var_14;
    #pragma endscop
}
