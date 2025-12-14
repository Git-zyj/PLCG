/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 += (min((arr_2 [i_1 + 1]), 163));
                arr_5 [i_1] [i_1] [i_1] = ((((min((arr_1 [i_1 - 2]), 79))) ? (((arr_1 [i_1 - 1]) - (arr_1 [i_1 - 2]))) : ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2]))))));
                var_15 -= -264828142;
                var_16 = (max(var_16, (min(((((0 & (arr_4 [8] [8]))) >> (((~6798) + 6812)))), ((~((min(var_3, 1)))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (max(var_17, 1));
        var_18 *= (max(((!(arr_8 [i_2] [i_2]))), ((!(arr_6 [i_2])))));
        var_19 = (max((arr_7 [i_2] [i_2]), 9075448110914980919));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_20 = ((((((min((arr_12 [i_3]), -13693))) && (arr_8 [i_3] [i_3]))) && ((!(!0)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        var_21 = (max(var_21, var_9));
                        arr_23 [i_3] [i_4] [i_4] [i_6] [i_4] = ((((1 >> (((arr_21 [i_3] [i_4] [7] [i_6]) - 13410)))) - 115));
                        arr_24 [i_5] = 86;
                    }
                    var_22 = (max(var_22, 21298));
                    arr_25 [i_3] [i_4] [i_5] = (((arr_8 [i_5 + 1] [i_5 - 1]) & (((~(~0))))));
                }
            }
        }
    }
    #pragma endscop
}
