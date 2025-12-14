/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (arr_7 [5] [6] [7] [5]);
                        var_16 = -8647982196317353113;
                    }
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        var_17 = (arr_11 [i_0] [i_0] [i_0]);
                        var_18 = (max((((((min(65, (arr_4 [i_1])))) ? 1 : var_12))), (max((arr_10 [4] [i_0] [8] [4]), (arr_8 [i_0])))));
                        var_19 = (((arr_13 [i_0] [0] [i_0] [9]) ? (arr_10 [i_2 - 2] [i_0] [i_2 - 1] [i_2 + 1]) : ((min(var_11, var_8)))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_20 = (min(var_20, ((((((-53 ? ((-(arr_1 [i_5] [i_5]))) : ((-(arr_9 [i_0] [i_1] [i_5] [2])))))) ? (arr_1 [4] [i_5]) : (min((arr_11 [i_2] [1] [0]), 15976901575402509325)))))));
                        var_21 &= (((arr_15 [i_0 + 2] [i_5] [i_2 - 1]) > (arr_15 [i_0 + 2] [i_5] [i_2 + 1])));
                    }

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 = (37 ? var_10 : (max(15976901575402509334, var_3)));
                        var_23 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 6;i_8 += 1)
                        {
                            {
                                var_24 |= ((~(max(-77, 1873242662481110411))));
                                var_25 = (min(var_25, -4905697487778606615));
                                var_26 = (min(var_26, (((var_11 ^ (arr_21 [i_0] [i_7]))))));
                                var_27 = 15788831217958718327;
                            }
                        }
                    }
                    var_28 = 168414855;
                    var_29 = (max((arr_12 [i_0] [0] [1] [i_2] [8] [0]), var_13));
                }
            }
        }
    }
    var_30 = var_14;
    #pragma endscop
}
