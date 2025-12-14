/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 ^= (max(((-(arr_2 [i_0 - 1]))), (((~((~(arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((~(arr_1 [i_1] [i_1])));
        var_20 = (((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : -1037980432));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = arr_8 [i_2];

        /* vectorizable */
        for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_21 = -1037980448;
            var_22 = (((!5315892872603545517) && 198));
            var_23 = (arr_7 [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_24 = (((arr_12 [i_4] [i_4 + 1]) && (((var_4 ? 96 : (arr_15 [i_2] [11] [i_2]))))));

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_25 = (max(var_25, (arr_17 [i_5] [i_4] [i_4])));
                arr_18 [i_2] [21] [i_2] [i_2] = (!-1037980430);
                var_26 = ((!(((-(arr_13 [i_4] [i_4]))))));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_27 = (min(var_27, 59165));
                arr_21 [i_2] [i_4] [i_4] [i_6] = ((((!(arr_8 [i_2]))) || (!-1037980450)));
                arr_22 [i_2] [i_2] [i_2] [i_2] = (arr_17 [i_2] [i_6] [i_6]);
            }
        }
        var_28 |= ((arr_14 [20] [20]) ? ((((arr_8 [24]) ? (7963143275037003768 || 0) : (((!(arr_20 [i_2] [i_2] [i_2] [i_2]))))))) : ((-((-1037980448 ? 49509 : 0)))));
        var_29 = (arr_10 [i_2] [i_2]);
    }
    var_30 = (min(var_30, (~var_13)));
    var_31 &= max(var_8, ((((~var_13) < var_10))));
    var_32 = 1037980449;
    #pragma endscop
}
