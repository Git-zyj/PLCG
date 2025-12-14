/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((((min((((arr_6 [1] [i_1] [i_1]) ? 0 : 1384593821)), ((var_12 / (arr_0 [i_0] [i_1])))))) && var_2));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 = var_0;
                        var_19 = (i_3 % 2 == 0) ? ((max(var_4, (((((arr_3 [2] [i_2] [i_3]) / var_1)) << (((arr_8 [i_0] [i_1] [i_3] [i_2] [i_3] [i_3]) - 15))))))) : ((max(var_4, (((((arr_3 [2] [i_2] [i_3]) / var_1)) << (((((arr_8 [i_0] [i_1] [i_3] [i_2] [i_3] [i_3]) - 15)) + 129)))))));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [1] [i_1] [i_1] = ((((((min(1, -20))) ? var_12 : (arr_12 [i_4] [i_4 + 3] [15] [i_1] [i_0] [10]))) != (((min(823, (arr_1 [i_2] [i_4])))))));
                        var_20 = (((arr_11 [i_0] [i_1] [i_4]) ? (((!(arr_5 [i_0] [i_2] [i_4 - 2])))) : (max(11554574, ((var_5 ? -70 : 823))))));
                        var_21 = ((-(((arr_3 [i_4 + 3] [i_4] [i_0 + 1]) << (((arr_3 [i_4 + 3] [14] [i_0 + 1]) - 1289863784))))));
                    }
                    arr_14 [i_0] [i_1] [1] &= ((8242956828645838250 * (min(19, 4563))));
                    var_22 &= (min(((26232 ? 0 : -43)), 64702));
                }
            }
        }
    }
    #pragma endscop
}
