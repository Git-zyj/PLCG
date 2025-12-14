/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (((!-6987490324552092842) < var_9));
    var_16 = (min((min((32760 <= -1683058405852694981), var_1)), var_5));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (((((arr_1 [i_1]) - -10))) ? var_9 : (((((arr_1 [i_0]) != (arr_1 [i_2]))))));
                    var_17 = (((((1 ? (((!(-9223372036854775807 - 1)))) : var_10))) && ((min(var_1, var_5)))));
                }
            }
        }
        arr_7 [i_0] [i_0] = ((!(((((min(12652, 47589))) ? var_4 : (((((arr_0 [i_0]) < (arr_0 [i_0]))))))))));
        arr_8 [i_0] = (~(4294967295 == -9973));
        var_18 = var_5;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                arr_16 [i_3] [i_3] [i_4] [i_5 + 1] = var_9;
                var_19 = 7;
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_22 [i_3] [22] [i_3] [i_3] [i_3] = ((((((var_7 == 129) / ((var_3 ? 609394617 : var_12))))) && 127));
                            var_20 -= var_2;
                        }
                    }
                }
                var_21 = ((var_13 ? (min((min(var_9, var_12)), (((var_13 ^ (arr_12 [i_3] [i_3])))))) : (((+((min((arr_18 [i_5 - 1] [i_4]), var_10))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_28 [i_3] [i_9] &= 17;
                            arr_29 [i_3] [i_8] [i_3] = ((-(((arr_11 [i_4 - 1]) ? var_9 : var_10))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                var_22 = -var_2;
                var_23 = (var_9 - (2738055048908161098 == 34514));
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_24 = (min(((var_11 ? (min(var_12, var_11)) : (((var_12 ? 60546 : var_8))))), ((((119 < 2738055048908161102) && (!var_0))))));
                var_25 = (min(var_7, -4588754108531451555));
                var_26 = ((!(!var_5)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_27 = (min((((arr_31 [i_11] [i_11] [i_11]) | (arr_31 [i_3] [i_4] [i_11]))), var_0));
                            var_28 = var_12;
                            arr_40 [i_11] [i_4] [i_11] [i_12] [i_13] = ((216 / ((min((min(var_11, 41183)), 3)))));
                        }
                    }
                }
            }
            var_29 = (max(var_29, var_13));
            var_30 = (((((((min(253, (arr_24 [i_3] [i_3] [i_4 + 2] [0] [i_4 + 2])))) ? ((var_4 ? 65535 : (arr_15 [i_3]))) : var_0))) ? (7 != -120) : ((min((min(-123, 51338)), 243)))));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_31 = (min(((((arr_23 [i_14] [1] [1] [i_3]) == 1))), ((var_5 ? (arr_23 [i_14] [14] [14] [i_3]) : (arr_23 [i_3] [14] [i_3] [i_3])))));
            var_32 = (min((min((var_6 && var_3), (min(var_3, var_8)))), (((((-115 ? var_6 : (arr_18 [i_3] [i_14]))) / var_1)))));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_33 = var_4;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            var_34 = ((-(min(((255 ? var_7 : var_4)), (min(var_3, (arr_35 [i_18] [i_15] [i_15])))))));
                            arr_56 [i_15] = var_12;
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 24;i_21 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
                        {
                            arr_68 [i_3] [22] &= ((var_3 ? 5 : (0 < var_3)));
                            arr_69 [i_19] [i_19] [i_19] [i_20] [7] [i_21] [i_22] = var_11;
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 25;i_23 += 1) /* same iter space */
                        {
                            arr_74 [i_3] [i_19] = (var_13 ^ var_0);
                            arr_75 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_19] = ((22 ? var_7 : (((arr_12 [i_21] [i_21]) ? 243 : var_8))));
                        }
                        var_35 = (min(var_35, (((((90 ? (arr_35 [i_21] [i_21 - 1] [2]) : (arr_44 [i_21 - 2]))) > (var_3 < 137438953471))))));
                    }
                }
            }
            var_36 = (min(var_36, 13));
            var_37 = var_9;
            var_38 = (max(var_38, (((18446743936270598154 || ((min((arr_58 [i_3] [14]), ((((arr_48 [i_19] [i_19] [i_3]) && var_3)))))))))));
        }
        arr_76 [15] [14] = (min(((((var_3 ? var_10 : var_0)) | ((var_9 ? 255 : var_6)))), var_8));
    }
    for (int i_24 = 0; i_24 < 13;i_24 += 1)
    {
        var_39 = var_7;
        var_40 = (min(var_40, (((var_3 && (((~((min(1, var_13)))))))))));
        var_41 += 396809621;
        var_42 += (min((arr_9 [i_24]), (((arr_21 [11] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) ? var_2 : (((arr_44 [i_24]) ? (arr_54 [18] [i_24] [i_24]) : 1))))));
        /* LoopNest 3 */
        for (int i_25 = 1; i_25 < 12;i_25 += 1)
        {
            for (int i_26 = 4; i_26 < 12;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 13;i_27 += 1)
                {
                    {
                        arr_91 [i_27] [i_24] [i_24] [i_24] = -16882;
                        var_43 = ((!((min(((var_0 ? 16602348142589662666 : 65535)), 24)))));
                        var_44 = var_0;
                    }
                }
            }
        }
    }
    for (int i_28 = 3; i_28 < 18;i_28 += 1)
    {
        arr_94 [i_28] = ((((((var_8 < 16602348142589662689) ^ 55029))) ? (arr_92 [i_28]) : 34518));
        /* LoopNest 3 */
        for (int i_29 = 1; i_29 < 19;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                for (int i_31 = 2; i_31 < 18;i_31 += 1)
                {
                    {
                        var_45 = (203 - 242);
                        var_46 -= (((((~((var_11 ? 34514 : var_4))))) && var_0));
                    }
                }
            }
        }
    }
    #pragma endscop
}
