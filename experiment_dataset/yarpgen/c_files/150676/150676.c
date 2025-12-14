/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(204, ((min(var_11, var_1))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_0 + 1] [i_0] = var_11;
                            var_14 = ((~(arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2 - 2])));
                            var_15 = (((((!(arr_2 [i_0])))) & var_11));
                            arr_14 [i_0] [i_3] [i_1] [i_1] [i_3] [i_3 + 2] [i_4] = var_8;
                        }
                        var_16 = (arr_2 [i_0]);
                        var_17 -= max(31791, (!1));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            arr_17 [i_0] [i_0] = (max((min((max(1246856891, var_7)), (((1 ? (-32767 - 1) : 0))))), (arr_10 [i_0] [14] [i_0] [18])));
            var_18 = (arr_11 [i_0] [16] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((~(~2080446525)));
        arr_21 [i_6] [i_6] = ((~(arr_0 [i_6 + 1])));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_19 ^= ((71 ? ((min(((var_4 ? (arr_1 [i_7]) : var_6)), 7969542460801566132))) : (max(2043389350678695484, ((((arr_18 [i_7] [i_7]) * 3396908169)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_20 |= ((min((arr_8 [i_7] [i_7] [i_9] [i_10] [i_11] [i_9]), (arr_8 [i_11] [9] [i_10] [i_9] [17] [i_7]))));
                                var_21 = arr_28 [i_7] [i_7];
                            }
                        }
                    }
                    var_22 = min((max((min((arr_4 [i_7] [i_8] [i_8]), (arr_26 [i_7] [i_7] [i_8] [i_9]))), var_10)), (((!(arr_3 [i_7] [i_7] [i_7])))));
                }
            }
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_23 *= (!((min(-1781213245, 24600))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                arr_40 [i_12] = var_11;
                arr_41 [i_7] [i_12] = ((var_8 << (4741910982202846931 - 4741910982202846931)));
            }
        }
        arr_42 [i_7] = ((((min(1, 5))) ? (arr_23 [i_7] [i_7]) : ((-1635976908 ? ((max(13867, var_12))) : var_9))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                {
                    arr_49 [i_7] [i_7] = var_4;
                    var_24 = (!2119776404);
                    var_25 = (max(((((max(141, 16605582286393355873))) ? (arr_10 [i_14] [i_15 + 1] [i_14] [i_7]) : var_6)), (((!(arr_46 [i_15 + 1] [i_14]))))));

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_26 = -563955277;
                        var_27 += (((max(2147483647, (((-10487 <= (arr_9 [i_7] [i_14] [i_7] [i_15] [i_16]))))))) != (max((arr_0 [i_7]), (~0))));
                    }
                    var_28 = (((~var_12) ? 46248 : (max(872664280, 1))));
                }
            }
        }
    }
    #pragma endscop
}
