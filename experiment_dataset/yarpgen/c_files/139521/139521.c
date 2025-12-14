/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= 1822633988;
        var_18 |= (((((arr_0 [i_0]) ? -17 : (arr_1 [i_0])))) ? 1822634007 : ((((arr_1 [1]) ? -28750 : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (max(var_19, ((min((((!(arr_4 [i_1])))), (arr_4 [i_1]))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_20 = -18446744073709551615;
            arr_10 [i_1] [14] [i_1] = ((-(arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_21 *= ((+(((arr_11 [i_3] [i_1]) / 2472333333))));
            arr_14 [i_1] = ((+((1822633968 ? (arr_9 [i_1]) : (arr_9 [i_1])))));
        }
    }
    var_22 = var_8;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = 4294901760;
        var_24 |= (arr_12 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_25 = 1822633963;
        var_26 = ((+(((arr_12 [i_5] [i_5]) ? ((min((-2147483647 - 1), (arr_7 [i_5] [i_5] [i_5])))) : (((arr_4 [10]) | 2472333327))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_27 = 28757;
                    var_28 = (max(((!((!(arr_11 [i_6] [i_5]))))), (!-20724)));
                    var_29 = (max(16, -785808890));
                }
            }
        }
    }
    #pragma endscop
}
