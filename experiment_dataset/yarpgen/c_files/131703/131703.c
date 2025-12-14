/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = 963738334149363558;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = var_11;
                                var_17 = (arr_14 [i_0] [i_0] [i_0] [i_1] [3]);
                                arr_15 [10] [i_0] [i_2] [i_3] = (i_2 % 2 == zero) ? ((((((-32767 - 1) + 2147483647)) >> (((arr_12 [i_4] [i_2] [i_2] [i_1] [i_1 - 1]) - 913703852))))) : ((((((-32767 - 1) + 2147483647)) >> (((((arr_12 [i_4] [i_2] [i_2] [i_1] [i_1 - 1]) - 913703852)) - 3152141907)))));
                                var_18 = (!18014398501093376);
                                arr_16 [i_2] [i_3] [i_2] [i_1] [i_2] = -164797510;
                            }
                        }
                    }
                    arr_17 [i_1] |= var_11;
                    arr_18 [i_0] [i_1 - 1] [i_2] [i_2] = (var_4 | var_14);
                }
            }
        }
    }
    var_19 -= var_2;
    var_20 = (min((((963738334149363530 > (51768 < 0)))), var_3));
    #pragma endscop
}
