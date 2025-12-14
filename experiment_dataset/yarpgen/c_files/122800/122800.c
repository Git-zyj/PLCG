/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_13 % var_4);
    var_15 = ((max(13591069801668222777, 4294967277)));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 |= (min((arr_1 [5] [i_1]), (arr_3 [i_0] [i_1 + 1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_1 - 3] [i_1 - 3] [i_0] [i_2] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_18 = (max(var_18, ((max(217, var_4)))));
                            arr_13 [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_3] = ((var_11 ? ((11697235148401336026 ? (1412308392 && 1) : 165)) : (((!(((4294967295 ? var_5 : 1412308392))))))));
                        }
                    }
                }
                arr_14 [9] [i_0] [i_1] = ((-(max(((((arr_4 [i_1 - 3] [i_1]) * 7566))), (~var_12)))));
                var_19 |= max(((((!(arr_5 [i_0] [i_0] [i_1 - 1]))) ? ((34 ? 8910416404372591376 : 1040187392)) : 14259116234874719699)), ((max(((min(3440302063, 1))), 1))));
            }
        }
    }
    #pragma endscop
}
