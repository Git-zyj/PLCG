/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = ((!(arr_4 [i_0 + 1] [i_1] [16])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [15] [3] [15] [i_2] [i_1 - 2] = (arr_8 [i_0 - 1] [i_1 + 4] [i_1 + 3]);
                            arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 3] = arr_8 [i_0] [i_0] [i_0];
                            arr_16 [i_0] [i_1] [i_2] [12] [i_1] = 2858946276;
                            var_15 = (min(var_15, (((((var_3 + (arr_12 [i_1 + 3] [i_1] [i_1] [i_1 - 2]))) + ((var_7 ? (arr_12 [i_1 + 3] [i_1] [i_1] [i_1 - 2]) : (arr_12 [i_1 + 3] [15] [i_1 + 3] [i_1 - 2]))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] = (((((((arr_4 [i_0] [i_3] [i_0]) ? (arr_10 [i_0] [i_3] [i_2] [i_3]) : (arr_10 [i_0] [i_1] [i_2] [i_3])))) ? (arr_7 [i_2] [i_1 + 3]) : (((-22 == (arr_8 [i_0 + 1] [i_0] [i_0 + 1])))))) ^ (((((max(var_7, 6))) || ((max((arr_3 [i_0] [i_1] [i_3]), 6)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_16 = (max((((2858946260 ? (arr_20 [i_0 + 3] [i_1 + 2] [i_4 - 2]) : ((-1743262020 ? (arr_21 [i_0 + 1]) : -71527089))))), (~var_2)));
                            var_17 ^= (arr_7 [i_5] [i_4 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_5 / var_2);
    var_19 = var_2;
    #pragma endscop
}
