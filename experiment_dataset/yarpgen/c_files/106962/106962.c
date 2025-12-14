/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= min((var_0 <= -1), (min(var_18, (!-2939441792507124072))));
    var_21 = (max(var_13, ((max(130, (!var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((!(var_18 == 2939441792507124071)));
        arr_2 [i_0] [6] = var_2;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_23 = 91;
            arr_6 [i_0] [i_0] [i_1] = (arr_5 [i_1] [i_0]);

            for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_24 = 0;
                arr_9 [i_0] [i_2] [i_0] = (((var_7 ? 70368743915520 : (arr_0 [i_0] [i_0]))));
                var_25 = (arr_7 [i_0]);
            }
            for (int i_3 = 4; i_3 < 11;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] = var_4;
                var_26 = ((~(arr_0 [i_0] [i_3 - 2])));
            }
            for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_27 = (max(var_27, -13));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_28 = var_4;
                    arr_19 [i_4] = 1032546436;
                }
                var_29 = var_10;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_23 [11] [i_1] |= 3262420860;
                var_30 = (arr_17 [i_6] [i_6] [i_1] [1] [i_0] [i_0]);

                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    var_31 = (max(var_31, (((((arr_16 [2] [i_6] [2]) - (arr_21 [i_6])))))));
                    var_32 = 182;
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_33 = ((var_3 < (~2120444384)));
                    arr_35 [i_10] [i_9] [i_8] [i_8] [i_0] [11] = (arr_16 [4] [8] [4]);
                    arr_36 [12] [i_8] [i_8] [i_0] = (arr_25 [i_10] [i_9] [i_8] [i_0]);
                }
                var_34 = (min(var_34, (~-131072)));
                var_35 = (arr_34 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9]);
            }
            for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
            {
                var_36 = (48 * -10);

                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    arr_43 [i_12] [i_11] [i_11 + 1] [i_8] [i_0] [i_0] = var_8;
                    var_37 = var_10;
                    var_38 = -35;
                }
                var_39 = (-23 <= 2147483646);
            }
            for (int i_13 = 3; i_13 < 9;i_13 += 1) /* same iter space */
            {
                arr_46 [i_0] [i_0] [i_13] = 14502216620690914157;
                var_40 = (8585740288 ? (arr_5 [i_13 + 1] [i_13 + 3]) : (arr_5 [i_13 + 1] [i_13 + 4]));
                var_41 = 50;
            }
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        var_42 *= (((arr_42 [i_0] [5] [i_14] [5] [i_16 + 1] [i_16 - 1]) >> (-12350 + 12381)));
                        arr_56 [i_16] [i_15] = (-13 && 4093001970);
                        var_43 = (arr_54 [i_16] [i_15] [i_14] [i_8] [i_0]);
                    }
                    arr_57 [i_0] [i_0] [9] [i_14] [i_14] = 126;
                    var_44 = (arr_16 [i_14] [i_14] [i_14]);
                    var_45 = arr_27 [i_8];
                }
                for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                {
                    var_46 = (arr_20 [i_0] [i_0]);
                    var_47 = (((((990701248319455237 << (125 - 94)))) ? 55679 : 22685));
                    var_48 |= var_4;
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    arr_63 [1] [i_0] [i_8] [i_8] [i_14] [i_18] = -112169229;
                    var_49 = 4294967293;
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_50 = 128;
                        arr_70 [i_20] [i_14] [i_0] = (arr_0 [i_19] [i_14]);
                        var_51 = 23980;
                        var_52 = var_0;
                    }
                    arr_71 [i_19] [i_14] [i_14] [i_0] [i_0] [i_0] = ((62650 * (((!(arr_49 [i_0] [4]))))));
                    var_53 = (253 != 22660);
                    var_54 = ((~(!var_1)));
                }
                var_55 = ((-((1666279625 ? 0 : (arr_53 [i_8] [i_8])))));
                var_56 = 60;
                var_57 = (((((2463791651003652760 > (arr_32 [i_0] [i_0] [i_0])))) + 3766380819));
            }
            var_58 *= (~(arr_62 [i_0]));
            arr_72 [i_8] = var_10;
        }
        var_59 = (74236275 * 96);
    }
    for (int i_21 = 0; i_21 < 12;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                {
                    arr_83 [i_23] [i_22] = (min(var_13, ((max(var_5, ((((arr_81 [i_21] [i_22] [i_23] [i_23]) != var_15))))))));
                    arr_84 [i_21] [i_23] [i_23] = (min(16380, ((-1 ? 128 : (arr_78 [i_21])))));
                }
            }
        }
        var_60 -= (min(((((-11 <= (arr_73 [i_21] [6]))))), (max(var_6, var_10))));
        arr_85 [6] = (((min(1032546455, -24877))));
    }
    #pragma endscop
}
