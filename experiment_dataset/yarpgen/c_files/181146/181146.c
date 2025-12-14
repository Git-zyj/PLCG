/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 *= (((((((min((arr_3 [i_0] [i_0] [i_2]), (-32767 - 1)))) & (224627536 <= var_4)))) != (((arr_2 [i_0] [i_0] [i_0]) ? ((((!(arr_4 [i_0]))))) : (arr_0 [i_0] [i_1 - 1])))));
                    var_21 = (min(((((min(var_0, 492519942))) ? (min(7, var_17)) : ((((arr_5 [i_1]) ? (arr_4 [i_0]) : (arr_5 [i_1])))))), (arr_5 [i_1])));
                }
            }
        }
        var_22 = (max((arr_0 [i_0] [i_0]), (((32762 ? -32010 : 29266)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_23 = (max(975617647, 1761432369));
        var_24 = (-32767 - 1);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_25 = ((((max((32748 && 9522004493639863033), (arr_7 [i_5])))) / (arr_7 [i_4])));
                    arr_14 [i_3] [i_3] [i_3] [i_3] = (((((~(!975617617)))) ^ (~22)));
                }
            }
        }
        var_26 *= (((arr_10 [i_3] [i_3] [i_3]) ? ((min(-1504866746, 19181))) : (max((((~(arr_12 [i_3] [i_3])))), ((var_3 ? (arr_10 [i_3] [i_3] [i_3]) : var_17))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_27 = (min(var_27, ((min((arr_15 [i_6] [i_6]), (arr_15 [i_6] [i_6]))))));
        var_28 = (min(var_28, (((19181 ? 1 : -32759)))));
        arr_17 [i_6] [i_6] = ((var_3 ? (min((((2147483647 ? (arr_15 [i_6] [i_6]) : (arr_9 [i_6] [i_6])))), (max(27, 16974254452667020039)))) : (arr_11 [i_6] [i_6])));
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_29 = ((((!((max((arr_23 [i_8] [i_7]), (arr_22 [i_7 - 2] [i_7] [i_7 + 1])))))) || ((min((((arr_25 [i_7 - 1] [i_9 - 1] [i_9]) ? var_12 : (arr_20 [i_9]))), ((max((arr_20 [i_7]), (arr_21 [i_9])))))))));
                    var_30 -= ((((((~var_18) / ((var_6 ? var_5 : var_14))))) ? (((max(17780095618188221991, -78)) % ((((arr_20 [i_8]) - var_4))))) : ((max((max(var_8, (arr_24 [i_7 - 2]))), (arr_20 [i_7]))))));
                    var_31 = ((((min((arr_21 [i_7]), (((arr_23 [i_8] [i_9]) ? (arr_18 [i_8 + 3] [i_9 - 1]) : (arr_22 [i_7 + 2] [i_8 + 1] [i_9 + 2])))))) / (((arr_23 [i_7] [i_8 + 3]) ? (max((arr_25 [i_9] [i_8] [i_7]), 0)) : (arr_26 [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8])))));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_32 &= (max(492519942, (max(89, 32767))));
        var_33 = (max(((-(arr_1 [i_10] [i_10]))), ((39 ? ((var_14 + (arr_7 [i_10]))) : (~-1761432370)))));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_34 ^= ((((((arr_9 [i_11] [i_11]) ? ((~(arr_16 [i_11] [i_11]))) : ((max(var_16, 1)))))) ? (arr_23 [i_11] [i_11]) : (max(1, 17669983062834219364))));
        var_35 = ((~((max((arr_4 [i_11]), var_10)))));
    }
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        var_36 = (max(var_36, ((((((1 >= ((0 / (arr_18 [i_12] [i_12 - 1])))))) <= var_5)))));
        var_37 = (~var_13);
    }
    var_38 = ((!((min(242, 32512)))));
    #pragma endscop
}
