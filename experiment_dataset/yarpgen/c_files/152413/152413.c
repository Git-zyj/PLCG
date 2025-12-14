/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((((!(arr_5 [i_2] [i_1] [i_0]))))) * (((arr_4 [i_0]) ? (arr_2 [i_0] [i_0]) : ((min((arr_4 [i_1]), (arr_6 [i_0])))))))))));
                    var_16 = ((~(~-var_9)));
                }
            }
        }
    }
    var_17 = (min(var_17, ((var_5 ^ ((var_7 >> (var_13 || var_9)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_18 = (max(var_18, (((((((arr_1 [i_4]) / (arr_8 [i_3] [i_4] [11])))) ? (arr_9 [0]) : (var_6 / var_12))))));
                var_19 = (min(var_19, (((+(max((arr_7 [i_3] [i_3] [i_4]), (arr_7 [i_4] [i_4] [i_4]))))))));
                arr_14 [i_4] = (arr_12 [i_4]);
                arr_15 [1] [i_4] = (min((((!(((arr_3 [i_3]) || (arr_10 [i_3])))))), (min(var_2, (arr_1 [i_3])))));
            }
        }
    }
    #pragma endscop
}
