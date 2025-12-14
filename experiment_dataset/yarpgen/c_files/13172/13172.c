/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_6);
    var_11 = (max((((~((min(-26296, -26307)))))), (min(var_3, (~var_6)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 &= 3003661817745356466;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_13 = (~((~(min(var_3, (arr_0 [i_0]))))));
                        var_14 = (min(var_14, ((max(((((arr_4 [i_0] [i_2] [i_3]) ^ (arr_8 [i_1])))), (((var_2 ? var_1 : var_3))))))));
                        var_15 *= ((((((-(var_4 >= var_4))) + 2147483647)) >> (((arr_7 [12] [12]) - 138764271))));
                        var_16 = (min(var_16, ((max((((!(arr_2 [i_0] [20])))), ((((30611 ? -6742002487352971905 : 26306)) & ((var_7 ? (arr_5 [i_0] [i_2] [18]) : 34915)))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((~(((arr_0 [i_0]) ? var_6 : var_2))));
                        var_17 = (((arr_6 [i_0]) ^ 13450939849799354038));
                    }
                    arr_15 [i_0] [i_1] [20] [20] |= (min(var_0, (((min(var_7, 23556))))));
                }
            }
        }
        var_18 = (min(var_18, ((((var_7 & 3915710951482687906) ? ((((!((min(var_0, (arr_5 [i_0] [i_0] [8])))))))) : (max((((arr_8 [i_0]) ? var_7 : (arr_1 [i_0] [i_0]))), (((arr_10 [i_0] [10] [10] [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [24]) : (arr_6 [i_0]))))))))));
        var_19 &= (((((((14531033122226863709 ? 2524942459138001577 : -26306))) ? var_6 : (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), var_1)))) == var_6));
        var_20 = ((((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) >= -16384)) ? 14531033122226863709 : (14531033122226863700 | 30620)))) ? (max(((var_8 ? var_0 : (arr_5 [i_0] [i_0] [i_0]))), ((((arr_13 [i_0] [i_0] [i_0] [2] [5] [i_0]) | var_3))))) : (((((!(arr_0 [i_0]))))))));
    }
    #pragma endscop
}
