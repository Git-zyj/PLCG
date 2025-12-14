/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(-83, 2342327719703751444));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (((var_4 ? var_5 : (arr_3 [i_0] [i_2]))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= 16104416354005800171;
                    var_14 -= var_9;
                }
            }
        }
        var_15 = (((~var_3) ? (((((arr_0 [3] [3]) > var_11)))) : ((1 ? var_1 : (arr_0 [i_0] [i_0])))));
        arr_9 [i_0] = ((arr_3 [i_0] [i_0]) == (arr_6 [i_0] [i_0] [23]));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                var_16 += ((+(((arr_13 [i_3] [13] [9]) ? (var_12 % var_9) : (-9223372036854775807 - 1)))));
                arr_15 [i_3] [i_4 + 1] = (((7540155033273572338 || -32753) == ((~(arr_0 [i_4 - 1] [i_4 - 1])))));
                var_17 *= 8389661754548111874;

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_20 [i_3] [i_4 + 1] [i_3] [5] = ((((((var_11 ? (arr_12 [i_3] [i_4]) : var_12)) >= var_0)) ? ((-4551050381564456621 ? var_5 : (((var_4 ? var_2 : var_11))))) : -85));
                    arr_21 [i_3] [i_4] [i_5] = ((-(((((((arr_2 [i_3] [i_5]) ? (arr_18 [i_5] [i_4]) : var_1))) && 514)))));
                    arr_22 [i_5] [i_5] [i_4] = 40584;
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        var_18 *= -2252513010;
                        var_19 = ((arr_2 [i_3] [i_6]) ? -var_7 : ((-(arr_11 [i_3] [i_7]))));
                        arr_27 [i_4 + 1] [16] = ((-(arr_17 [i_4 + 1] [i_4])));
                        var_20 = ((var_10 ? (arr_5 [i_3] [16] [i_3]) : (((var_1 || (arr_5 [i_6] [i_6] [i_7]))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_6] |= (((((-(arr_3 [i_3] [i_4 - 1])))) ? (arr_10 [i_6]) : ((-var_1 ? ((max(var_4, var_9))) : var_3))));
                        var_21 = (((((arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]) >= (arr_0 [i_4 + 1] [i_4 - 1]))) && (arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                        arr_32 [i_3] [i_4] [i_6] [i_8] = -var_9;
                    }
                    arr_33 [i_3] [i_4] [i_6] = -4551050381564456621;
                    arr_34 [i_3] [i_4] [i_3] = ((((max((arr_0 [i_3] [i_3]), (arr_25 [i_6] [i_6] [i_6])))) ? (max((arr_25 [i_3] [i_4 - 1] [i_6]), (arr_0 [18] [18]))) : (max((arr_0 [i_3] [i_4]), (arr_16 [i_3] [i_4 + 1])))));
                    arr_35 [i_3] [i_4 - 1] [i_6] = ((-(var_11 * var_12)));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_22 = (988316589 >= var_3);
                    arr_39 [i_3] [14] [i_9] [i_9] = (min((arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]), ((var_10 ? 2551636817 : var_2))));
                }
                arr_40 [15] = (arr_19 [i_4]);
            }
        }
    }
    var_23 = ((-(-630860030 * -var_9)));
    #pragma endscop
}
