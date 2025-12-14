/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((~1) % var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_20 = (arr_1 [i_0 + 1]);

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_21 = (arr_4 [i_0] [i_0] [i_1]);
            var_22 = (((arr_5 [i_0 + 1]) ? (((arr_4 [i_0] [i_0] [i_0]) ? var_10 : 18446744073709551604)) : (arr_2 [2] [i_0] [i_0 + 1])));
        }
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            var_23 = (((-(arr_5 [i_2]))));
            arr_9 [i_2] [2] [i_2] = (arr_8 [i_0] [i_0 + 1]);
            var_24 = (((-7177804171795228007 ? 18446744073709551604 : 18446744073709551614)));
        }
        var_25 = ((!(arr_8 [i_0 + 1] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 = (((-1 / 764369191) ? 2147483631 : (8388576 && 16095475653395297642)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_27 = (min(var_27, ((((-8431503828471769142 ? 8434575883921142115 : 2140423439))))));
                    var_28 = 4294967295;
                }
            }
        }
        var_29 = (arr_13 [7]);
        var_30 = ((+(((arr_12 [i_3]) ? var_3 : 67108863))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_31 = (min(var_31, (~230)));
        var_32 = (max(var_32, -4294967295));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    {
                        var_33 = (min(var_33, (+-2935819736037504937)));
                        arr_27 [i_6] = (arr_24 [i_6] [i_9 + 1] [i_6] [i_8]);
                        var_34 = (min(var_34, ((((((-(arr_17 [i_9])))) ? ((-(max((arr_26 [i_6] [i_6] [i_9 - 1] [i_6]), (arr_22 [i_9 - 2] [i_8] [8] [i_6]))))) : 251)))));
                    }
                }
            }
        }
        var_35 = (~18446744073709551615);
    }
    #pragma endscop
}
