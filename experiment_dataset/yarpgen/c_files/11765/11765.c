/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_5, (min((min(4818835578717100959, 2659326134)), var_2))));
    var_20 = ((!((max(((var_18 ? 2147483634 : var_2)), (2227145135788617000 || 5183093769011653690))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (max(8103780497761556838, (((((~(arr_0 [i_0])))) ? (max(261341841, 673994885271317791)) : ((50331648 ? 2659326134 : -1))))));
                    arr_7 [i_0] [i_1] [i_2] = (var_5 ? var_9 : (max((arr_0 [i_0 + 1]), (arr_2 [i_1] [i_2]))));
                    arr_8 [i_1] = ((((max(2108371676932326433, 242174152))) ? (max((min(31744, (arr_1 [i_1]))), (!4294967291))) : (max(((-1406678689235333745 ? var_17 : var_3)), (arr_6 [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_22 = (max(var_22, (arr_5 [i_3] [i_2] [i_1] [i_0])));
                        var_23 -= (((var_10 == var_3) ? (8053063680 & var_6) : var_13));
                        var_24 = (min(var_24, ((((arr_1 [i_1 - 1]) ? var_11 : 10523874993203922727)))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_6 [i_0 - 1] [i_0]);
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = var_9;
        arr_16 [i_4] = (-1666511658 == 13617656863632658921);
        var_25 = (arr_0 [i_4]);
        var_26 = var_14;
        arr_17 [i_4] = 7882;
    }

    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_27 -= (max(((max((arr_3 [i_5] [i_5 - 1] [i_5 + 1]), (arr_3 [i_5] [i_5 - 2] [i_5 + 1])))), (arr_4 [i_5] [i_5])));
        arr_21 [i_5] [i_5] = (max((!264241152), var_5));
        var_28 -= (arr_10 [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            var_29 = (arr_20 [i_7 - 2] [i_7 - 2]);
            var_30 = (max(var_30, ((+((min((arr_19 [i_6]), (arr_19 [i_6]))))))));
            var_31 = (max(var_31, (((((max((min(-8053063692, (arr_11 [i_6] [i_7] [i_7] [i_7]))), (arr_18 [i_6] [i_7])))) ? (((((var_11 ? var_1 : var_18))))) : (min(((min(var_10, var_7))), (max((arr_6 [i_6] [i_7]), (arr_24 [i_6] [i_7]))))))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_32 += (arr_20 [i_6] [i_8]);

            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {
                var_33 = (min(var_33, ((((-(var_8 | 11308604878544936005)))))));
                arr_32 [i_9] [i_9] [i_8] [i_6] = 0;
            }
            var_34 = (max((!1816605979), ((((max((arr_27 [i_6] [i_6] [i_8]), (arr_29 [i_6] [i_8] [i_8])))) ? 4294967295 : (!61444)))));
            arr_33 [i_6] = ((var_17 ? var_10 : (((arr_26 [i_6]) ? (max(11308604878544936005, (arr_1 [i_6]))) : var_11))));
            var_35 = (max(var_35, ((+((25807 ? (((arr_23 [i_8] [i_6]) ? (arr_30 [i_6] [i_8] [i_8] [i_8]) : 3244)) : (min(var_5, var_14))))))));
        }
        var_36 += 67108863;
        arr_34 [i_6] [i_6] = 4818835578717100967;
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_37 -= (arr_36 [i_10] [i_10]);
        var_38 = (max(var_9, (8070450532247928832 || 2227145135788617000)));
        arr_37 [i_10] = (min(18446744073709551615, 6560820600478821868));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                {
                    var_39 = var_4;
                    var_40 = (max(var_40, var_8));
                    var_41 = (max(var_41, (((!(((var_5 ? ((((arr_43 [i_10] [i_11] [18]) ? var_18 : var_9))) : (((arr_42 [16]) ? var_7 : -31940))))))))));
                    var_42 += (3449413971724479716 / 1151795604700004352);
                }
            }
        }
    }
    #pragma endscop
}
