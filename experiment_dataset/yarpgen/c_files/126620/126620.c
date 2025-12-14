/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((min(var_1, var_8))), (max((min(var_8, var_0)), ((var_13 ? var_9 : var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_16 -= -var_1;
                            var_17 += var_12;
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_2] = (-2147483647 - 1);
                    }
                }
            }
        }
        arr_16 [i_0] |= var_12;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_18 = ((1 ? var_1 : 3615845273));
                    var_19 *= (((arr_5 [i_5] [i_0]) ? (arr_5 [i_5] [i_6]) : (arr_5 [i_0] [i_0])));
                    var_20 = (((arr_11 [i_0] [i_0] [i_6]) ? 24 : (!var_0)));
                }
            }
        }
        var_21 += var_5;
        var_22 -= (((((var_9 | (arr_8 [i_0] [i_0])))) || (((var_0 ? (arr_18 [i_0] [i_0]) : var_14)))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_23 = (min(((((arr_22 [i_7] [i_7]) > (arr_22 [i_7] [i_7])))), var_5));
        arr_23 [i_7] = 230;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_8] [i_10] [i_10] = (max(15, 7697242874421474228));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10] = ((((var_14 ? var_10 : var_8))) / var_3);
                        arr_38 [i_10] [i_10] [i_10] [i_10] = 8138680131764599668;
                    }
                    var_24 = (((var_5 && 63) >> (((min((min(var_3, var_0)), (((arr_30 [i_8]) ? var_2 : 1069520638)))) - 4194621106681024491))));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_41 [i_10] [i_10] [i_10] [i_10] = var_5;
                        arr_42 [i_8] [i_10] [i_10] [i_8] = (((((var_8 ? ((71 ? var_1 : var_13)) : (arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (min(313921696, ((24 ? 8138680131764599665 : -89)))) : ((var_1 ? (((min(var_11, var_4)))) : ((var_3 ? 221 : var_5))))));
                        var_25 = max((max((88 >= var_13), (max(36, (arr_32 [i_8] [i_8]))))), (((((min((arr_29 [i_10] [i_10]), 15542780245257726191))) ? (arr_40 [i_8] [i_8] [i_8]) : (!4294967295)))));
                        arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((((min(127, (arr_32 [i_8] [i_8])))) ? var_14 : (max((((32309 ? 1 : var_14))), -1412339073093128565))));
                        var_26 = (min(((((var_10 ? 13097657713658416992 : (arr_28 [i_9]))) << var_2)), (min((max(var_14, 17957042175579008584)), var_9))));
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_27 = (max((min(var_0, ((var_5 ? 17957042175579008584 : var_8)))), ((((min(1, 4294967295))) ? (((-(arr_30 [i_8])))) : (min((arr_44 [i_10]), var_11))))));
                        arr_46 [i_8] [i_8] [i_8] [i_8] [i_10] = (arr_45 [i_8] [i_8] [i_10] [i_8]);
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_49 [i_10] [i_10] [i_10] [i_10] = (min(var_1, ((var_4 ? var_13 : var_6))));
                        arr_50 [i_10] [i_10] [i_10] = (min(var_3, (min(var_8, (((arr_30 [i_14]) ? (arr_31 [i_8] [i_8]) : 7125200021603541861))))));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_28 = (((((((7697242874421474228 ? -126 : 5349086360051134623)) * (!var_13)))) ? 132 : var_6));
                        var_29 = (((!((min(var_9, var_5))))) ? (((((var_0 ? var_8 : var_8))) * ((var_3 ? 15542780245257726191 : var_12)))) : (arr_30 [i_8]));

                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            arr_56 [i_8] [i_10] = (((((~(min(-1, var_2))))) ? ((((((arr_39 [i_8] [i_8] [i_8] [i_8]) ? var_11 : 63407))))) : ((var_0 ? ((0 ? var_5 : (arr_26 [i_8]))) : var_5))));
                            arr_57 [i_15] [i_15] [i_15] [i_10] [i_15] [i_10] [i_15] = var_4;
                            var_30 = (min(((min(-3, -1))), (min((arr_25 [i_8] [i_9]), (min(var_7, var_1))))));
                        }
                        arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] = ((((min((arr_29 [i_10] [i_10]), ((((arr_36 [i_8] [i_8] [i_8] [i_8]) <= var_5)))))) ? (((~((-89 ? var_8 : var_4))))) : (min((max(17821703523233957944, var_3)), ((3849954099317524826 ? var_6 : (arr_36 [i_8] [i_8] [i_8] [i_8])))))));
                    }
                }
            }
        }
        var_31 = ((((max((min(-2906731875126730774, 15063669374244682967)), var_6))) ? var_12 : ((((max(var_1, (arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (min(0, (arr_44 [i_8]))) : (var_9 || var_9)))));
    }
    var_32 = ((((max(((var_1 ? var_2 : var_10)), var_4))) ? (min((2147483647 <= var_13), 8487220136745927282)) : (min(168007658, ((var_0 ? var_10 : var_5))))));
    var_33 = (var_12 ? -4017964112878328665 : (-217260435260127230 <= 9085377009006292495));
    #pragma endscop
}
