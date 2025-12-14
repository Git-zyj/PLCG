/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((max(var_11, var_3)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = max((arr_0 [i_0] [i_0]), ((-1481446995986784702 - (arr_1 [i_0] [i_0]))));
        var_21 = (max(var_21, ((max((arr_0 [18] [18]), (max((arr_1 [10] [i_0]), (arr_1 [1] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_4 [i_1] = (max(((~(max((arr_3 [i_1] [i_1]), (arr_2 [i_1]))))), 117));
        var_22 = (min(var_22, 197));
        var_23 = 20;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_24 = (min(var_24, (arr_11 [i_2] [i_3])));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_25 = -37;
                            arr_22 [i_2] [i_2] [1] = (6328 + 65);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_26 *= 1;
                            var_27 = (arr_8 [i_2]);
                            var_28 = (((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >= ((((!(arr_2 [i_2])))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {
                arr_30 [i_3] [i_2] [i_9] = (arr_0 [i_2] [i_2]);
                var_29 = 3908906875741463625;

                for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_30 = (min(var_30, (((-1554398948 & (arr_25 [0] [i_3] [i_3] [i_3 - 2] [i_3] [i_3]))))));
                    var_31 = (arr_6 [i_2] [i_3]);

                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        arr_38 [i_2] = (((arr_34 [i_2] [i_9] [13] [i_10] [i_11 + 2] [i_10]) - (arr_2 [i_2])));
                        var_32 = (max(var_32, 1614689122));
                        var_33 &= (arr_5 [i_9]);
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_34 = arr_25 [i_2] [i_2] [i_9] [i_10] [i_2] [i_12];
                        var_35 = -23639;
                        var_36 = (min(var_36, (arr_21 [i_2] [i_2] [i_2] [i_9] [i_10] [i_12] [12])));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_37 = (max(var_37, 11181206218957985755));
                        var_38 = arr_20 [i_2] [i_3 - 2] [i_3 - 2] [i_2] [i_13];
                        var_39 = -68;
                        var_40 = -1614689125;
                    }
                    var_41 = (arr_29 [i_2] [i_2] [i_2]);

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_42 = arr_21 [i_2] [i_2] [i_2] [i_9] [i_2] [i_2] [8];
                        arr_49 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_0 [i_2] [i_2]);
                    }
                }
                for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
                {
                    var_43 = 127;

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        arr_56 [i_2] [i_2] [i_9] [i_2] [i_16] = (~((-33 / (arr_51 [i_2] [i_3] [i_16] [i_2] [i_2] [3]))));
                        var_44 = 6328;
                        var_45 = (arr_10 [i_9] [i_9] [i_9]);
                        var_46 = (arr_32 [i_2] [i_2]);
                    }
                }
                for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    var_47 = 2780003660;
                    var_48 = (((arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_6 [i_2] [i_2])));
                    arr_61 [i_2] [i_2] [i_2] [i_2] = 81;
                    var_49 += -4182260748426531952;
                }
                /* LoopNest 2 */
                for (int i_18 = 4; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_50 ^= (((arr_54 [i_2] [i_2] [i_9] [i_2] [10] [10]) <= -25628));
                            var_51 = ((~((132 + (arr_48 [i_19])))));
                            var_52 = 6357728557810002115;
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
            {
                var_53 *= (((((arr_37 [i_3] [i_20] [i_3] [i_3] [6] [i_3]) - (arr_28 [i_2] [i_2] [i_20] [i_2]))) / (arr_31 [i_2] [i_2] [i_20] [i_2] [i_2])));
                arr_69 [i_2] [i_3] [i_20] = (arr_55 [9] [i_2]);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        {
                            var_54 = (arr_5 [i_21]);
                            var_55 &= (arr_13 [i_21] [i_3 + 1] [i_2]);
                            var_56 *= (arr_40 [i_22] [i_22] [13] [i_20] [i_20] [i_3 - 1] [i_2]);
                        }
                    }
                }
            }

            for (int i_23 = 0; i_23 < 16;i_23 += 1)
            {
                arr_76 [i_2] [i_2] [i_2] = arr_19 [i_2] [i_3] [i_23] [i_3] [i_23] [i_2];
                var_57 = -1;
                var_58 = (~1554398948);
                var_59 += (+-93);
            }
        }
        arr_77 [i_2] [i_2] = (max(31925, 59));
        var_60 ^= (max((arr_67 [i_2] [i_2] [i_2] [i_2]), 25340));
    }
    /* vectorizable */
    for (int i_24 = 2; i_24 < 9;i_24 += 1)
    {
        var_61 = (arr_42 [i_24]);
        var_62 = arr_46 [i_24 - 1];

        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            arr_83 [i_24] = (i_24 % 2 == zero) ? ((15728640 >> (((arr_26 [i_24] [i_25] [i_25] [i_25]) + 7821980806566032672)))) : ((15728640 >> (((((arr_26 [i_24] [i_25] [i_25] [i_25]) - 7821980806566032672)) + 252339690085624693))));
            arr_84 [i_24 - 2] [i_24] = (60 + -1743292805);
            arr_85 [i_24] = (((arr_13 [i_24] [i_24] [i_24]) - (arr_15 [i_24])));
            arr_86 [i_24] [i_25] [i_25] = (((arr_36 [i_25] [i_24] [i_25] [i_24]) % (arr_25 [i_24 - 2] [i_24 + 3] [i_25] [i_25] [i_24] [i_25])));
            var_63 = ((1614689119 >> ((((-1 % (arr_23 [i_24] [i_24 - 1] [i_25] [i_25]))) + 31))));
        }
    }
    var_64 = var_11;
    #pragma endscop
}
