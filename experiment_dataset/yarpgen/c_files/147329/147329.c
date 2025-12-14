/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(((max(var_8, var_7))), ((var_5 ? var_7 : var_0)))), var_0));
    var_11 = (max((((((var_4 ? var_8 : var_8))) ? var_2 : (((var_2 ? var_8 : var_4))))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (min((min((arr_4 [i_1] [i_1]), (arr_4 [i_0] [i_0]))), (((!(arr_4 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_0] [5] = var_1;
                            var_13 = (max((((~(arr_7 [i_1] [i_0] [i_3])))), ((var_9 ? (((arr_1 [i_0]) ? var_2 : var_3)) : (((min((arr_5 [i_0]), var_4))))))));
                        }
                    }
                }
                var_14 += (((!((min((arr_4 [i_1] [i_0]), var_8))))));
            }
        }
    }
    #pragma endscop
}
