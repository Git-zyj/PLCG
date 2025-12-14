/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((!-76), (max(0, 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_19 = (max(var_19, (((max((!0), var_7))))));
                    var_20 = (max(var_20, (1 * 1724016172)));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {

                            for (int i_5 = 3; i_5 < 22;i_5 += 1)
                            {
                                var_21 |= var_10;
                                var_22 &= -13;
                            }
                            var_23 = (min(var_23, (((+(((!65529) ? ((var_1 ? var_4 : (arr_11 [i_0] [i_4]))) : 65522)))))));

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                arr_18 [i_6] [i_4] [i_3 - 1] [i_6] [i_6] = (((-3133427377666229645 ? 1948566537 : (!860508749))));
                                var_24 = (14371690159130438136 - var_6);
                                var_25 += 0;
                                var_26 = (max((max(((min(1, -15001))), 11899253661402490086)), (arr_4 [i_0] [i_3 + 3] [i_6])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_27 |= ((!((max((arr_9 [i_0] [i_1] [i_7] [i_8]), var_12)))));
                                var_28 ^= (max((((!((max(var_15, (arr_11 [i_0] [1]))))))), (arr_14 [i_7] [i_7] [i_9])));
                                arr_27 [i_0] [i_0] [16] [i_0] [i_0] = ((!(arr_12 [i_9] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, var_11));
    #pragma endscop
}
