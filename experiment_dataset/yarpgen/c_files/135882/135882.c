/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] = 5144951747468138573;
                arr_7 [i_1] = 1;
                arr_8 [i_0] [i_1] [1] = (max(((max((arr_5 [i_0] [1]), 1))), 4411047287468100934));
                var_17 -= var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_3] [i_4 - 1] [i_4 - 1] [1] [i_2] [i_5] = (arr_18 [i_6]);
                                var_18 = ((-(arr_11 [i_4 - 1])));
                                arr_25 [i_2] [8] [i_5] [8] [i_6] = (((((arr_10 [i_3]) & (((max(1, (arr_13 [1] [1] [i_6])))))))) ? (max((max(8080019903014972938, 0)), 9223372036854775807)) : ((-(arr_10 [i_4]))));
                                var_19 ^= (((arr_21 [1] [i_6] [i_6] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5]) ^ (max(-8891132627616322226, 4411047287468100934))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_31 [i_2] [i_3] [i_7] [1] [i_8] = (7916507396762568293 && 8666334431255074403);
                                var_20 = arr_19 [i_7] [i_3] [1];
                            }
                        }
                    }
                    arr_32 [i_2] [i_3] [i_4 - 1] = -8080019903014972933;
                }
            }
        }
    }
    var_21 = ((((((~var_15) - var_14))) ? (max(8080019903014972918, var_1)) : (4687979958854508664 && 3284260281337695190)));
    #pragma endscop
}
