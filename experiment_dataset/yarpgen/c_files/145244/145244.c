/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 = ((-25355 ? 25626 : (arr_7 [i_3 - 2] [i_2] [i_2])));
                        arr_9 [i_2] [i_2] [1] = (((var_5 ? (((1 ? 1 : 1))) : (1 & 7720857830430977837))) ^ (((var_4 ^ (min(var_15, 2099477177))))));
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_2 - 1] [i_3 - 2] [i_3 - 1] = (1 ? 1 : 2805110850);
                    }
                }
            }
        }
        arr_11 [i_0] [8] &= (((((((((arr_7 [i_0] [i_0] [i_0 - 2]) / 2099477177))) ? var_10 : var_1))) ? (((((-1622079807 ? (arr_0 [i_0]) : var_6))) ? var_8 : ((var_8 ? 1 : -7036507141355050336)))) : var_6));
        var_17 = ((!((min((var_6 <= var_1), ((var_15 ? (arr_4 [i_0]) : var_5)))))));
        arr_12 [i_0] [i_0] = var_2;
        arr_13 [i_0] [i_0] = (min((15378 * -120), ((max(69, -15392)))));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_18 = ((~(arr_14 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_6] = var_14;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [i_4] [i_4 - 1] [i_6] [i_4] [i_4] = ((((-7720857830430977854 ? (((4842092512682845938 ? 1 : 4294967284))) : ((var_7 - (arr_16 [i_5] [i_8]))))) / var_4));
                                arr_32 [17] [i_5] [i_5] [i_6] [i_5] = var_12;
                                var_19 = (((arr_30 [i_6] [0] [i_7] [i_8]) ? (min(((1656435549266064817 / (arr_21 [i_6]))), -7720857830430977840)) : (((var_8 ? ((~(arr_26 [3] [i_6]))) : (((arr_26 [i_7] [3]) << (var_12 - 860437122951747512))))))));
                            }
                        }
                    }
                    arr_33 [i_4] [i_5] [i_5] [i_6] = ((-var_7 ? -var_14 : (max((arr_21 [i_6]), (arr_21 [i_6])))));
                }
            }
        }
    }
    var_20 = (max(-2099477178, 1489856446));
    var_21 = ((-7720857830430977837 ? 118 : 15));
    var_22 = var_0;
    #pragma endscop
}
