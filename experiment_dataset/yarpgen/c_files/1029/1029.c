/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (4292774910 & 1);
    var_15 ^= (max(51937, 0));
    var_16 ^= ((180 ? 20042 : (-2147483647 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((((((~2754540769) - ((min((-2147483647 - 1), (arr_9 [0] [5] [3])))))) << (((max((~9223372036854775807), (min(850458695, (arr_3 [i_3]))))) - 850458672)))))));
                        var_18 = (min(((2147483647 ? 4294967295 : 30282)), (arr_4 [i_3])));
                    }
                    var_19 = (min(var_19, ((((min((arr_9 [0] [i_1] [3]), ((27 ? 1687326377 : -18616))))) ? -var_10 : (((min(0, var_2)) ? (((29692 << (2725417858 - 2725417855)))) : (~3345258160884521961)))))));
                    arr_13 [i_0] = ((-(((-0 == ((max(26700, var_5))))))));
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_20 = ((((((((arr_15 [i_4 + 1]) + 2147483647)) << (13368798414736864157 - 13368798414736864157)))) ? ((max((arr_4 [i_4 + 2]), 1))) : ((max((arr_4 [i_4 + 2]), (arr_4 [i_4 - 3]))))));
                    arr_21 [i_4] [i_5] [i_6] [i_6] = var_5;
                    var_21 = ((((max((arr_15 [i_6 - 2]), (arr_4 [8])))) ? (((!(arr_19 [i_4 - 1] [i_4 - 2])))) : ((max(var_3, (arr_15 [i_6 - 3]))))));
                }
            }
        }
        arr_22 [i_4] = (max((arr_7 [i_4 + 1] [i_4] [i_4 - 3]), ((((min(var_10, (arr_8 [i_4] [i_4] [4])))) ? (max(0, (arr_4 [12]))) : (-19486 & -5019051681986727692)))));
        arr_23 [i_4] = (~-3637794391843598118);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_27 [i_7] = (max((((arr_25 [i_7]) & (arr_25 [i_7]))), (max((arr_25 [i_7]), -8688802783789751403))));
        arr_28 [i_7] = ((~((-0 ? ((var_2 ? var_0 : var_9)) : 16120))));
    }
    #pragma endscop
}
