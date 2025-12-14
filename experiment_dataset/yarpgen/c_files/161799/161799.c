/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_10 = (((((var_8 ? var_4 : var_3))) && (arr_0 [i_0])));
        var_11 |= (arr_1 [i_0]);
        var_12 *= var_3;
        var_13 = 8021764779382930515;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 = max(-1, (((~((6175368084947226375 ? var_6 : var_9))))));
        arr_6 [i_1] [i_1] = (min(((var_8 ? 12271375988762325240 : 12271375988762325238)), (((((((arr_3 [1]) ? var_7 : var_9))) >= (min(1316590304, var_9)))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] = (!4);
        arr_10 [i_2] = min(((min((-2147483647 - 1), var_8))), (((54978 ? 1438943596 : -1392815334))));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_15 ^= -1053601515;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = (max(var_16, var_6));
                    arr_20 [i_3] [8] [13] [14] = var_3;
                    arr_21 [i_3] = 2147483640;
                }
            }
        }
        arr_22 [i_3] = ((var_7 ? ((max(var_4, var_2))) : 18446744073709551604));
    }
    var_17 = var_5;
    #pragma endscop
}
