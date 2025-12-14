/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~37);
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((((arr_2 [i_0] [i_1]) == var_11))) ^ 7162))) || (((min((arr_5 [i_1]), var_5))))));
                arr_7 [i_1] = (((((-26025 + 2147483647) << (178 - 178))) & ((-16321 ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_1] [i_1 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] = max(70, (!165));
                            arr_14 [i_1] [i_1] [i_1] [14] [i_1] [14] = ((var_2 || (!var_0)));
                            arr_15 [i_3] [7] [i_1] [i_1] [19] [19] = (((arr_9 [i_1 + 2] [i_1]) ? ((max((arr_9 [i_1 + 2] [i_1]), (arr_9 [i_1 - 1] [i_1])))) : (arr_9 [i_1 + 3] [i_1])));
                            arr_16 [i_0] [i_1] [i_1] [i_0] = min(0, 2693);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
