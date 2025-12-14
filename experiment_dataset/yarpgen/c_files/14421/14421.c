/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = 29983;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max(1, (((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))) ? (((((arr_0 [i_0]) + 2147483647)) << (((arr_3 [i_0]) - 1809436109)))) : (arr_3 [i_1])))));
                var_15 = ((!(arr_0 [i_1])));
                arr_5 [i_0] [i_0] = ((((var_8 + ((-(arr_4 [i_0] [i_1]))))) | var_10));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] = min(20485, (((((3146218 << (((arr_1 [i_1]) - 21412))))) ? ((max(var_9, 32706))) : (arr_11 [i_0] [i_1] [i_1] [i_0]))));
                                var_16 = var_3;
                                arr_16 [i_4] [i_3] [i_3] [i_0] = ((!(~var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((min(753927914, var_10))) ? ((max(var_9, var_9))) : (var_1 - var_10)));
    #pragma endscop
}
