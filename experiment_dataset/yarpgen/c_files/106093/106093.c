/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0]) && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 30620))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (((-91 + 2147483647) << (((((arr_1 [i_2 - 1]) ? (arr_1 [i_3]) : (max(var_15, (arr_4 [i_1] [17] [i_1]))))) - 49))));
                        var_20 = min(((((arr_4 [i_3] [17] [i_1]) || ((!(arr_1 [i_0])))))), (((arr_8 [i_2 + 1] [i_2 - 1] [i_2]) ? (((var_2 && (arr_7 [i_1] [i_1] [i_0])))) : var_6)));
                        var_21 *= (6145834051884449662 ^ 4088);
                    }
                }
            }
        }
        arr_12 [i_0] = var_0;
        var_22 += ((~(2711998150 / 198)));
        arr_13 [i_0] [i_0] |= (((arr_4 [0] [0] [i_0]) - ((((max((arr_4 [20] [i_0] [i_0]), (arr_0 [i_0]))))))));
    }
    var_23 = (((((~(max(var_6, var_5))))) - ((var_1 ? ((-19 ? var_9 : var_18)) : var_14))));
    #pragma endscop
}
