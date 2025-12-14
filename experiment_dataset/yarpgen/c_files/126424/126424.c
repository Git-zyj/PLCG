/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = ((-(!var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] = var_0;
                            var_18 = (min(var_18, var_8));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 6;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                {
                    var_19 ^= -var_11;
                    var_20 = (~var_16);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_21 = var_8;
                                var_22 = (max(var_22, var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
