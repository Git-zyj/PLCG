/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(((var_13 ? var_14 : var_6)))))));
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, (!4577745521568729176)));
        var_20 = (min(var_20, 983878787));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (!4179592523);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_21 = (((~(arr_12 [i_2] [i_2] [i_3] [i_3]))));
                    var_22 -= ((~((var_11 ? (arr_3 [1]) : var_11))));
                    var_23 = min(((var_10 ? ((var_5 ? (arr_2 [i_2] [i_3]) : (arr_12 [i_1] [i_2] [7] [i_3]))) : (((arr_8 [i_1] [i_2]) ? (arr_12 [i_1] [i_2] [i_3] [i_1]) : (arr_3 [i_1]))))), (min(((983878786 ? 97 : 1)), 192257466)));
                }
            }
        }
        var_24 = (-983878787 % -8521);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_25 = (arr_0 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_4] &= var_11;
                        arr_26 [i_4] [i_6] [i_6] [i_6] = (arr_20 [i_4]);
                        arr_27 [i_5] [i_4] &= (((((var_14 ? (arr_2 [i_5] [i_5]) : var_5))) ? (arr_0 [i_4]) : (602809663 / -983878796)));
                    }
                    var_26 = 6255951854083913260;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_27 &= 0;
        arr_30 [23] = (((((arr_28 [i_8]) & 102)) >> ((((min((min(-23441, (arr_29 [i_8] [i_8]))), 1))) + 23463))));
        var_28 = 3692157639;
        arr_31 [13] = (!20161);
    }
    #pragma endscop
}
