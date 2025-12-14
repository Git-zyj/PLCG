/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_17 = min((arr_1 [i_0]), (min((arr_0 [i_0]), ((5542284502752016104 ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [4] |= (arr_4 [i_1] [i_1]);
        arr_7 [i_1] = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_18 = (arr_11 [i_1]);

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_16 [4] [i_2] [i_1] = min(((((~(arr_4 [i_1] [9]))))), (((arr_10 [i_2] [i_1]) ? (arr_9 [i_1] [i_1] [i_3 - 2]) : (arr_10 [i_1] [i_1]))));
                arr_17 [i_1] [i_1] [i_1] = ((+(((arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2]) ? (arr_9 [i_3 - 1] [i_1] [i_3 - 2]) : (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2])))));
            }
            var_19 = (arr_0 [i_2]);
            arr_18 [i_1] [i_1] [i_1] = -91;
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_21 [i_4] = (~(max((((arr_12 [i_4] [i_4] [11] [0]) ? (arr_5 [i_4]) : 942042602)), 1397603829)));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = (arr_15 [i_5] [i_5] [i_4] [i_4]);
            var_21 = (min(var_21, (((!((((arr_20 [i_4]) ? (arr_20 [i_4]) : (arr_20 [i_5])))))))));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = ((-1397603846 ? ((2970442718 ? (((6556576775904704649 ? 1397603829 : (arr_8 [10] [i_6])))) : 6556576775904704647)) : 1397603819));
            arr_26 [i_4] [3] [i_4] = (arr_20 [i_6]);
            var_23 = (arr_13 [i_4] [i_4] [i_4]);
        }
    }
    var_24 = (max(var_24, ((~(!1324524585)))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_35 [i_7] [i_7] [i_8] [i_9] = (min((arr_31 [i_7] [i_7 - 1]), (((2970442737 ? -1397603859 : (arr_4 [i_7] [i_8]))))));
                    var_25 = (~-1397603803);
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_26 = (arr_29 [i_7]);
                    arr_39 [i_10] [i_7 - 2] [i_7 - 2] = (arr_9 [i_7] [i_8] [i_10]);
                    var_27 = (max(var_27, ((min((((arr_25 [i_7 + 3]) ? (arr_23 [i_7 - 3] [i_7 + 2]) : (arr_23 [i_7 + 3] [i_7 + 1]))), ((((arr_31 [i_7 + 1] [i_8]) ? ((1084535282 ? 1397603811 : 2147450880)) : (arr_37 [i_7] [i_8] [i_8] [i_10])))))))));
                    var_28 = ((-(min(2233742117628062045, 88))));
                }

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_29 = (((1397603789 ? (((-9 ? -1309764507 : (arr_24 [i_8] [i_8])))) : 7461828663641972082)));
                    var_30 += ((!((min((arr_3 [i_7 + 1]), (arr_12 [i_7] [i_7 - 3] [i_7] [i_7 + 2]))))));
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_44 [i_7] [i_8] [i_12] = (((((~(arr_28 [10])))) ? (~-30) : (min((arr_14 [i_7] [i_7] [i_7 - 3] [i_7 - 2]), (~-63)))));
                    var_31 = (arr_15 [i_7] [10] [i_8] [i_7 - 1]);
                }
            }
        }
    }
    var_32 = var_7;
    var_33 = var_12;
    #pragma endscop
}
