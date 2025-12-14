/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = arr_1 [i_0];
        arr_2 [9] [i_0] = -503507949;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_2] = (var_7 >> 31);
                    arr_12 [i_1] [i_2] [i_3] |= (((6656483865389735791 % var_10) ? 1 : var_0));
                    var_14 = -6656483865389735791;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_15, (arr_5 [i_4])));
                                var_16 *= ((var_1 ? ((var_0 ? 1952798251 : var_7)) : ((-503507949 ? var_7 : var_7))));
                                arr_20 [i_2] [i_2] [i_3] [8] [i_3] [i_3] [i_3] = ((var_5 | ((var_0 ? (arr_5 [i_5]) : (arr_16 [i_1] [i_2 - 1] [i_2] [i_2] [i_4] [i_2])))));
                                var_17 -= (arr_17 [i_1] [i_2] [i_1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
        var_18 = 25;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = var_6;
        var_19 += ((-4929 ? (((((arr_22 [i_6] [7]) + var_2)) << (511 - 493))) : -1));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_29 [i_7] [i_8] = ((-(arr_19 [i_8])));
                    arr_30 [i_7] [i_6] = ((!((((arr_18 [i_7] [i_8] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_19 [i_8]) : 8417289588353721778)))));
                    arr_31 [i_6] [i_6] [3] = var_8;
                }
            }
        }
    }
    var_20 = (var_9 + var_4);
    var_21 = 1;
    var_22 = var_2;
    var_23 &= (((((((min(var_10, -503507949))) ? ((max(var_8, var_12))) : ((var_9 ? 503507952 : var_3))))) ? var_11 : 148));
    #pragma endscop
}
