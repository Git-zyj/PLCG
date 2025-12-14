/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (21 != 12);
    var_12 = var_1;
    var_13 = ((((var_0 >= 69) >> (var_8 < var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [9] [i_1] = (((((arr_2 [1] [i_1 - 3] [i_0 + 1]) << (((arr_2 [i_0] [i_1 - 1] [i_0 - 2]) - 684679803)))) << (((arr_2 [i_1] [i_1 + 2] [i_0 - 1]) - 25210))));
                var_14 = ((var_8 && ((((arr_1 [i_0 + 1]) ^ ((107 ? 246 : 89)))))));
                var_15 = (((((((min(1, (arr_0 [10] [i_1 - 3])))) & (~var_10)))) ? (~15) : ((((arr_3 [i_0 + 1] [i_0 + 2] [i_1 + 2]) ^ (arr_3 [i_0 - 2] [i_0 - 1] [i_1 - 3]))))));
                arr_5 [i_0] = (max(64, 159));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((((1 > -100) ? 20858 : ((17422106878067224135 ? -3695 : 1652413644)))));
                                var_17 = ((-(arr_8 [i_3 - 1] [i_1 - 3])));
                                var_18 = (((((((~(arr_9 [i_0] [i_0] [i_2] [11] [i_4])))) ? (arr_7 [i_4] [i_1]) : ((max((arr_0 [i_1] [i_4]), var_6)))))) ? var_0 : var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((1 | -4367122827898245973) - (((min(var_6, var_5))))));
    #pragma endscop
}
