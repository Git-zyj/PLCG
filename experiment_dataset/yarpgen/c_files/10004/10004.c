/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_8;
    var_13 = (min(var_13, var_11));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_14 = ((85 ? (((arr_1 [i_0 - 3]) ? 168 : -18446744073709551611)) : (((168 ? 190 : 96)))));
        var_15 &= (max(((-18446744073709551615 ? (((!(arr_1 [i_0])))) : var_8)), (((~-89) / 171))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = ((((-var_3 / ((-(arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3])))))) ? ((var_8 ? ((159 ? 6166595018570999918 : 0)) : (min(18446744073709551612, (arr_10 [i_0 - 1] [15] [i_2] [i_3]))))) : (((((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_0]) ? var_10 : 55))) ? (((arr_11 [i_0] [1] [i_2] [i_3] [i_3]) ? 103 : -48)) : (arr_7 [i_0 - 1] [i_0 - 3])))));
                        var_17 = ((~((8871423052045656819 ? 18446744073709551615 : 68))));
                    }
                    arr_12 [i_0] [20] [i_0] = 101;
                    arr_13 [i_2] [i_1] &= 28470;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = -10888;
                        arr_17 [i_0 - 1] = ((((min(100, ((84 ? 8512762281778758858 : (arr_3 [i_0] [i_2] [i_2])))))) ? (((min((arr_0 [i_0 + 1]), 18446744073709551611)))) : (arr_14 [i_2] [i_1] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (((var_4 ? var_0 : ((-106 ? (min(25, var_4)) : 15)))))));

    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_20 = ((!((((!var_7) ? var_0 : ((1 ? (arr_8 [i_5] [i_5] [i_5]) : 176)))))));
        var_21 = ((((((((1 ? -10906 : var_3))) ? (min(544650361786583473, (arr_4 [i_5] [i_5] [i_5] [i_5]))) : -var_3))) ? (!-1) : (((((18446744073707454464 ? 90 : 127)) >= ((-15769 ? 2046 : var_10)))))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_22 = ((~(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        var_23 = 152;
        var_24 |= ((((max((arr_19 [i_6]), (arr_19 [i_6])))) ? (((6917529027641081856 ? 48464 : (arr_19 [i_6])))) : (arr_19 [i_6])));
    }
    #pragma endscop
}
