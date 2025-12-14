/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 |= var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((arr_0 [i_0]) ? 1 : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (((63524067 ? (arr_2 [i_0]) : var_15)));
                                arr_16 [0] [i_0] [i_2] [i_0] [5] = ((((((arr_11 [i_0] [i_0] [i_0] [5] [14] [i_0]) ? var_9 : (((1 ? (arr_6 [17] [i_0] [i_0]) : 23305)))))) ? ((((arr_3 [i_0]) ? ((-(arr_8 [8] [i_1]))) : 3945))) : (((((-1108130202 ? 255 : 8191))) ? (max((arr_0 [6]), 0)) : (((-(arr_9 [i_0] [1] [15]))))))));
                            }
                        }
                    }
                    var_21 = var_12;
                    var_22 |= ((!(((((max(63989, var_13))) ? 1 : (arr_3 [i_2]))))));
                    var_23 = ((((arr_14 [i_1] [i_0] [i_0] [i_0] [7] [1]) + 2383264702366640788)));
                }
            }
        }
    }
    #pragma endscop
}
