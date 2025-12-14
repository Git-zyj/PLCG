/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 41786;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (arr_1 [i_0 - 1] [i_0 + 3]);
                var_19 &= (arr_1 [i_0] [i_0]);

                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_20 = (max(32751, (arr_2 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 &= (((((((((arr_6 [i_0] [i_1 + 1] [i_2] [14] [16]) ? (arr_8 [i_0] [i_2] [i_2] [8] [i_4 - 3]) : -32751))) ? ((((arr_3 [i_2] [i_2]) >= var_7))) : 511))) && var_5));
                                arr_11 [i_1] [i_1] [i_2 + 2] [18] [i_1] = ((((arr_0 [i_2] [1]) || (((var_16 / (arr_5 [i_1] [i_1] [i_1 + 1])))))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_22 &= (arr_2 [i_0] [i_0]);
                    arr_16 [i_0] [i_1] [12] [i_0] = (max((((arr_7 [i_1] [12] [i_5] [i_5]) ? (arr_8 [1] [i_1] [i_5 - 1] [1] [i_1 + 2]) : (-3094304131126470808 & var_11))), (arr_14 [7] [7] [11])));
                }
                var_23 = ((((-(arr_10 [i_0 - 2] [i_0 + 1]))) - (arr_10 [i_0] [i_0 + 3])));
                var_24 = ((-32751 ? ((3941018519 ? (arr_9 [i_0] [i_0 + 2] [11] [i_0] [i_1 + 2] [i_1 + 2]) : (((-9223372036854775805 ? 1 : 1))))) : (((var_7 / (!var_5))))));
            }
        }
    }
    #pragma endscop
}
