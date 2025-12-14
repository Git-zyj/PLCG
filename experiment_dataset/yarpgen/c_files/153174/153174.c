/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] |= var_14;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_2] = var_2;
                    var_21 = -92;
                    var_22 = ((var_12 == (((-var_6 != (~var_14))))));
                    arr_8 [i_0] [i_1] [i_2] = -97;
                }
            }
        }
        var_23 = (min(var_23, ((((((((arr_6 [17] [i_0] [4] [4]) <= (arr_0 [15]))) || (var_0 - var_11))) ? ((-(((arr_5 [i_0] [i_0]) - var_14)))) : (((((124 ? -17926 : 220317908))) ? (arr_5 [i_0] [i_0]) : (!var_18))))))));
    }
    var_24 |= min(var_17, 1);

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_20 [i_3 - 1] [i_3] [i_5] = ((-(((arr_9 [i_4 - 1]) ? (arr_9 [i_4 - 1]) : var_6))));
                        arr_21 [i_6] [i_6] [i_3] [i_4 - 1] [i_3 + 1] = (min((((arr_19 [i_4 + 1] [i_3]) ? var_11 : (arr_17 [i_3 - 1] [i_4 - 2] [i_3]))), var_16));
                        var_25 *= ((~((~((min(174, var_1)))))));
                        arr_22 [i_3] [8] [i_3] [i_3] = ((((min((arr_17 [i_3 + 1] [i_3 + 1] [i_3]), var_5))) || ((min(var_13, (((var_10 >= (arr_17 [i_3 - 1] [i_3] [i_3])))))))));
                        var_26 = var_15;
                    }
                }
            }
        }
        var_27 = (arr_11 [5] [i_3]);

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_28 = var_17;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_29 [i_8] [i_3] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] = (min(((((arr_23 [i_7] [3]) <= (arr_26 [i_3 - 1] [i_8 - 1] [i_8] [i_9])))), (min(var_13, (arr_14 [i_3 - 1] [i_7] [i_8 - 1] [i_7])))));
                        var_29 = (((57 ? 31941 : 1)));
                        arr_30 [i_3] [i_3] [i_8 + 2] [9] = ((var_6 & ((-(arr_12 [i_9])))));
                        arr_31 [i_3] [i_3] [i_3 - 1] [2] [i_3] [i_3 - 1] = (min((min((!-1587267940), ((13157719802622442956 ? 64514 : 17460818570042284991)))), (arr_26 [i_3] [2] [i_8 + 1] [i_9])));
                        var_30 = (arr_9 [i_3]);
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_31 += (arr_28 [i_3] [i_3] [i_10] [i_10]);
            var_32 *= (min(95, (((!(arr_3 [i_3 + 1] [6] [i_3 + 1]))))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_33 = (arr_12 [i_3]);
            arr_37 [i_3] = (((((19 ? 46 : -321438200))) ? ((((arr_32 [i_3] [i_3]) ^ var_8))) : (~var_15)));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_34 += (!var_16);
            arr_41 [i_3] [i_12] = (~var_5);
            var_35 -= (arr_32 [i_3 - 1] [i_12]);
        }
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    {
                        var_36 = (min(((((arr_23 [6] [i_14 - 1]) >= (arr_1 [i_3 - 1])))), (min(((min(-18, 1))), 356804302))));
                        var_37 = (max(var_37, (arr_25 [i_3 - 1] [i_13] [i_14] [i_15])));
                        var_38 *= (min(((~(min((arr_35 [i_13] [i_14] [i_13]), (arr_14 [i_3] [7] [5] [i_15]))))), var_2));
                        arr_51 [i_3] [10] [2] [i_3] [i_15] = (((((14655811736562795032 ? 1015134332 : 15890765849445424103))) ? -var_2 : (arr_12 [9])));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_56 [i_16] = (((min((var_3 ^ 0), var_2)) + (arr_6 [i_16] [i_16] [i_16] [i_16])));
        var_39 = var_15;
        arr_57 [i_16] = (73 < 2604485183931939650);
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        arr_61 [i_17] |= (arr_58 [i_17]);
        arr_62 [i_17] [i_17] = (var_5 != -3071086110);
    }
    for (int i_18 = 1; i_18 < 10;i_18 += 1)
    {

        /* vectorizable */
        for (int i_19 = 3; i_19 < 10;i_19 += 1)
        {
            var_40 = var_13;
            var_41 -= -var_6;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_42 = (!11428);
            var_43 = var_10;
        }
        var_44 = (max(var_44, (((var_8 ? (var_3 < 2989699144) : (arr_65 [i_18] [i_18 + 3]))))));
        var_45 = ((((((min(var_17, 218239443)) ^ ((((-20093 || (arr_55 [i_18 + 2])))))))) ? (min(((var_2 | (arr_53 [i_18 - 1]))), ((min(var_7, 1634814802))))) : 1));

        for (int i_21 = 2; i_21 < 11;i_21 += 1)
        {
            var_46 |= (!-var_12);
            var_47 = var_18;
            arr_71 [i_21] [i_18] [i_21] = ((!(((14736468337107793717 ? 87 : -14806)))));
            var_48 = ((var_14 + (arr_70 [i_18])));
            var_49 = ((((var_9 ? (136 - var_8) : ((min(1, (arr_69 [i_21] [i_21 - 1] [i_21 - 1]))))))) ? (((arr_3 [i_21 + 1] [i_21 + 1] [i_18 + 3]) | ((var_10 ? var_5 : var_2)))) : (((!(((-76 ? 9426 : 18232935555736799520)))))));
        }
    }
    #pragma endscop
}
