/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 = ((0 ^ 12537) ^ 423826180788442168);
                            var_11 = (arr_10 [i_1]);
                        }
                    }
                }
                var_12 *= (min((max(((((arr_5 [i_0] [3] [i_0 - 4] [i_0]) ? 14 : 423826180788442168))), ((7668276176966667081 ? 0 : (arr_10 [i_0]))))), (max(var_2, ((((arr_2 [i_0] [i_0] [i_0]) ? 56 : 12)))))));
            }
        }
    }
    var_13 = (var_5 + (((-((-37 ? var_7 : var_1))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_17 [i_4] = ((((((var_0 ? var_4 : var_1))) ? (arr_1 [i_4 + 2]) : (((((arr_7 [16] [i_5]) < var_7)))))));
                arr_18 [i_4] [i_4] = var_9;
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_14 = (((!(arr_19 [i_8 - 2] [i_6 - 2] [i_7 + 1]))));
                                var_15 ^= 41;
                                var_16 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
