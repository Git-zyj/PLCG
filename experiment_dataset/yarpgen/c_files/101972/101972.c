/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_13 = (max((min(var_7, (~2633))), ((-(~var_0)))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_4 [9]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_18 [i_1] [i_2] = ((max(((max(63, (-2147483647 - 1))), (max(-5807545669994409229, var_9))))));
                                arr_19 [i_1] [i_1] = ((((min(29856, ((max(2633, 0)))))) && (((((min((arr_6 [i_6]), var_10))) ? (max(16217147, (arr_14 [i_1]))) : (((2633 ^ (arr_14 [i_1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_27 [i_1] [i_1] = (max(((((arr_9 [i_7 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1]) != 1))), ((((arr_3 [i_7 - 2]) ? 1404738091224982661 : var_7)))));
                                arr_28 [i_0] [i_1] [i_7] = (max((!18446744073709551610), ((-(1404738091224982661 & 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (!var_10);
    var_15 = var_8;
    #pragma endscop
}
