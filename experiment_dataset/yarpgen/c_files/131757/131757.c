/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_4] [i_0] = var_1;
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 3] [i_4 + 3] = var_14;
                                var_17 = (!0);
                                arr_15 [i_0] [1] [i_3] [i_0] = ((!(((-(!-1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 &= 1;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (((~-32765) - 27));
                            }
                        }
                    }
                    arr_21 [i_2 - 1] [i_0] [i_0] [i_0] = ((-var_12 ? (!-var_2) : ((((min(1, (arr_0 [i_2]))) || (!0))))));
                }
            }
        }
    }
    var_19 = (min(((min(27, var_2))), var_9));
    var_20 *= -var_13;
    var_21 = ((var_14 ? (!-var_12) : (!var_10)));
    #pragma endscop
}
