/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = var_8;
                            var_16 = var_4;
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (-2147483647 - 1);
            }
        }
    }
    var_17 = ((((((var_7 - 2062672656) && ((var_10 && (-2147483647 - 1)))))) * (var_5 * 2147483647)));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_18 = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_19 = -2147483636;
                                arr_26 [i_4 - 2] [3] [3] [i_4] [i_7] [4] = var_12;
                            }
                        }
                    }
                    var_20 = 0;
                    var_21 = (9051048553081285255 || ((((var_8 / var_11) * (-4733 / 2147483635)))));
                    var_22 = (var_5 || var_9);
                }
            }
        }
    }
    var_23 = -2;
    #pragma endscop
}
