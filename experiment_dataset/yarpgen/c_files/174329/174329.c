/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (25791 % -3258293513874868839);
                    arr_8 [i_1] = ((((max((arr_0 [i_1]), (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])))) ? var_9 : ((~((max(var_4, (arr_1 [i_1]))))))));
                    arr_9 [i_0] [i_0] = (max((arr_1 [i_0]), ((!(arr_3 [i_0 + 2] [i_1] [i_2 - 1])))));
                    arr_10 [i_0] [i_0] = (arr_5 [i_2 - 2] [i_2 - 2] [i_1 - 1]);
                }
            }
        }
    }
    var_21 = (var_11 ? (!var_17) : -7982205991696393655);
    var_22 = var_7;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_23 = (((arr_14 [i_3 + 1]) ? (!768931462) : ((var_18 ? (arr_13 [i_4]) : var_0))));
                var_24 = (0 - 2048);

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_25 = (max(var_25, ((((min(229376, (!1444197460))) | 4294967276)))));
                    var_26 = (!8294627171465537518);
                }
            }
        }
    }
    #pragma endscop
}
