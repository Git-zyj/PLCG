/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((!-18) << (-4691387980273466631 + 4691387980273466643))) | var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 = ((-(min((~var_2), ((-4691387980273466615 & (arr_5 [i_3] [20] [i_1])))))));
                            var_12 = (min(var_12, (2077405838 + -var_0)));
                            var_13 ^= ((-(arr_10 [i_1] [i_1 - 2] [i_1 - 1] [i_3] [i_3])));
                            var_14 = var_7;
                            arr_12 [i_0] [i_1] [i_0] [5] = var_1;
                        }
                    }
                }
                var_15 = var_3;
            }
        }
    }
    #pragma endscop
}
