/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? var_16 : 73));
    var_21 = (max(var_1, ((var_6 ? (min(var_19, var_8)) : (183 & -21535)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (((arr_1 [i_1] [i_0 - 1]) ? ((73 ? 56 : (-2147483647 - 1))) : (((arr_5 [7] [i_1]) % ((var_12 << (((arr_5 [i_0] [i_0]) + 9))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_2 - 2] [i_3] = ((((((((5270803423644380131 ? (min((arr_4 [i_1] [i_2] [i_3]), (-2147483647 - 1))) : ((183 + (arr_11 [i_0] [i_2 - 1] [i_3] [i_4]))))) + 2147483647)) + 2147483647)) >> (var_2 - 3814252961)));
                                arr_17 [i_3] = -1282343562;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_9 && ((73 && ((min((-9223372036854775807 - 1), 508937336)))))));
    var_23 = (44 * 0);
    #pragma endscop
}
