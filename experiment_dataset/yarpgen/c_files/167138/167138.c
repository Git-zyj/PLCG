/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167138
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
                var_18 = 4294967295;
                var_19 = ((((min(4294967295, -18446744073709551615))) ? var_5 : (arr_4 [i_0] [i_1])));
                arr_5 [i_0] [i_1] [i_1] = (((!-98) | (((min(var_7, 19007))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [10] = 0;

                            for (int i_6 = 2; i_6 < 10;i_6 += 1)
                            {
                                var_20 = 4294967295;
                                var_21 ^= 10132;
                            }
                        }
                    }
                }
                var_22 = ((-19008 ? (min(var_14, (~1))) : var_1));
                var_23 = (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
