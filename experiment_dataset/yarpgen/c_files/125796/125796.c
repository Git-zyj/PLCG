/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((var_4 / 6), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (arr_2 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = 1;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_11 [i_0] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0]), (1 && 29312)));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((!var_10), (min((!18446744073709551615), var_3)));
                            var_15 = (min(var_15, 1));
                            var_16 = (max(62979, var_4));
                        }
                    }
                }
            }
        }
    }
    var_17 = (((var_5 ^ var_1) ? (!var_3) : var_4));
    #pragma endscop
}
