/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [10] [11] = (min((arr_2 [i_1] [i_0] [i_0]), (((arr_2 [i_0] [13] [i_0]) - (arr_2 [i_1] [11] [i_0])))));

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_2] [i_2] [i_2 + 1] = ((~(((((10726 ? var_10 : (arr_3 [i_0])))) ? (max(54833, (arr_0 [i_0] [1]))) : ((min(54797, var_3)))))));
                    var_13 = ((((((arr_4 [i_0] [i_2 + 1] [i_2]) ? (arr_7 [i_0] [i_2 + 1] [i_2]) : (arr_4 [i_0] [i_2 + 1] [i_2 - 2])))) ? 54809 : ((((((10724 ? 8644 : (arr_9 [i_0] [8] [i_0])))) || var_5)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = ((var_3 * (!384)));
                    arr_15 [i_3] [i_3] = (((((arr_0 [i_0] [i_3]) + 9223372036854775807)) >> (((arr_8 [i_3] [i_1] [0] [i_0]) + 66))));
                    var_14 = (((409 ^ var_7) < (((arr_5 [i_0] [1] [i_3]) ? 18446744073709551615 : -432))));
                    var_15 = ((~(arr_3 [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] |= (10728 ^ -7);
                    arr_20 [i_4] [i_1] [i_0] = ((var_7 ? -1 : (arr_9 [i_0] [i_1] [i_4])));
                    var_16 = (arr_18 [i_0] [i_4]);
                    var_17 = (((arr_7 [i_0] [i_1] [i_4]) != (arr_16 [i_1] [i_0])));
                }
            }
        }
    }
    var_18 = (max(var_18, var_5));

    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_19 = ((-(((arr_4 [i_5] [8] [i_5]) | ((1 ? (arr_3 [i_5 + 2]) : 54810))))));
        var_20 = 2;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = ((((((arr_26 [i_6] [i_6]) ? (arr_26 [i_6] [i_6]) : (arr_26 [i_6] [7])))) ? var_8 : (((arr_26 [i_6] [i_6]) ? (arr_26 [i_6] [i_6]) : (arr_26 [i_6] [i_6])))));
        var_22 = 61919;
        var_23 = (max(var_23, var_5));
        var_24 = ((((((((arr_23 [i_6] [i_6]) & (arr_23 [14] [i_6]))) - ((396 ? 1 : -9173))))) && (min((arr_24 [i_6] [i_6]), (arr_26 [i_6] [i_6])))));
        arr_27 [4] &= ((3584 ? 222716895 : 222716895));
    }
    var_25 ^= (min((((!(((14885733604053434281 ? var_0 : var_2)))))), (max(9172, 23544))));
    #pragma endscop
}
