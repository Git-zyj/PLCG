/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                    arr_8 [5] [5] [5] = (((arr_0 [i_0] [i_0 - 1]) / 59));
                    arr_9 [i_0] [i_2] [i_2] [i_1] = (((((arr_3 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_0])))) && ((0 && (arr_5 [i_0] [i_0] [i_0]))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (arr_3 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [i_3] [i_1] [i_4] [2] [1] = max(((((arr_3 [i_0]) ? (arr_6 [i_3] [i_1] [i_3] [1]) : -42))), ((((arr_0 [i_0 + 1] [i_0 - 1]) | (((arr_11 [i_4] [i_1] [i_0]) ? (arr_13 [i_3]) : 0))))));
                            arr_17 [i_3] [i_3] [i_3] [i_4] [i_0] = ((4226659416 < (((((((arr_3 [i_0]) < -16)))) & (((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0])))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [4] = (max((((min((arr_1 [i_3]), -16)))), (((arr_0 [i_1 - 1] [i_1 - 1]) | (arr_11 [i_0 + 1] [i_0 + 1] [i_0])))));
                        }
                    }
                }
                arr_19 [i_1] [i_0] = (min((arr_15 [i_1] [14] [14] [i_0]), ((((arr_5 [i_1] [i_1] [i_0]) ? (arr_11 [1] [i_0] [i_0]) : 62)))));
                arr_20 [i_0] [i_0] [11] = (((arr_15 [16] [i_1] [10] [i_1]) < (8191 < 1)));
            }
        }
    }
    #pragma endscop
}
