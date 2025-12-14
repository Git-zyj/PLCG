/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((!(arr_0 [i_0 - 1]))) ? -64 : (min(((var_2 ? 6753144940438995809 : 83)), (!16715661989737530669))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] = (min(((172 ? ((96 ? 10248831901307178035 : (arr_7 [i_3 + 1] [i_2] [i_1] [i_0]))) : (arr_1 [i_2]))), (((((83 && (arr_0 [i_0]))) ? (112 / var_17) : ((var_17 ? (arr_9 [i_0] [i_0] [i_2] [i_0] [i_2]) : -2475091886712615170)))))));
                            arr_11 [i_3] [i_1] [i_1] = ((((var_8 ? (arr_8 [i_1 - 2] [i_1 - 2] [i_0 - 1] [i_3] [i_3 + 1]) : var_13)) ^ (((arr_8 [i_1 - 1] [i_2] [i_0 + 2] [i_1 - 1] [i_3 - 2]) ? (arr_4 [i_1 + 1] [i_1] [i_0 + 2]) : var_7))));
                            arr_12 [i_0] [i_1] [i_2] [18] = 127;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 ^= ((-(arr_5 [i_1 - 3] [i_5 + 1] [i_4 - 1])));
                            arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 4] [i_0] = (max((((arr_7 [i_5] [i_4] [i_1] [i_0]) ? 3068 : -82)), (((arr_15 [21] [i_4] [i_4] [i_5] [i_5]) ? (!128) : (arr_0 [i_0 + 1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [i_6] [i_7 - 1] [i_6] [i_1] [18] [i_0] [i_6] = (((+((8197912172402373581 ? (arr_13 [i_0 + 1] [i_1] [i_6]) : var_12)))));
                                var_22 = (max(var_22, (arr_17 [i_6] [i_6] [i_7 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
