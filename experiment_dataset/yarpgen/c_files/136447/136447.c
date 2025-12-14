/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [1] [i_1] [i_0] [i_0] [i_0] &= var_14;
                        var_15 = var_7;

                        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            var_16 = (~(((max(0, var_12)))));
                            var_17 *= (max(((~((1 ? var_6 : 113)))), (min((arr_8 [i_0] [i_1 - 2] [i_2] [i_4 - 1]), (1 >> 1)))));
                            var_18 = (min(var_18, 0));
                            var_19 = (max(var_19, (((-114 ? 1 : 1)))));
                            var_20 = ((!((var_14 && (!1)))));
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_21 = (min(((9 & ((min(1, 121))))), (max((~-85), 64))));
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] = ((1 ? -1809565321 : -1809565321));
                        }
                        var_22 = (max(var_22, (!var_8)));
                    }

                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] &= max(45, ((108 ? 1 : 0)));
                        var_23 = (max((max((arr_0 [i_1]), 1)), (arr_12 [i_0] [i_0])));
                    }
                    var_24 = (min(var_24, ((min(((~(arr_19 [i_0] [i_2]))), (arr_19 [1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_25 |= var_5;
    var_26 = ((((89 ? -114 : 1))) ? -90 : ((var_12 ? -123 : var_6)));
    #pragma endscop
}
