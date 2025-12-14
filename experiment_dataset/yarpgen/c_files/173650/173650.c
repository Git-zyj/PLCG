/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((max(6205, var_10))) ? (((var_1 ? var_6 : var_1))) : ((1 ? -481317592 : (-9223372036854775807 - 1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 3] [1] [i_0 - 3] = (((((~0) | (((var_3 && (arr_3 [i_0] [i_0]))))))) ? (-8896237308967450957 <= var_15) : (min((!var_16), (-8896237308967450979 ^ 112))));
                    var_19 = ((16 ? var_9 : (((!(arr_5 [16] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                var_20 = arr_10 [1];
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = ((min(var_10, ((min(var_6, 2071))))));
                                var_22 = (min(-595299316, ((((var_13 ? var_6 : 9061813101492057381)) * -595299316))));
                                var_23 = (min(var_23, (((((23519 ? 12522 : -123))) && (((var_7 ? (arr_17 [3] [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 2]) : var_5)))))));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_3] [i_3] = (arr_20 [i_8] [i_4] [5] [i_8]);
                    var_24 = (!((max(72057594036879360, var_15))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_25 &= var_2;
                    arr_31 [i_3] [i_4] [i_3] = (1 >= var_5);
                    var_26 *= (108523144 >= 16);
                }
                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_27 += (!9061813101492057364);
                    var_28 = ((((((var_1 ? 126 : var_8)))) / ((((max(72057594036879360, var_16))) ? ((63752002 ? 122 : (arr_29 [i_10 + 1] [i_10 + 1]))) : ((1 ? (arr_24 [8] [i_4] [i_4]) : var_8))))));
                    var_29 = (max(var_29, (((((-(((var_16 >= (arr_0 [10])))))) / var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
