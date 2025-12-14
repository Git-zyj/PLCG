/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_19, var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (max(((max(var_14, (arr_2 [i_0])))), var_1));
        var_21 = (min((((arr_3 [i_0]) >> (((arr_3 [i_0]) - 13445093613103974120)))), (max((arr_3 [i_0]), (arr_3 [8])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = var_1;
        var_23 |= ((((min((min((arr_5 [i_1] [i_1]), var_1)), var_8))) & (max((min(13702843023931938984, 4390)), (arr_5 [i_1] [i_1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_24 = (min(var_24, (4386 * 12751499614465584440)));
            var_25 |= (arr_10 [i_1]);
            var_26 = (arr_9 [1] [i_2]);
            var_27 -= (0 & 8964931332842602899);
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_28 |= (((max(var_2, (arr_12 [i_4 + 3] [i_4]))) >> (((min(var_3, (arr_12 [i_4 + 3] [i_3]))) + 1619028303))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_29 = ((var_15 >> (((arr_15 [i_4 - 2] [i_5]) - 4778))));
                var_30 = (max(var_30, ((((((arr_12 [7] [i_3]) + (arr_13 [15]))) > (arr_15 [i_4 - 2] [i_5]))))));
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_31 = ((var_16 * (arr_21 [i_6] [i_4 + 1])));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_32 = (arr_17 [i_4 - 1]);
                            var_33 -= (((arr_24 [i_7] [i_7] [i_7 + 2] [i_7] [i_7] [i_7]) < (arr_24 [i_7 + 2] [i_7] [i_7 + 4] [4] [i_7 - 2] [i_7])));
                        }
                    }
                }
                var_34 = var_18;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_35 = var_18;
                            var_36 = (arr_25 [i_9] [i_4] [i_4 - 1] [i_4] [i_10]);
                        }
                    }
                }
            }
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                var_37 = (arr_20 [i_3]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_39 [i_3] [8] [i_3] [9] [9] [i_12] [i_13] = var_1;
                            var_38 = (min(957293027701885368, 8964931332842602886));
                            var_39 = min((max((min((arr_38 [13] [i_4] [i_12] [9] [i_4] [i_4] [i_11 - 2]), var_11)), (max((arr_24 [i_4 - 1] [i_13 + 1] [i_11 - 1] [i_11] [i_13] [i_13 + 1]), var_9)))), (arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]));
                        }
                    }
                }
            }
        }
        for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_40 = var_2;
            var_41 = (((var_5 - var_7) % (arr_19 [i_3] [i_14] [i_14 - 2])));

            /* vectorizable */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_42 = (arr_42 [i_3]);
                arr_44 [i_3] [i_14 - 1] [i_15] = (((arr_31 [i_14] [i_14 + 2]) + var_7));
                var_43 &= (arr_22 [i_3] [i_3] [i_15] [i_15]);
            }
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_44 = (min(var_44, (((((((arr_48 [0] [i_14] [i_14 + 1] [i_14 - 1] [i_14 + 1] [20]) != var_19))) - var_18)))));
                            var_45 = max(var_18, (arr_16 [i_16 + 2] [i_14 - 2]));
                        }
                    }
                }
                arr_54 [i_3] [i_14] [i_16] &= var_13;
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                var_46 = (min(var_46, ((max((max(((((arr_50 [i_3]) / var_16))), (arr_35 [6] [i_3] [i_14] [i_14 + 1] [i_19] [i_19]))), ((((arr_30 [i_14 + 1]) < var_19))))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_47 = (max(((max(34, 4390))), (min((arr_45 [20] [i_20]), (arr_18 [i_14 + 3] [11] [i_21])))));
                            arr_61 [7] [i_20] [i_19] [i_19] [i_14] [i_3] [7] = (((arr_29 [i_3] [i_21]) & 145232321418441497));
                        }
                    }
                }
                arr_62 [i_14] [i_19] = ((((max((arr_13 [i_14 + 3]), var_12))) - ((min((arr_13 [i_14 + 3]), (arr_13 [i_14 + 1]))))));
                arr_63 [i_3] [19] [i_14 - 1] [8] = (min((max(var_2, (3510102335 || 1))), ((((arr_31 [i_14 - 1] [i_14 + 3]) || (arr_31 [i_14 - 1] [i_14 + 3]))))));
                arr_64 [i_3] [i_3] [i_3] = (min(var_1, ((max((arr_21 [1] [i_3]), (arr_27 [i_14] [i_14 + 3] [i_14 + 3] [i_14]))))));
            }
            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_48 = var_2;
                var_49 = (min(var_49, ((max((var_19 <= var_14), (max((arr_27 [i_14] [19] [i_14 - 2] [i_22]), (arr_51 [i_3] [i_14] [i_3] [i_14 + 3] [i_14 + 1]))))))));
            }
            var_50 = (min(var_50, var_14));
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 19;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {
                    {
                        arr_75 [i_14] [i_23] [i_23] [i_14] [i_23] [i_14] = var_19;
                        arr_76 [2] [i_23 + 1] [19] [0] [i_3] [0] = (min((((min(var_17, var_2)) >= ((min(var_13, (arr_51 [i_3] [i_3] [i_23 - 1] [i_24] [i_23])))))), (max((arr_74 [i_24] [i_23] [i_14] [i_3]), (arr_74 [i_24] [i_23 + 1] [i_14 + 3] [i_3])))));
                        var_51 = (min(var_15, (arr_22 [i_14 + 2] [i_23 - 1] [i_23 + 2] [6])));
                    }
                }
            }
        }
        for (int i_25 = 2; i_25 < 18;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 18;i_27 += 1)
                {
                    {
                        var_52 = var_12;
                        var_53 = var_8;
                        var_54 = (max(var_54, ((max((max(var_12, (arr_24 [i_27] [i_27] [14] [i_26] [i_25] [i_3]))), (arr_32 [17] [i_27] [i_27 + 3] [i_3]))))));
                    }
                }
            }
            var_55 = (max((max((arr_21 [i_25 - 1] [i_25 - 1]), (arr_21 [i_25 + 1] [i_25 + 1]))), (max((arr_21 [i_25 + 2] [15]), (arr_21 [i_25 - 2] [20])))));
        }
        var_56 *= ((((max((arr_52 [i_3] [i_3] [i_3] [i_3] [i_3]), var_18))) < (((arr_52 [i_3] [i_3] [i_3] [i_3] [i_3]) + var_3))));
        var_57 -= (min(((max((arr_25 [9] [i_3] [i_3] [i_3] [i_3]), (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])))), (min((arr_56 [i_3] [6] [i_3]), (min(var_1, var_5))))));
        arr_86 [i_3] = var_3;
        var_58 = (min(var_58, ((max((min((arr_56 [i_3] [i_3] [i_3]), (arr_56 [i_3] [i_3] [i_3]))), (max((arr_56 [i_3] [i_3] [i_3]), (arr_56 [i_3] [i_3] [i_3]))))))));
    }
    #pragma endscop
}
