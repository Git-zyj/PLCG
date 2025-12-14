/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(((0 ? 7983907000309731909 : 92)), (((var_4 ? var_4 : var_12)))));
                                var_18 = 28299;
                            }
                        }
                    }
                }
                var_19 ^= (-32767 - 1);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_20 = ((!(((~(!var_15))))));
                            arr_19 [i_1] [i_1] [4] [i_6] [10] [i_6] = var_11;
                            var_21 = 194;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] [i_8] = ((-974278501 ? var_5 : 25));
                                var_22 = ((+(((~-2051024404) ? var_1 : (~var_4)))));
                                var_23 = (min(((var_1 ? var_10 : var_9)), (((-6243616713872371123 ? var_9 : var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
