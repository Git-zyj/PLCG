/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(0, 1073741312)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_14, (((min(var_13, var_6))))));
                                var_22 = (max(((min(var_13, var_12))), var_10));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = (min(4237212859, ((max(var_2, var_15)))));
                arr_15 [i_0] [i_0] = (min((((min(var_19, 32838)))), (max(434322514, ((max(var_18, (arr_12 [i_1] [i_1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
