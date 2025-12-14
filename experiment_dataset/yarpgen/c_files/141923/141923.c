/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (max(var_12, var_10));
    var_13 = (!1099394496);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((~((var_5 ? var_3 : ((~(arr_4 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 = (max((arr_3 [1]), (max((((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : var_8)), ((max(1, (arr_1 [i_3]))))))));
                            arr_10 [i_1] [i_1] = ((!(((max(1099394496, (arr_1 [5])))))));
                        }
                    }
                }
                var_16 = (max((!var_6), (arr_2 [i_0] [i_0])));
                var_17 = (-32767 - 1);
            }
        }
    }
    #pragma endscop
}
