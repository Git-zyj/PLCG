/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((max(var_4, (arr_5 [1] [i_2] [i_2 - 3] [i_2 + 1]))) < (((1 ? (((!(arr_6 [i_0] [i_0] [i_1] [i_2])))) : 32744)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_3] = (arr_9 [i_2] [i_2] [i_1]);
                                arr_13 [3] [i_1] [i_2] [i_2 - 3] [i_3 + 1] [i_4] [i_1] = (max(-25325, ((6796 ? 10106984250032400750 : 255))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_2] = (min(15, 1946516252));
                                var_18 = (min(var_18, var_9));
                            }
                        }
                    }
                    var_19 = (min(var_19, (((!(((var_7 * (arr_1 [i_0])))))))));
                }
            }
        }
    }
    var_20 = ((((var_9 & (~var_8)))) & ((~(~var_12))));
    var_21 = var_4;
    #pragma endscop
}
