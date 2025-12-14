/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 || ((((((114 ? var_8 : var_4))) ? (max(var_5, 16203735868555752591)) : 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((var_4 ? ((-(max(990669554, var_1)))) : -var_8));
                    var_17 = 990669564;
                    var_18 = ((~((~((var_2 ? (arr_3 [i_1 - 2]) : var_3))))));
                    var_19 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_12));
                                arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 1] [i_3] [i_3] [i_4] = (arr_8 [16] [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_4]);
                                var_21 = max(1, 23058);
                                var_22 = ((min(var_14, ((min(var_9, (arr_5 [i_1] [i_1] [i_1])))))));
                                var_23 = (max(var_23, ((((((-(arr_6 [i_0] [i_1 - 1] [i_2] [i_3]))) % 914851921))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((-1288197291 ? var_14 : ((min((~var_4), -115)))));
    #pragma endscop
}
