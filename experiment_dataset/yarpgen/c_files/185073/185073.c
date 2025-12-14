/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1 - 3] [i_2] [i_3 - 1] = (max(var_3, -var_6));
                            var_12 = (min(var_12, ((((((arr_8 [i_1 - 2] [i_3 - 1] [i_3 - 1]) ? 1 : 20)) ^ 1)))));
                            arr_13 [i_3 - 1] [i_0] [i_1] [i_1] [i_0] [i_0] = (max((max((arr_4 [1] [1]), -1169292885)), (arr_1 [i_2] [i_2])));
                        }
                    }
                }
                var_13 = (arr_5 [i_0] [i_1 - 1] [i_1 - 1]);
                var_14 = (max(var_14, ((((arr_0 [i_0 + 4]) ? 2294513558 : ((max(((max(var_9, 127))), ((var_2 ? 152 : var_6))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                var_15 = (arr_7 [i_4]);
                arr_19 [i_4] [18] &= ((((((((146 ? (arr_2 [i_4] [1]) : (arr_0 [i_4])))) ? (max((arr_10 [i_4] [i_5] [i_5 - 1] [i_5 - 1]), var_7)) : 487181472))) ? (((((-(arr_3 [i_5])))) - ((var_0 ? (arr_14 [i_4]) : var_3)))) : (((((((-(arr_2 [i_5 - 1] [i_4])))) || (((var_1 ? (arr_0 [i_4]) : var_2)))))))));
                var_16 = 0;
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
