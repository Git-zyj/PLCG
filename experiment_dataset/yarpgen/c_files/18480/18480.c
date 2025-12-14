/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (!var_5);
                var_20 *= ((((8795958804480 ? -8795958804480 : -12741)) % (((max(var_11, (arr_4 [i_1] [i_1 + 1] [i_1 + 3])))))));
                arr_6 [i_0] = -5292464626601312420;
            }
        }
    }
    var_21 = (~var_9);

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 = var_13;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_23 = var_8;
            var_24 ^= ((-((var_16 ? var_10 : var_8))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 |= (~8);
            var_26 = var_16;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_27 -= (~var_17);
            var_28 *= ((var_5 ^ (((((arr_7 [i_5] [i_2]) < var_1))))));

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_29 ^= var_0;
                var_30 = (max(var_30, (((~(arr_9 [22] [18] [i_6]))))));
                var_31 = (arr_9 [i_2] [i_5] [14]);
            }
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                var_32 += (arr_15 [i_2] [i_5]);
                var_33 = ((~(arr_9 [i_2] [i_2] [i_7 + 4])));
                var_34 = (max(var_34, (((arr_13 [i_7 + 1] [i_7] [i_7 - 1]) + (arr_10 [i_2])))));
                var_35 ^= (!var_8);
            }
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_36 -= var_7;
                            var_37 = 11805753052643611485;
                            var_38 = 8795958804480;
                            var_39 = (max(var_39, (-167265235 < -8795958804475)));
                            var_40 = (arr_28 [i_8] [i_8 - 1] [i_8] [i_8] [i_9 + 4]);
                        }
                    }
                }
                var_41 = (!-260774372411705220);
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {

                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    var_42 = (var_13 != var_1);
                    var_43 = (max(var_43, ((((arr_27 [17] [1]) ? var_4 : var_16)))));
                }
                var_44 |= 12741;
            }

            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_45 = (arr_38 [i_13] [i_13] [i_15]);
                            var_46 = (arr_22 [i_13]);
                            var_47 = (((arr_19 [i_14] [i_5] [i_2]) ? ((var_16 ? var_11 : 2091165829)) : var_10));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        {
                            arr_49 [i_2] [i_5] [i_13] [i_13] [i_16] [i_17] = var_7;
                            var_48 = (max(var_48, ((((arr_48 [i_2] [i_2] [i_5] [i_16 + 1]) ? (arr_44 [10] [0] [i_16] [i_16 + 1] [i_16] [i_17 + 1]) : (arr_46 [i_13] [i_13] [i_13] [i_16 + 1] [i_16]))))));
                        }
                    }
                }
                var_49 += -12742;
                var_50 = (((12741 <= -1) << (var_10 - 921586610)));
            }
        }
        for (int i_18 = 2; i_18 < 23;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        arr_57 [i_2] [i_2] [i_19] [i_19] [i_2] = 12735;
                        var_51 = (max(var_51, ((((max(var_10, (arr_30 [i_20] [i_19] [i_18 - 2] [i_18 + 1]))) + (((max(var_12, var_16)))))))));
                        var_52 *= ((((min((arr_56 [22] [i_18 - 1] [i_18 - 2] [i_18 - 2]), (var_7 ^ var_8)))) ? var_2 : (~var_12)));
                    }
                }
            }
            var_53 = (max(var_53, (~-var_0)));
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 24;i_22 += 1)
                {
                    {
                        var_54 = ((36733 ? 0 : -112617180));

                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            var_55 = (max(var_55, (((4 ? 65535 : 7680)))));
                            var_56 = (max(var_56, ((((((min((arr_9 [i_21] [i_21 - 1] [i_21]), var_1)) + 2147483647)) >> (((arr_11 [i_2]) - 117)))))));
                        }
                        for (int i_24 = 0; i_24 < 25;i_24 += 1) /* same iter space */
                        {
                            var_57 = (max(var_57, ((((~(arr_67 [i_22 - 2] [i_22 - 3] [i_22 - 2] [i_22 + 1] [i_22])))))));
                            var_58 ^= (((((var_9 ? var_4 : (var_7 || -12741)))) ? (arr_53 [i_2] [i_18 + 2] [i_18 + 1]) : ((var_14 ? (arr_46 [7] [14] [i_18 + 1] [i_18 + 2] [i_18 - 2]) : (arr_46 [i_18 - 2] [i_18 - 1] [i_18 - 1] [i_2] [1])))));
                            var_59 = (arr_51 [i_2] [i_2] [i_2]);
                            var_60 |= ((((((((12741 ? (arr_47 [i_2] [i_18] [i_21] [i_22] [i_18] [i_22 - 3] [i_2]) : 1815010741))) ? ((var_4 ? var_10 : (arr_52 [i_2] [i_18] [i_2]))) : (arr_60 [i_24] [i_2])))) ? (15 & 44803) : var_8));
                        }
                        for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
                        {
                            var_61 = (!var_13);
                            arr_70 [i_25] [i_21] [i_25] [i_22 - 2] [i_2] [i_25] [i_18 - 1] = ((((((arr_45 [i_21 - 1] [i_21 - 1] [i_21]) ? (arr_45 [i_21 - 1] [i_18] [i_22]) : (arr_45 [i_21 - 1] [i_18] [i_21])))) ? (arr_45 [i_21 - 1] [13] [13]) : (arr_45 [i_21 - 1] [i_25] [14])));
                        }
                    }
                }
            }
            var_62 = (((((~(!var_11)))) ? -var_1 : (min((arr_38 [i_2] [i_18 - 2] [i_18 - 2]), var_7))));
        }
        var_63 = (var_10 != ((var_11 << (var_7 - 10122354189472370261))));
        var_64 = (arr_16 [i_2] [i_2]);
        var_65 |= (((var_2 ? var_16 : var_9)));
    }
    #pragma endscop
}
