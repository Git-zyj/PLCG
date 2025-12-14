/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((~2147483647) ? -var_6 : (min(var_1, var_2)))), (~var_4)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_17 = ((((((arr_0 [i_0 - 1] [24]) ? (2147483647 & 20805) : var_1))) ? ((((2147483647 || 7) * 5771))) : (((arr_3 [i_0] [i_1]) ? (min(var_6, 63)) : -2101905942))));
                            arr_10 [i_0 + 3] [i_1] [i_1] = ((((((arr_3 [i_0 - 2] [i_1]) ? (arr_3 [i_0 + 2] [i_1]) : (arr_3 [i_0 + 2] [i_1])))) ? ((((arr_3 [i_0 - 1] [23]) ^ (arr_3 [i_0 + 3] [i_1])))) : 6400282032303752561));
                        }
                    }
                }
                var_18 = (max(((((((arr_8 [i_1] [i_0 - 3] [i_0] [i_0]) ^ (arr_5 [1] [1] [i_1] [9])))) ? (arr_2 [i_1] [i_0 + 2] [i_0]) : (((-7560397468399219232 & (arr_8 [i_0 + 2] [i_0] [i_0] [8])))))), ((max(1, (arr_0 [i_0 - 3] [i_0 - 2]))))));
                arr_11 [i_1] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_19 = ((!((min(var_7, ((-4537666674087692798 ? var_4 : var_9)))))));
    var_20 = 1340071332;
    #pragma endscop
}
