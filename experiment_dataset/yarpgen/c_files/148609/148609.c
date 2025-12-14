/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = (((arr_3 [i_0]) * (arr_0 [11])));
        arr_4 [i_0] [i_0] = (-32766 + ((32741 ? (((max(var_9, (arr_0 [i_0]))))) : (~12))));
        var_11 ^= ((-((((-32758 ? 1 : 12)) + (arr_2 [i_0 + 1] [i_0 + 1])))));
    }
    var_12 = var_4;
    var_13 = (((1 * (-32741 == 15))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (max(var_14, var_0));
        var_15 = (max(var_15, (((~((var_4 ? (arr_5 [2]) : -32732)))))));
        arr_8 [i_1] |= (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_15 [i_2] [i_3] [i_2] = (((((arr_14 [i_3] [i_3] [i_3]) > 255)) ? (arr_13 [i_3] [i_2]) : (arr_10 [i_2])));
            arr_16 [i_2] [1] [13] = (11515 == -31);
            var_16 -= 735010396;
            var_17 = (arr_14 [i_2] [i_2] [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_19 [i_4] [i_4] = (arr_11 [i_2]);
            arr_20 [i_2] [i_4] = (~36);
            var_18 = (arr_12 [i_2]);
            arr_21 [i_4] [i_2] = (((arr_18 [i_2] [i_4] [i_2]) != (~var_9)));
            arr_22 [i_4] = 0;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (max(var_19, (((((max(10682658807857026338, var_2))) ? ((~(var_8 && 25377))) : ((~(arr_18 [i_5] [i_2] [22]))))))));
            var_20 += (var_9 * (arr_11 [i_5]));
            arr_25 [i_2] [i_2] = ((-((((32762 ? var_2 : var_5))))));
            var_21 = (arr_13 [i_2] [i_5]);
        }
        arr_26 [i_2] = var_2;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_22 = ((-(((arr_13 [i_6 - 1] [i_6 + 1]) ? ((18446744073709551604 ? 4294967291 : (arr_23 [i_6 + 1]))) : (arr_13 [i_6 - 1] [i_6])))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_23 = 13;
            arr_32 [i_6 - 1] [7] [i_6] = 1;
            var_24 = (((1 * 4294967288) ? (arr_28 [i_6 + 2]) : (((arr_28 [i_6 + 2]) ? (arr_28 [i_6 + 1]) : (arr_17 [i_6] [i_6 - 1] [i_6 + 2])))));
            arr_33 [i_6] [i_6] = var_5;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_25 = ((-(arr_12 [i_6 - 1])));
            var_26 *= ((~(((min((arr_17 [i_6] [i_6] [i_8]), 1)) ? (arr_36 [1] [1]) : (arr_27 [i_6])))));
            var_27 = (((min(65515, (arr_11 [i_8])))) ? -var_7 : (min((~32758), var_3)));
            arr_37 [i_6] [i_6] = var_3;
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_40 [i_6] = 39;
            arr_41 [i_6] = 65388027;
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_44 [i_6] [i_6] [i_6] = (((((((-2147483647 - 1) <= -9462))) ^ (var_3 == 1581714103))));
            var_28 = (max(var_2, 22387));
        }
        var_29 = ((((arr_27 [i_6 + 1]) > ((236 ? var_8 : 8415652038915110149)))));
        var_30 = (min(var_30, ((((((((45257 ? 1 : var_7)) >> (7306 - 7285)))) ? ((min((arr_27 [i_6 - 1]), (arr_27 [i_6 - 1])))) : (((((var_8 ? (arr_43 [i_6 + 1]) : (arr_11 [i_6])))) ? (1772047207 + -4878) : ((-(arr_14 [i_6] [i_6] [i_6]))))))))));
    }
    #pragma endscop
}
