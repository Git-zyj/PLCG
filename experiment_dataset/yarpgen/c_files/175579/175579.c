/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((((var_13 - 8753148234600661218) / (((arr_4 [i_0]) + var_13)))));
                var_18 = max((((((var_16 ^ (arr_3 [i_1 + 1]))) ^ (~var_3)))), (min(3473430517707951543, 32)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = ((~(((10824 < (arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = ((~(arr_3 [i_2])));
                                arr_17 [i_2] [i_3] [i_4] [i_4 - 1] [i_3] [i_4] = (((((((((arr_10 [i_2] [i_2]) ? (arr_9 [i_3] [i_3] [i_3]) : var_4))) ? (7011566453942011072 || 233) : (arr_16 [i_5 + 1] [8] [13] [i_5] [7] [i_6])))) ? ((3473430517707951543 ? ((var_2 ? var_9 : (arr_15 [i_4] [i_3] [5]))) : (arr_16 [i_3] [i_3] [i_4 - 1] [i_5 - 1] [i_6] [i_6]))) : (((((arr_11 [i_4 - 1] [i_5 + 1]) >= var_4))))));
                                var_21 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((min(((54720 ? 1 : var_2)), var_12))) ^ (min((((14973313556001600073 ? var_0 : 59360))), var_4))));
    var_23 = (((((max(0, 10815))) ? var_16 : var_4)));
    var_24 = var_7;
    #pragma endscop
}
