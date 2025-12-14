/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_13 = (var_10 >= 33);
        var_14 *= 33;
        var_15 = (arr_0 [i_0] [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, (((!(!231))))));
                    var_17 = ((!(arr_2 [i_1 + 3])));
                    var_18 |= arr_5 [i_2 - 1];
                    var_19 = (((arr_10 [i_2] [i_2 + 3] [i_1 - 1]) >= var_2));
                    arr_11 [i_1] [21] [i_2] [i_3] = 33;
                }
            }
        }
        var_20 &= (((arr_10 [i_1] [i_1 + 1] [i_1]) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_4 [i_1 + 3] [i_1 + 3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 = ((~(((arr_8 [i_4] [i_4]) ? var_9 : 13))));
            arr_15 [i_4] = (!var_5);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_22 |= -2026728244;
            var_23 = ((22 >= ((-1653898706 ? 60 : 1))));
        }
        var_24 = 8191;
        var_25 = var_7;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6 + 3] [i_6 + 3] = (max(-1, (((arr_16 [i_6] [i_6 + 3] [i_6]) ? (!2026728244) : (arr_10 [i_6] [i_6] [i_6])))));
        arr_21 [i_6] = (((max((((!(arr_6 [i_6] [i_6] [i_6])))), (arr_14 [i_6 + 1])))) >= (((5946 >= (arr_2 [i_6 + 1])))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_26 = (max(var_26, (arr_23 [i_7])));

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_26 [i_7] [i_7] = ((~(((arr_2 [i_7 - 2]) ? 35038 : (arr_24 [i_7] [i_8])))));
            arr_27 [i_7] = (~1653898701);
            var_27 = (max(var_27, (~773249342)));
            var_28 |= 16139801365333239541;
        }
    }
    var_29 = var_10;
    var_30 |= var_10;
    var_31 = (!var_3);
    #pragma endscop
}
