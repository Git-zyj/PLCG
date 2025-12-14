/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((var_9 ? var_0 : var_7))) ? (var_12 << var_4) : ((255 ? var_8 : 545618266)))) & var_11));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 -= (max((min((var_6 & 1391315599), ((((arr_0 [i_0]) & 198))))), (!3580769291)));
                arr_5 [3] [i_1] = var_3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 += (var_8 <= var_2);
        var_17 = ((!(!var_3)));
        var_18 = ((((((!(arr_6 [i_2]))))) & (min((max(var_0, 545618293)), 3749349004))));
        var_19 = (max(var_19, (((1 <= (min(var_9, var_7)))))));
    }
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        var_20 += ((!(arr_8 [i_3 - 4])));
        var_21 = (max(var_21, (((~(min((((arr_9 [i_3 - 2]) ^ var_8)), (arr_9 [i_3 + 3]))))))));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_22 -= -1;
        arr_12 [16] |= var_10;

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_15 [i_4 - 1] = ((min((((arr_11 [i_4]) ? var_0 : var_4)), var_4)));
            arr_16 [i_4 - 1] [i_5] [i_5] = (((((var_8 ? (!var_11) : var_11))) * ((((arr_10 [i_4]) <= (arr_13 [i_5] [i_4] [i_4]))))));
            var_23 += (((((max(var_0, 370514364))) ? var_12 : (~var_1))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_20 [i_4 - 2] = 15;

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_24 = var_6;
                var_25 |= var_9;
                arr_24 [i_4] = (max(var_7, (min(var_10, var_5))));
            }
            var_26 = min(((((!var_5) << (((min(16868186413666621112, (arr_14 [i_4] [i_6] [i_4]))) - 16868186413666621107))))), var_7);
            var_27 = ((!(((var_3 ? (arr_11 [i_4 + 3]) : (arr_11 [i_4 + 2]))))));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_29 [8] [i_6] = ((min(var_12, var_4)));
                var_28 |= (((((-(max(var_1, 1588328042))))) ? ((((!(arr_27 [i_4 + 3] [i_4 - 2] [i_4] [3]))))) : (arr_27 [i_4 + 1] [i_4 + 1] [i_6] [i_6])));

                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    arr_33 [i_4] [i_4] [i_4] [2] [i_4] &= (!var_2);
                    var_29 = (min(var_29, ((((var_6 <= var_2) ? ((max(52, var_1))) : var_6)))));
                    var_30 *= (arr_27 [i_4] [i_6] [i_8] [i_9]);
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_31 = 1;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_32 ^= ((((((arr_34 [i_10] [i_11]) ? (arr_34 [i_11] [i_10]) : var_5))) & var_12));
                        arr_41 [i_4] [i_10] [i_11] [i_12] = (var_5 && var_10);
                    }
                }
            }
            arr_42 [i_4] [i_10] = var_4;
            arr_43 [i_4] [i_4] [i_10] = var_4;
            var_33 = ((!(arr_13 [i_4 + 1] [i_4 + 2] [i_4 - 1])));
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {
            var_34 |= var_10;
            arr_48 [i_4] [i_13] [i_13] = var_5;
            var_35 = ((~(~19968)));
            var_36 |= var_11;
        }

        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            arr_52 [i_4] [8] [i_4 + 2] = (((-((min(var_4, -7))))));
            arr_53 [i_4] [i_4] [i_14] = ((((var_10 ? var_6 : (arr_26 [i_4 - 2] [i_4 - 1] [i_4]))) > (arr_26 [i_4] [i_14] [i_14])));
            arr_54 [i_14] = (max(var_11, (min((arr_23 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 2]), var_6))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            var_37 -= ((-((0 ? (arr_61 [i_4 - 1] [i_14] [i_15] [i_16] [i_14]) : (arr_61 [i_4 - 1] [i_14] [i_4 - 1] [i_16] [i_16])))));
                            var_38 = -1;
                        }
                        arr_63 [i_4] [i_14] [i_15] [i_16] = var_12;
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
        {
            arr_68 [i_4 - 1] [i_18] [i_4] = ((!(arr_64 [i_4] [i_18] [i_4 - 1])));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 22;i_21 += 1)
                    {
                        {
                            var_39 = (max(var_39, (((((var_8 ? ((max((arr_49 [i_4] [i_18]), (arr_11 [i_4 + 3])))) : (((!(arr_61 [i_4] [i_4] [22] [i_20] [11])))))) / (arr_19 [i_4 + 2] [i_20]))))));
                            var_40 = ((((79 || (((8603889183573768601 ? var_10 : var_4)))))));
                            arr_78 [i_4] [i_18] [i_21] [13] [i_21] = var_7;
                            var_41 = var_7;
                            var_42 = (!11196);
                        }
                    }
                }
            }
        }
    }
    for (int i_22 = 2; i_22 < 20;i_22 += 1) /* same iter space */
    {
        arr_81 [i_22 + 2] [i_22] = var_2;
        var_43 = arr_30 [i_22] [10] [10];
        var_44 = (max(var_11, 1546392896));
        var_45 = var_10;
    }
    #pragma endscop
}
