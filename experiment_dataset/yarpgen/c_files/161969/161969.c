/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_18 = ((-((92 ? ((-(arr_2 [i_0]))) : (arr_5 [i_0] [i_0])))));
                var_19 = max(var_14, (arr_0 [i_0] [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (arr_6 [i_2 - 2] [i_1 - 1] [i_0]);
                                arr_15 [i_4] [i_3] [i_2 + 2] [i_1] [i_0] [i_0] = ((!(!-92)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_14));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_31 [i_5 - 1] [i_6] [i_7 - 2] [i_9] [i_9] [i_7] |= var_13;
                                arr_32 [i_5 + 1] [14] [i_5] [i_8] [1] = (min(62, ((-3569975700471733878 ? var_6 : -1417218959))));
                                var_22 = (min(var_22, 78));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, (((~(((-77 & 248) ? ((3569975700471733900 ? (arr_20 [i_5] [i_6]) : 7597878438461611383)) : (arr_17 [i_5 - 1] [i_5 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
