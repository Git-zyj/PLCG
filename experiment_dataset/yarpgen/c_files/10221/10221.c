/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = (min(var_19, 210));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = 18;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_21 = 6154787397825301642;
                            var_22 = 0;
                            arr_13 [i_0] = 0;
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] = 54493;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [14] = -6154787397825301642;
                            var_23 = 6154787397825301642;
                            var_24 += 127;
                            var_25 = (max(var_25, 1220970939));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] = (-32767 - 1);
                            var_26 = 238;
                            var_27 = 1521017436;
                        }
                    }
                }
            }
            var_28 = -1554077786;
            arr_21 [i_0] [i_0] = -32755;
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_29 = (min(var_29, -6154787397825301642));
            arr_26 [i_0] [i_7] [i_0] = 214;
            var_30 = 45;
            arr_27 [i_0] [i_0] [i_7] = 8179;
            arr_28 [i_7] [i_0] [i_0] = 238;
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_44 [i_0] [i_0] [1] [i_11] = 32767;
                            var_31 = 29554;
                            var_32 = 43;
                        }
                    }
                }
            }
            var_33 = 254;
        }

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_47 [i_0] [i_0] [i_0] = 47;
            var_34 = 78;
        }
        var_35 ^= 3478430718;
        arr_48 [i_0] = 136;
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        arr_51 [i_13] = 214;
        arr_52 [i_13] [4] = -4020;
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {

                    for (int i_16 = 4; i_16 < 7;i_16 += 1)
                    {
                        var_36 = (min(var_36, 0));
                        var_37 = (max(var_37, 32754));

                        for (int i_17 = 2; i_17 < 9;i_17 += 1)
                        {
                            arr_65 [9] [i_14] [i_14] [i_13] [i_17] = 123;
                            var_38 -= 11;
                            var_39 ^= 0;
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            var_40 = (max(var_40, 0));
                            var_41 = 32124;
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            arr_70 [i_13] [i_15] [6] [i_16] [i_19] = 11;
                            var_42 *= 1034960153239554169;
                        }

                        for (int i_20 = 3; i_20 < 9;i_20 += 1)
                        {
                            var_43 = -623504399;
                            var_44 = (min(var_44, 89492275));
                            var_45 = 675604879;
                        }
                    }
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        arr_77 [i_13] [i_14 - 1] [i_15] [i_21] = 32767;
                        arr_78 [i_13] [i_15] [i_15] [5] [0] [i_13] = -89492275;
                        var_46 = (max(var_46, 4294967293));
                    }
                    for (int i_22 = 1; i_22 < 9;i_22 += 1) /* same iter space */
                    {
                        var_47 ^= -89492268;
                        var_48 = 6;

                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            var_49 = 114;
                            arr_83 [i_13] [i_14 - 1] = 81;
                            arr_84 [i_15] [i_13] = -97;
                        }
                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            var_50 ^= (-32767 - 1);
                            var_51 = (min(var_51, 1823879286));
                            var_52 = 32767;
                        }
                        var_53 = (max(var_53, 53));
                        var_54 = 95;
                    }
                    for (int i_25 = 1; i_25 < 9;i_25 += 1) /* same iter space */
                    {
                        var_55 = (min(var_55, -93));
                        var_56 = 24;
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 1; i_26 < 9;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 10;i_27 += 1)
                        {
                            {
                                arr_95 [i_13] [i_26] [i_13] [i_14] [i_13] = 11599266323093858326;
                                var_57 = 5280810873040673689;
                                var_58 = 119;
                            }
                        }
                    }
                    var_59 = (min(var_59, 177));
                    arr_96 [i_13] = 766683482;

                    for (int i_28 = 2; i_28 < 9;i_28 += 1)
                    {
                        var_60 *= 32754;
                        var_61 = (max(var_61, 120));
                        var_62 = (min(var_62, 11599266323093858326));
                    }
                    for (int i_29 = 0; i_29 < 10;i_29 += 1)
                    {
                        var_63 = 3601054599;
                        var_64 = (min(var_64, -9005410235850631209));
                    }
                }
            }
        }
    }
    var_65 = (min(var_65, var_5));
    var_66 += var_15;
    #pragma endscop
}
