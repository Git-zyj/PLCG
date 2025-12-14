/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(((((arr_0 [i_0] [i_0]) >= var_5))), (((!216172782113783808) ? var_11 : var_10))));
        var_14 = (max((min((arr_2 [i_0] [i_0]), var_0)), ((max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_11 [1] [i_2 + 1] [1] [i_1] &= (((-1350901301 ? (arr_5 [i_1] [i_1]) : 1)));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2] = (((((var_5 ? (arr_0 [18] [18]) : 255))) ? (~var_1) : 1));
                                var_16 = ((var_7 ? ((var_9 | (arr_4 [i_1]))) : ((~(arr_10 [i_4 + 2] [i_2])))));
                                arr_19 [i_2] = (((~10) != (((1350901308 ? (arr_8 [i_2] [i_4]) : -23909)))));
                                var_17 = (1350901278 | var_1);
                            }
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_2] = 8;
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_18 = ((~(!var_6)));
                                var_19 = (min(var_19, (((0 > var_3) ? (max((arr_27 [6] [i_2] [i_1]), (arr_12 [i_2 - 2] [i_6]))) : ((min((min(1350901322, (arr_21 [7] [i_1]))), 12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
