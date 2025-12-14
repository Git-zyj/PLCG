/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((((-var_0 ? var_11 : ((min(var_6, (arr_1 [i_0] [i_0]))))))) ? (arr_0 [i_0]) : ((var_11 + (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 -= ((((max((((arr_0 [i_1]) ? var_4 : (arr_6 [i_1] [i_1] [i_0]))), (((-(arr_3 [i_1]))))))) ? (((1 ? 1 : 62))) : (((((1 ? 7968948372862820766 : -7968948372862820767))) ? ((var_11 ? (arr_2 [i_1] [i_1]) : (arr_4 [i_0]))) : ((var_0 ? (arr_5 [i_0]) : (arr_4 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_15 = (arr_2 [i_0] [i_1]);
                        var_16 = ((var_6 && ((((-2147483647 - 1) & 1)))));
                        var_17 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) && var_9));
                        var_18 = ((+((var_10 ? (arr_3 [i_0]) : (arr_2 [i_0] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_19 -= (arr_10 [16] [i_2] [i_1] [16]);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_20 = var_12;
                            var_21 = (((arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]) != 46));
                        }
                        var_22 = (arr_6 [i_1] [i_1] [i_4]);
                    }
                    var_23 = ((1 == ((+(max((arr_14 [i_0] [0]), 0))))));
                    var_24 = 0;
                }
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
