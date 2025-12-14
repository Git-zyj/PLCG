/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((((!(arr_3 [i_0])))));
                    var_14 = (max(var_14, (!var_2)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                var_15 -= (min((((arr_0 [i_3 - 4] [i_3 - 1]) - (arr_9 [0]))), (arr_8 [i_3 + 1])));
                arr_12 [i_3] = (!var_0);
                var_16 = (min((arr_1 [i_4 + 1]), (min((arr_1 [i_4 + 1]), (arr_1 [i_4 - 1])))));
                var_17 = ((((((arr_5 [i_4 - 1] [1] [i_3 + 1]) ^ (arr_5 [i_4 - 1] [i_3] [i_3 + 1])))) ? (((arr_2 [i_3 - 1] [i_4 + 1] [16]) ? (arr_2 [i_3 - 1] [i_4 + 1] [i_4 + 1]) : 1)) : (arr_11 [i_3] [11] [5])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((!((min(((max(1, var_7))), (arr_5 [i_3 + 1] [i_4 + 1] [i_3 - 2])))))))));
                            var_19 = (max((arr_15 [i_6 + 4] [i_5 - 1] [i_3]), (arr_0 [21] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
