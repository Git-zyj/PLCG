/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_0 [i_0 - 2] [i_0 + 2]), ((var_15 - (arr_1 [i_0 + 1])))))) ? ((((-127 ? var_3 : var_7)) & var_7)) : var_19));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [12] [i_0] [i_2] = (((((-(max(var_2, var_13))))) ? (53880 - 7) : -8817955076594545320));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 ^= (((((1 ? 119 : var_2))) && ((!(arr_1 [i_0])))));
                                var_21 = (max((min((arr_8 [i_0 + 2] [i_1] [i_2] [i_0] [i_3] [i_4]), (arr_8 [i_0] [i_1] [i_2] [i_0] [3] [i_2]))), (((-((var_9 ? 11656 : (arr_5 [i_0] [i_1] [i_2] [i_3]))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = (max(919489497, 127));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (!var_0);
    #pragma endscop
}
