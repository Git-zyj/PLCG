/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 -= ((~(arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 = (729006038 ? ((((!(arr_1 [i_0]))))) : var_7);
            var_22 = ((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_2] = ((12802 ? (((var_19 ? 210 : var_7))) : var_18));
            var_23 = ((var_12 ? 36478 : ((var_4 ? -1444970056 : var_7))));
            arr_11 [i_0] [i_0] = ((var_12 ? var_5 : (arr_4 [i_0])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_24 = var_1;
            arr_14 [i_0] [i_0] [i_0] = (arr_7 [i_0]);
            arr_15 [i_0] [i_3] [i_0] = (var_11 ? var_11 : var_0);
        }
        arr_16 [4] &= ((7619366425630955911 ? var_2 : ((var_9 ? var_4 : var_15))));
        var_25 = (((arr_3 [i_0] [i_0] [i_0]) ? (arr_13 [13] [i_0] [i_0]) : (((arr_4 [i_0]) ? 3210033083 : var_18))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_26 += (((((min(var_14, var_1)) ^ 3)) ^ (max(2569195879, ((max(1, -958642678)))))));
                        var_27 = (min(var_27, (((((min(var_13, ((var_6 ? var_8 : -22589))))) ? var_10 : ((max(-1, (!-1444970055)))))))));
                        var_28 = (max(var_28, ((((arr_17 [i_6 + 1] [i_5 + 1]) ? ((var_3 ? (arr_17 [i_6 - 1] [i_5 - 2]) : -3)) : (min((arr_17 [i_6 + 1] [i_5 + 1]), var_13)))))));
                        arr_28 [i_7] [i_7] |= (((min(var_6, (((21678 ? (arr_25 [i_4] [i_5 - 3] [i_6] [i_7] [i_4]) : -1444970033))))) ^ ((~(((-127 - 1) ? var_13 : var_14))))));
                        arr_29 [i_4] [i_4] = (min(((3411071692 ? var_16 : (((arr_21 [i_4] [i_4]) ? var_0 : 1444970054)))), var_8));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_29 += (max(((15274 ? 3901517343508862913 : 10888)), 188));
                        arr_32 [i_5 - 3] [i_5 - 3] [i_4] [i_5] [i_4] [i_5] = (min(127, 3901517343508862913));
                    }
                    arr_33 [i_4] [i_4] [i_6] [i_6] = var_1;
                    var_30 = ((((arr_25 [i_4] [i_4] [i_5] [i_6 + 1] [i_6 + 2]) && ((max(var_10, var_0))))) ? (((var_3 ? 2579 : var_16))) : ((((((arr_27 [i_4] [20] [i_6] [21]) ? var_6 : var_12))) ? var_15 : var_18)));
                    arr_34 [i_4] [i_4] [i_4] = 379602444;
                }
            }
        }
    }
    var_31 |= var_16;
    #pragma endscop
}
