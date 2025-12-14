/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 |= (!-var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 *= (((arr_3 [i_0 - 1] [i_0] [i_0 - 1]) ? (((arr_3 [i_0] [i_0 - 1] [i_0 - 1]) ? 3509242919 : var_1)) : ((((arr_3 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0] [i_0] [i_0 - 1]) : var_14)))));
                var_21 = ((~(arr_0 [i_0 - 1] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_4] = (((((var_2 > var_9) != (~var_10))) ? (arr_2 [i_2] [i_4]) : var_0));
                    var_22 = ((max((arr_6 [i_2] [i_2] [i_4]), (arr_0 [i_2] [i_2]))) << (785724360 - 785724332));
                    var_23 = ((785724394 ? 2513672699882560040 : 17825414871705912206));
                }
            }
        }
    }
    #pragma endscop
}
