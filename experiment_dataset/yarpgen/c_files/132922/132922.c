/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 1));
                arr_6 [i_0] [6] = 1;
                arr_7 [i_1] [i_0] = (min((arr_4 [7] [i_1 + 3]), 15393951081960216957));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = (max((((!(arr_5 [i_1 - 1] [i_1 - 1] [i_2])))), ((var_11 << (((arr_11 [i_0] [i_1 + 1] [1] [i_0]) + 638714490453058172))))));
                            arr_14 [i_1] [i_1] [i_3] = (min((((max(1, var_15)) * var_5)), (((-((1 ? 1 : -2532)))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((-803828051 ? (((((arr_9 [i_0] [3] [i_3]) != (((arr_2 [i_2]) ? (arr_0 [i_2]) : (arr_9 [i_0] [i_0] [i_3]))))))) : ((0 ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 3]) : var_11))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = ((-2537 == 2524) ? var_13 : -11989);
            }
        }
    }
    var_17 = (max(var_17, ((min(var_7, var_9)))));
    var_18 = (min(var_18, (((-((26478 ? -803828053 : 4611686018427387904)))))));
    #pragma endscop
}
