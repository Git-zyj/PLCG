/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_18));
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (max((((((((arr_5 [i_0] [6] [10] [i_2]) ? -443461411535736720 : 82))) && ((var_9 || (arr_1 [i_0])))))), (~var_3)));
                    var_21 = (max((arr_0 [i_0]), ((!(arr_1 [10])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_14 [i_3] [i_4] = ((((((((arr_12 [1] [i_4] [i_4] [i_5]) / (arr_9 [i_5]))) / (arr_12 [i_4] [i_4] [i_5] [i_5])))) ? (arr_11 [i_3] [i_3]) : (min(657368387, (var_6 / 1)))));
                    arr_15 [i_4] = (max((((arr_9 [i_3]) ? (((max((arr_11 [1] [21]), (arr_10 [i_3] [i_4]))))) : (min((arr_13 [i_3] [i_3] [i_3]), 14303106558901664755)))), ((max((min((arr_11 [i_3] [i_5]), 443461411535736718)), (arr_9 [i_3]))))));
                }
            }
        }
    }
    var_22 = (((!var_18) >= (((((var_0 ? var_13 : 14))) ? 12809 : var_14))));
    #pragma endscop
}
