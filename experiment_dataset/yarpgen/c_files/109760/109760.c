/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((min(1, -24711))) ? (var_0 <= var_3) : var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((0 ? (13250429010299192624 % 28278) : 7886));
                    arr_9 [i_2] [i_2] [i_0] = (min(((1 | (198 | -28279))), -32765));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_16 = (((max(((min(var_1, 62))), ((var_2 ? 4209629386582852827 : 939524096)))) >> (((((28278 ? 32765 : var_10))) - 32735))));
                            arr_18 [1] [i_3] [i_4] [i_6] [i_6 + 3] = (min(var_13, (~-28278)));
                            arr_19 [8] [8] [12] [i_6] = (-1410 || 1);
                        }
                    }
                }
                arr_20 [i_3] [i_3] [i_4] = 28279;
                var_17 = ((((var_3 ? 2004628189 : var_5)) / 151));
                var_18 = (((((((-65 * 13228384588716543784) && (((var_1 ? -20453 : -32761))))))) % (((((var_0 ? var_9 : -1661211098))) ? ((58 ? 7652834521622491721 : -28258)) : 476702832))));
            }
        }
    }
    var_19 = (min((!var_11), (min(var_1, (max(255, 616))))));
    #pragma endscop
}
