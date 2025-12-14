/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_14 = (max(var_14, (((((max((arr_7 [i_0] [i_0] [i_0] [i_0]), 1928959555509939580))) && 162)))));
                        arr_8 [i_2] &= ((((((max(1, 14693))) | 161)) * 7));
                        arr_9 [i_1] [i_1] [i_3] = (!(((arr_2 [i_0 + 1]) && 7)));
                        var_15 = (min(var_15, var_0));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_16 += (arr_5 [i_1 + 2] [i_2] [i_4]);
                        var_17 += ((!(((var_12 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))));
                        var_18 = (((((-(arr_4 [i_0 + 1])))) ? (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))) : (((arr_4 [i_0 + 1]) ? 94 : (arr_4 [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = 15983441024429803934;
                        arr_16 [i_1] [i_1 + 1] [i_2] [i_5] = (!(((3611885998851652881 ? -87 : -6066284990277856597))));
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_19 &= (((((((48 ? 7 : 51)) & ((max((arr_2 [i_6]), 255)))))) ? var_9 : (arr_12 [i_0] [i_0 + 1] [i_0] [i_2] [i_0] [i_0 + 1])));
                        var_20 = ((((((arr_4 [i_0 + 1]) ? 154 : (arr_4 [i_0 + 1])))) ? 52632 : var_10));
                        var_21 *= (((((((161 ? -2677445676822730843 : 38))) ? 21911 : (arr_18 [i_0 + 1] [i_0 + 1] [i_6 - 1] [i_0 + 1] [i_6] [i_6]))) - (((58110 - var_13) ? (((arr_1 [i_0]) ? 94 : (arr_18 [i_0] [i_0 + 1] [i_0] [9] [i_0] [1]))) : (((arr_14 [i_1]) / var_10))))));
                    }
                    arr_20 [i_0 + 1] [i_1] [i_0 + 1] = ((((max(76, ((50820 ? 12904 : 1))))) ? -57 : ((1 ? 65535 : 12904))));
                    arr_21 [i_0] [i_1] [i_2] = 18446744073709551615;
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
