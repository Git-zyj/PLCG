/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = ((~(1297524798 < var_13)));
        var_17 = var_14;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = -3548070960627177465;
                        var_19 = (((((503316480 ? -16 : 48))) ? 3722903017 : var_6));
                        arr_11 [i_0] [i_3] = -13529;
                    }
                }
            }
        }
        var_20 -= 0;
        var_21 = 3791650789;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_22 += 1297524798;

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_17 [i_4] [i_5] = var_11;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = ((((max(var_5, 255))) || ((max(15, -26)))));

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_24 = var_3;
                            arr_25 [i_4] = 0;
                            arr_26 [i_4] [i_5] [i_6] [i_7] [i_8] = var_7;
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (min(((var_8 << (var_11 > 8388608))), -9151417235689210446));
                        arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] = 572064290;

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_25 = (((17355 - 1) - 0));
                            var_26 = ((((min(1035845591, ((min(-1, 0)))))) ? 768 : ((((var_6 ? var_5 : 0)) * 767))));
                            arr_40 [i_4] [i_9 - 1] [i_9 - 1] [i_11] [i_12] = -58;
                        }
                        var_27 = (((min(13, 14))));
                        arr_41 [i_4] = 6651819086444263475;
                    }
                }
            }
            arr_42 [i_4] [i_9] = (-((~(~1269003726))));

            for (int i_13 = 3; i_13 < 13;i_13 += 1)
            {
                var_28 = var_4;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_50 [i_13] [4] [i_13] [i_14] [i_15 - 2] [i_15] = 10395142290560998308;
                            var_29 = ((18446744073709551615 ? (min(21154, 7819282733122368040)) : -var_9));
                            var_30 &= ((var_10 ? var_4 : (min(-14650, (min(15, 54))))));
                            var_31 = ((((((((-9 ? 121 : 1048568))) ? 44382 : ((56107 ? 3548070960627177464 : 2896376141136079005))))) ? 6651819086444263475 : ((min(-1, 21154)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 4; i_16 < 11;i_16 += 1)
            {
                var_32 = 11794924987265288136;

                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    var_33 ^= (((~197) ? (~-18) : var_10));
                    arr_58 [i_16] [i_9] [i_16 - 3] [i_4] [i_17] [4] = (175 ? var_12 : -54);
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        {
                            arr_65 [i_16] = -827553671;
                            arr_66 [i_4] [i_16] = ((184 ? ((63838 ? 8587837440 : 255)) : 32347));
                            var_34 = ((74 ? 328666780234264751 : -7175131113479078239));
                            var_35 = var_14;
                        }
                    }
                }
                arr_67 [i_4] [i_16] [i_16] = 121;
            }
            arr_68 [i_4] [i_4] [i_9] = var_10;
        }
    }
    var_36 = ((18446744065121714176 ^ ((((min(var_2, 21149)))))));
    var_37 = 144;
    var_38 = var_0;
    var_39 = (min((-127 - 1), var_5));
    #pragma endscop
}
