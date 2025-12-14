/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_6 [i_2] = ((var_8 ? var_9 : (arr_3 [4] [4])));
                    var_20 = 4428289590504269299;
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = ((!((((var_18 >= var_18) ^ (arr_10 [i_3 - 1] [14] [i_3 - 3] [i_4] [i_3 - 3] [i_3 - 1]))))));
                                var_22 = (max(var_22, (((((((arr_4 [i_3 - 3] [i_3 - 1] [i_1 - 2] [10]) + (arr_10 [i_5] [4] [i_1] [i_1] [i_1 - 1] [i_1 + 1])))) ? ((min((arr_4 [i_0] [1] [i_4] [i_5]), 4962))) : -2504927397606084643)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += var_19;
    #pragma endscop
}
