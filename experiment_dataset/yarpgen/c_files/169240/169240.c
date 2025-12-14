/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 < (((!-21) ? var_11 : var_8))));
    var_13 = 8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] = (((((8 - (((arr_5 [i_0] [i_1] [i_2] [i_4]) ? 65535 : (arr_0 [i_0] [i_0])))))) ? -19 : (arr_9 [i_1] [i_2] [i_1] [i_0])));
                                var_14 = (((~var_7) ? -var_6 : (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])));
                                var_15 ^= -173482150;
                                var_16 = ((5410760087122293548 || (arr_9 [i_2] [i_2] [i_2 - 3] [i_2 + 1])));
                            }
                        }
                    }
                    arr_13 [i_2] [i_2 - 3] [i_1] [i_0] = 4121485141;
                    var_17 = ((-2 ? -2 : 31463));
                    arr_14 [i_0] [i_0] [i_0] = 24333;
                }
            }
        }
    }
    #pragma endscop
}
