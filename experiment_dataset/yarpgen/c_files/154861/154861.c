/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_0] [i_0] = (min((((arr_3 [i_0] [i_0] [i_0]) && (arr_6 [i_0] [i_1] [i_2] [i_2]))), ((var_11 < ((var_14 & (arr_4 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_7));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] = (-23726 & 23725);
                                arr_16 [i_0] [i_0] [i_2] = var_11;
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = (min(3924982433, -23726));
    }
    var_18 = var_11;
    var_19 = (~-23726);
    var_20 = 640333399;
    #pragma endscop
}
