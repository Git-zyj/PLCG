/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_6));
    var_20 = (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((!(!27963)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 += (((~(arr_13 [4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1]))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [1] [i_4] = ((!((!(arr_8 [i_0] [i_1] [i_1 - 1] [i_3])))));
                                var_23 += ((!(!1716302321)));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] [i_4] = (!-394903064);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 ^= 13;
                                arr_23 [i_1] [i_1] [i_2] [i_5] [i_6 - 1] = ((!(arr_16 [i_0] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
