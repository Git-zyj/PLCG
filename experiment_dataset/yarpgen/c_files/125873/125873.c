/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (-0 ? -134217728 : 134217707);

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    var_12 = var_10;
                    var_13 = (min(var_13, var_5));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_11 [0] [0] [1] [2] = (~1);
                    var_14 = (max(var_14, (((~(~var_0))))));
                    var_15 += var_0;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    var_16 *= -var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (~var_2)));
                                var_18 = -9087977603051792730;
                                arr_21 [10] = ((var_3 ? var_2 : var_3));
                            }
                        }
                    }
                }
                var_19 = ((-1 ? var_3 : -var_3));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_20 -= ((~(((!(-127 - 1))))));
                                var_21 ^= ((~(!var_5)));
                                var_22 = var_10;
                                arr_34 [i_0] [0] [11] [12] [i_8] = ((~(~var_8)));
                                var_23 = (!var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
