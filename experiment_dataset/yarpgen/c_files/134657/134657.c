/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = ((1 < ((var_6 ? var_1 : var_5))));
                            var_13 ^= max(var_7, (arr_10 [i_1] [i_2]));
                            var_14 |= var_3;
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] |= (arr_9 [i_0] [i_2]);
                        }
                    }
                }
                var_15 = ((var_4 * ((var_2 ? 0 : ((max(100, var_11)))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((arr_8 [i_0] [12] [12]) ? (min(var_3, 6230415775329085345)) : -6))));
                            arr_19 [i_4] = (max((!9), (max(-var_10, (max(6230415775329085338, -15))))));
                            arr_20 [i_0] [i_1] [i_0] = ((((max((min(var_7, 20339)), ((min(var_9, var_9)))))) ? ((94 ? (((var_9 ? var_10 : var_11))) : (min(var_5, (arr_2 [i_4 + 2]))))) : (max((~var_1), (max(var_5, var_7))))));
                            arr_21 [i_0] [i_1] [1] [i_5] [i_0] [i_4] = (!var_4);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                arr_27 [i_7] = ((+(((arr_7 [i_6] [i_7] [i_6]) ? (arr_1 [i_6] [i_7]) : var_12))));
                var_17 = (min(var_17, var_10));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_18 |= -var_4;
                            arr_32 [i_6] [i_7] [i_8 + 1] [8] [i_8] = 227;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
