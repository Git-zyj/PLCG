/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 527730423;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_5 [i_3 - 1] [i_0])));
                                var_21 = (min(((~((min(var_3, var_11))))), (arr_13 [2] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 ^= var_14;
                            var_23 &= ((max(var_6, (arr_11 [i_0] [i_5] [i_5] [i_5]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = var_14;
                            var_25 = ((+(((arr_20 [i_0] [i_7] [i_0] [i_0]) + var_18))));
                        }
                    }
                }
                var_26 = (max(var_26, ((min((((arr_6 [i_0] [i_0] [6]) ? 193 : 536854528)), (~var_13))))));
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
