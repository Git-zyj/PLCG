/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [10] [8] [i_1 - 1] = ((((3762865752 + (arr_3 [i_0]))) >> (((5076740067087586099 | var_2) - 17797582218789369816))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] = (((((arr_9 [i_2 + 2] [i_3 + 1]) & (arr_4 [i_2 - 1])))) + ((var_8 ^ (arr_2 [i_2 - 1]))));
                            arr_14 [i_3] [i_3] [i_2] [i_2] = ((10379993257043943509 + var_0) < (-5076740067087586098 / var_11));
                            var_19 = (1595566807493517137 << 1);
                        }
                    }
                }
            }
        }
    }
    var_20 = var_8;
    var_21 = (max(var_21, var_13));
    #pragma endscop
}
