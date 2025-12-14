/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] [13] = (arr_2 [i_0 + 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_4] [10] [i_2] = var_6;
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [15] [i_3 + 1] [15] = var_3;
                                arr_15 [i_2] [i_2] [i_2] = (((((((3679149460 << (var_7 + 1632110595465015278))) == (arr_10 [i_4] [i_3] [i_2] [i_0])))) == (arr_2 [i_2])));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] = var_5;
                arr_17 [i_0] [i_0] [1] = 9606;
                var_11 = var_8;
            }
        }
    }
    var_12 = (min(var_1, (((28360 < (-954268124561734630 != -8192))))));
    #pragma endscop
}
