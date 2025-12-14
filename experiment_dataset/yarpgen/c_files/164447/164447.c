/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (arr_8 [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((min((arr_4 [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3 - 1])))), -125030713));
                                arr_16 [i_3] [i_3] [1] [i_0] [i_0] [i_0] = ((-110 ? (((((arr_2 [i_3]) < (arr_14 [i_0] [i_0] [i_2] [i_3] [i_4]))))) : (arr_2 [i_4])));
                                var_21 = (max(var_21, var_4));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 = (((((var_15 | -110) ? ((var_19 >> (var_5 - 88))) : 255)) << ((((~(var_15 ^ 0))) + 165))));
                    var_23 ^= var_1;
                    arr_20 [i_1] [i_1] [i_1] = 116;
                }
                var_24 = ((((((-(arr_1 [i_0]))) >> (var_13 - 6487246014820646806)))) / (((((var_0 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) : -1149922141))) & var_1)));
                var_25 = -110;
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_26 = (!(arr_23 [i_6 + 1]));
        var_27 |= (((arr_22 [i_6 + 1]) + 238));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_28 = (((-1403280987 != 769661332) >> (((arr_19 [i_7]) - 230))));
        var_29 = 1;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 ^= ((!((((arr_26 [i_8]) & (arr_26 [i_8]))))));
        var_31 = (min(var_9, (arr_26 [i_8])));
        var_32 -= (!6187938499097842929);
        var_33 = 1545532109;
    }
    var_34 = (((((var_2 ? (1403280987 || -110) : 160))) ? var_1 : var_16));
    var_35 = (((((((33285 ? var_16 : var_7))) ? var_15 : 266427071)) - ((((min(var_5, var_12)))))));
    var_36 = var_10;
    #pragma endscop
}
