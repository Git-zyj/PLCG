/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = var_7;
        arr_2 [i_0] = (-5071856205339063092 && ((((((~1) + 2147483647)) << (((max((arr_1 [i_0] [i_0]), var_8)) - 5360717380923081497))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((((((~var_2) + 2147483647)) << (((((arr_3 [i_1]) ? var_4 : var_6)) - 986611815)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [1] = (max(((min((arr_6 [i_3] [i_1] [i_1]), (var_2 >= var_0)))), var_3));
                    var_13 = ((var_7 ? (arr_0 [i_2]) : ((~(arr_6 [i_3] [i_3] [i_3])))));
                    var_14 = var_3;
                    var_15 = var_4;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((arr_23 [i_4] [i_5] [i_7] [i_8 + 1] [5] [i_8]) ? (arr_23 [i_7] [i_6] [i_6] [i_8 + 2] [i_5] [i_5]) : var_5)))));
                            var_17 = ((var_5 ? (arr_23 [i_8 + 2] [i_8 + 1] [i_8] [i_7] [i_4] [i_4]) : (arr_22 [i_8 + 2] [2] [2] [2] [i_7])));
                            arr_24 [i_4] [i_5] = (((((~(arr_4 [i_4])))) ? (~var_8) : var_0));
                        }
                    }
                }
            }
            arr_25 [i_5] [6] = ((var_6 ? (arr_4 [i_4]) : var_8));
        }
        for (int i_9 = 2; i_9 < 7;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 7;i_11 += 1)
                {
                    {
                        var_18 = ((45654 ? 9 : 1));
                        arr_34 [i_11 + 1] [i_10] [0] [i_4] = (~var_0);
                        var_19 += (((var_7 | (~-1061607119))));
                        arr_35 [4] [i_9] [4] [i_9] [i_9 - 1] [i_9] = ((~(arr_23 [i_4] [i_4] [i_10] [i_11 + 3] [i_11] [i_11])));
                    }
                }
            }
            var_20 = ((~(max(var_6, var_9))));
            var_21 -= var_8;
            var_22 = (max(var_22, ((((((var_3 + (arr_0 [i_4])))) ? (~var_9) : (((((arr_16 [2] [i_9 + 1] [i_9 + 3]) + 2147483647)) << ((((var_2 ? var_4 : var_5)) - 986611815)))))))));
        }
        arr_36 [1] [i_4] = var_9;
        var_23 = (min(var_23, (max((((~(arr_28 [i_4] [i_4] [i_4])))), (((((~(arr_12 [i_4])))) ? var_2 : (arr_26 [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_24 *= var_9;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    arr_47 [i_12] [i_13] = (~247);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_25 += var_6;
                                arr_53 [i_12] [6] [6] [4] [i_16] [i_16] [0] = (((arr_18 [i_13 + 1]) ? (arr_51 [i_12] [i_13] [i_13] [i_14] [i_14] [i_15] [i_16]) : ((247 ? 32741 : 3179405917))));
                                var_26 = (max(var_26, ((((arr_20 [i_12] [i_13 + 1]) ^ var_5)))));
                            }
                        }
                    }
                    arr_54 [i_12] [i_12] [i_14] = (i_12 % 2 == zero) ? ((((((((arr_45 [i_12] [i_13] [i_14] [i_14]) + 9223372036854775807)) << (25744 - 25744))) >= 17))) : ((((((((((arr_45 [i_12] [i_13] [i_14] [i_14]) - 9223372036854775807)) + 9223372036854775807)) << (25744 - 25744))) >= 17)));
                    arr_55 [i_12] [i_13] [i_14] [i_12] = (((var_1 == var_7) <= var_1));
                }
            }
        }
        arr_56 [i_12] [i_12] = var_2;
    }
    var_27 = var_4;
    #pragma endscop
}
