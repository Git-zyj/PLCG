/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (~(~-1693302930373138085));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, var_10));
                                var_16 = ((((max(-775926491, (~var_13)))) || (~-1687174292)));
                            }
                        }
                    }
                    var_17 = var_0;
                }
            }
        }
        var_18 &= (((((arr_3 [i_0 - 2]) ? ((min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]), -169319206))) : ((5737108166958334729 >> (-573629248063887166 + 573629248063887174)))))) ? ((1010410824 ? -3867428448183986499 : (arr_11 [i_0] [i_0 - 2] [1] [i_0 + 1]))) : (arr_12 [i_0] [i_0]));

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_19 = var_7;
            var_20 = ((((arr_9 [i_5 + 1] [i_5 - 1] [i_0 + 2] [1]) ? 1073217536 : 2142351705)));
            var_21 = var_3;
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            var_22 += (~var_12);
            arr_22 [i_6] = (((arr_18 [i_7 - 1] [i_7 - 1]) > (arr_19 [i_6])));
            arr_23 [i_7 + 3] [i_6] [i_6] = arr_19 [i_6];
            var_23 = (arr_18 [i_7 + 2] [i_7 - 1]);
        }
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            var_24 &= max((arr_25 [i_8 + 1] [i_6]), (((~(arr_24 [i_6] [i_8 + 1] [i_8])))));
            var_25 = (max(var_25, (min(((-573629248063887183 ? (min((arr_25 [i_6] [i_8]), var_3)) : 229376)), (((arr_20 [i_8 - 1] [i_8]) + (arr_21 [i_8 - 1] [i_8 + 1] [i_8])))))));
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_31 [i_6] [i_8] [i_6] [i_10] &= var_1;
                        var_26 = ((((arr_27 [i_8 - 1] [i_9 - 4] [i_8 - 1]) || (arr_27 [i_8 + 1] [i_9 - 1] [i_9 - 1]))) ? -1996389192 : (min((arr_19 [i_8 - 2]), (arr_19 [i_8 - 2]))));
                    }
                }
            }
            var_27 = (~-221094451687793073);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_35 [i_6] [i_11] [i_6] = ((arr_24 [i_6] [i_6] [i_6]) ? (~var_5) : (((arr_30 [i_6]) ? 573629248063887171 : 4939828930172351000)));
            var_28 = (((arr_28 [i_6] [i_6] [i_11]) / 7538848734860397128));
        }
        arr_36 [i_6] [i_6] = (((((~((~(arr_30 [i_6])))))) ? (arr_28 [i_6] [i_6] [i_6]) : (((arr_25 [i_6] [i_6]) ? var_11 : (arr_25 [i_6] [i_6])))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        arr_40 [i_12] [i_12] = (~((~(arr_19 [i_12]))));
        var_29 = ((((((arr_37 [i_12] [i_12]) - (max((arr_29 [i_12] [i_12]), 573629248063887189))))) ? var_11 : (~var_4)));
    }
    var_30 = 573629248063887188;
    #pragma endscop
}
