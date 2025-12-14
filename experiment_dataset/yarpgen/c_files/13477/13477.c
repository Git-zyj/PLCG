/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((1 ? var_6 : var_9))) ? (!var_0) : (max(-7657386208370545320, 1)))) > var_0));
    var_14 = (((((max(var_2, 1)))) + (-2147483647 - 1)));
    var_15 = ((((var_10 > (!1))) ? var_9 : ((((2147483647 < ((max(1, 1)))))))));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1 + 1] [i_0] = -48;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (((arr_3 [i_2 + 1] [i_0]) && ((((arr_3 [i_0 - 1] [1]) ? (arr_3 [i_0 + 2] [i_1 - 1]) : (arr_0 [i_0 + 2]))))));
                            var_18 = var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 = -var_9;
                                var_20 = (max((max(var_10, (-63 / 1))), (!var_4)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
