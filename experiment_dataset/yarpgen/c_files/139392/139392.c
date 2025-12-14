/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 -= (arr_2 [i_1]);
                var_14 = ((+(min((var_0 & var_4), (arr_1 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = 32756;
                                var_16 = ((((((max(var_9, (arr_12 [20] [1] [5] [i_6])))) ? -5863682955123787873 : ((var_0 ? 1 : (arr_9 [i_2] [i_5] [i_6]))))) * ((((arr_18 [i_2]) * 0)))));
                            }
                        }
                    }
                }
                var_17 *= -7132857570178168392;
                arr_19 [i_2] [i_2] = arr_12 [1] [i_2] [i_3] [i_3];
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max((((!(arr_15 [i_8] [i_2] [i_2 + 3] [i_2 + 4])))), var_4)))));
                                arr_26 [i_2] [i_3] = var_11;
                                var_19 = (max(var_19, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
