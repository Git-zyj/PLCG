/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_3, ((var_2 ? 109 : var_16))))) ? (!var_11) : var_6));
    var_21 = ((((max(var_11, -var_5))) ? var_0 : (((~var_4) ? var_0 : (var_7 >= 1)))));
    var_22 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = var_17;
                    var_23 ^= var_13;
                    var_24 = ((!((max(var_8, 1)))));
                    arr_10 [i_1] = ((-((var_2 | (~var_10)))));
                    var_25 = (min(var_25, (((max((arr_4 [10] [6]), ((878107451 ? var_16 : var_10))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_3] [i_4] = var_18;
                    arr_17 [i_0] [1] = (arr_3 [i_4]);
                    arr_18 [i_4] = var_2;
                }
            }
        }
        var_26 = (max(var_8, -var_0));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_26 [i_0] [i_5] = (((arr_4 [i_5 - 2] [i_5]) ? ((((!(arr_3 [i_6]))) ? ((var_18 ? var_19 : (arr_0 [i_0]))) : var_18)) : ((((((max((arr_22 [0] [1]), var_17))) || 1))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_27 ^= (min((((144 ? var_2 : var_16))), (((!(((var_11 ? var_8 : var_18))))))));
                                var_28 = max((!var_17), (max(((var_2 ? 3111097863953716801 : var_16)), (var_9 || var_6))));
                                var_29 ^= 6007721615264186061;
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        arr_35 [i_6] [i_9] = ((((!(arr_13 [i_5 - 2]))) ? (var_14 - var_16) : (arr_13 [i_5 + 1])));
                        var_30 *= var_9;
                        var_31 = min(((var_13 ? (var_11 || var_16) : (max((arr_11 [9] [9]), var_9)))), (arr_8 [i_5 + 1] [i_0] [i_6]));
                    }
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        arr_38 [i_5 + 1] [i_10] = ((max(var_16, (max((arr_37 [9] [i_5] [i_5] [i_6] [i_10]), -1)))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_32 &= var_13;
                            arr_43 [i_0] [i_5 + 1] [i_6] [i_10] [i_5 + 1] = ((!((min(var_0, (max(13237797066517640623, (arr_42 [8] [4]))))))));
                            var_33 += (!15335646209755834815);
                            arr_44 [i_0] [i_5] [i_6] [i_0] [i_10 + 2] [i_11] = (min((((arr_37 [i_5] [i_5 + 1] [i_5 - 2] [i_10 + 1] [i_10 + 2]) ? (((max(var_11, var_3)))) : ((1 ? var_5 : var_12)))), ((((max(51836, var_8)))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_34 = ((!(((-24142 ? (arr_46 [i_12] [i_6] [i_6] [i_12]) : var_3)))));
                            var_35 -= var_15;
                            var_36 = var_10;
                            arr_48 [i_0] [7] [i_12] [1] [i_6] [i_10] [i_0] = var_19;
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            arr_51 [i_0] [i_5] [i_6] = max(((~(arr_15 [i_0] [i_10 + 1]))), (arr_28 [i_0] [i_5 - 1]));
                            arr_52 [i_0] [i_0] [i_6] [i_6] [i_6] [i_13 - 1] = ((((max(var_12, (arr_13 [i_0])))) ? 0 : (arr_24 [i_5])));
                            var_37 = (((arr_30 [9] [i_5 - 2] [i_5] [i_5 - 2]) ? (max((65535 % var_3), (((!(arr_39 [2] [i_5] [i_6] [i_10] [i_5])))))) : var_12));
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        var_38 += (((((!((max(-1781992381, (arr_55 [i_14 + 1]))))))) | ((((arr_53 [i_14 + 1]) == var_5)))));
        var_39 |= (((((var_11 ? (((((arr_53 [i_14]) && (arr_54 [14]))))) : (max(var_7, (arr_55 [i_14])))))) ? (arr_53 [i_14 - 1]) : (((1635855109 > (((arr_55 [i_14]) ? (arr_55 [i_14]) : var_10)))))));
        arr_56 [i_14] = 1;
        var_40 = (((((((var_17 ? (arr_53 [i_14 + 2]) : (arr_53 [i_14 + 1])))) ? (!var_16) : (!var_14)))) ? (1 > 1781992387) : var_15);
    }
    for (int i_15 = 2; i_15 < 13;i_15 += 1)
    {
        var_41 = var_10;
        var_42 = var_19;
    }
    #pragma endscop
}
