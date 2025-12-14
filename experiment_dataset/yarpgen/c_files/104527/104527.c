/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((-(min((arr_1 [i_0] [i_1 + 2]), (((arr_1 [i_0] [i_0]) ? -1 : (arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = (arr_6 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_2] [i_0] = (((arr_12 [i_0] [7] [i_0] [i_0]) ? ((((min(3151, 65534))) | (arr_13 [8] [i_1] [i_1 + 2] [i_1 - 1]))) : ((~(arr_6 [i_2 - 2] [i_1 + 1])))));
                            var_19 = (((((((0 ? (-127 - 1) : (arr_6 [i_1] [i_1 + 2])))) ? ((var_13 + (arr_12 [13] [i_1] [i_1] [i_3]))) : 14217)) % (((((((-(arr_8 [i_0] [i_0])))) < ((65535 ? var_4 : -6))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((((((arr_0 [i_4 - 3]) ? (~7) : (((~(arr_15 [10]))))))) ? ((((((arr_3 [16]) ? var_10 : 32767))) ? ((32767 ? (arr_11 [i_4 - 1] [i_4]) : var_2)) : (((13974944667335859663 ? (arr_11 [i_4] [i_4]) : (arr_15 [10])))))) : ((-(((arr_13 [i_4] [i_4] [i_4 - 2] [i_4 - 2]) ? var_17 : 6076707302154495129))))));
        var_20 -= ((((!(arr_8 [i_4 - 1] [i_4 - 1]))) ? ((-(arr_8 [i_4 - 2] [i_4 + 1]))) : (((((arr_5 [i_4 - 3]) + 2147483647)) >> (((arr_5 [i_4 - 4]) + 86))))));
        var_21 += (max((~12370036771555056486), (((((16883578511107289831 ? (arr_5 [i_4]) : (arr_6 [i_4] [i_4]))) > ((1563165562602261784 ? var_10 : (arr_1 [i_4] [i_4]))))))));
        arr_19 [i_4] &= (arr_2 [i_4]);
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_22 = (min(((((arr_13 [i_5] [i_5] [i_5 - 4] [i_5]) <= (max(113, 9223372036854775807))))), (max(((12370036771555056497 ? (arr_9 [i_5] [i_5] [i_5 - 3]) : (arr_22 [i_5 - 1] [7]))), (!65535)))));
        var_23 -= ((~((+(((arr_15 [i_5]) ? 41829 : 32))))));
    }
    var_24 -= ((-(!var_16)));
    var_25 = var_13;
    var_26 = (max(((-(var_6 ^ 18))), ((2147483647 ? 0 : -3151))));
    #pragma endscop
}
