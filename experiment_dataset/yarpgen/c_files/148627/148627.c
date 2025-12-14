/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1767075802, 42));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((+(min((var_3 + var_4), (((var_18 ? var_6 : var_2)))))));
        arr_4 [i_0] &= (((((((arr_0 [i_0]) ^ (arr_2 [i_0] [i_0]))) <= (((min(var_5, (arr_2 [i_0] [i_0]))))))) ? (((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (max(((~(arr_0 [i_0]))), (((22142 ? -31 : 59)))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_20 = -102;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [5] = (((max((arr_7 [i_1 - 2] [i_2] [i_2]), (arr_7 [i_1 - 2] [1] [15])))) ? (arr_7 [i_2] [i_1] [i_0]) : var_11);
                arr_11 [1] [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_1]);
                var_21 = (arr_9 [i_0] [i_1]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_15 [i_0] [13] [i_3] [i_1 - 1] = ((((-(arr_0 [i_0]))) == (((((var_2 ^ var_13) != var_4))))));
                var_22 = (max(var_22, var_16));
            }
        }
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            var_23 = (max(var_23, ((((((-1809575626 ? ((var_6 ? (arr_14 [i_0] [i_0] [i_0]) : (arr_0 [i_4]))) : (min(var_13, 1384048134))))) >= (var_15 ^ var_16))))));
            var_24 = 837915507;
            var_25 = (min(var_0, (~var_10)));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                arr_23 [i_5] [4] = ((!((max(1, 1)))));
                arr_24 [i_0] [i_5] [i_5] [i_5] = ((~((~(arr_16 [i_6 + 3])))));
                var_26 = ((((!((((arr_20 [i_0] [23] [i_6 + 4]) ? (arr_1 [i_0]) : var_13))))) ? (32760 || 4080) : var_3));
                var_27 = (min(var_27, (((((((arr_21 [19] [i_5]) ^ (arr_21 [i_0] [i_5])))) ? var_0 : (((arr_21 [i_5] [i_6 - 2]) % (arr_12 [i_0] [i_0] [i_0]))))))));
            }
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                var_28 = var_4;
                var_29 = ((((max(-99, -501))) ? var_18 : ((var_5 ? ((min(var_6, var_16))) : ((var_10 ? var_12 : var_6))))));
            }
            for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
            {
                arr_31 [10] = (arr_16 [i_0]);
                var_30 = (max((max(var_13, (arr_7 [i_8 + 1] [i_8 + 1] [i_8 - 1]))), (!16852396124256247764)));
                var_31 += ((+(max((arr_27 [i_8 + 1] [i_8 - 2] [i_8]), ((-26343 + (arr_21 [i_0] [i_8 - 1])))))));
            }
            for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_36 [i_0] = ((!((min((arr_16 [i_0]), var_10)))));
                    var_32 = var_3;
                    var_33 = (max(var_33, ((max(((+(((arr_28 [1] [i_5] [i_9]) ? (arr_35 [i_9 - 2] [i_0]) : var_8)))), 1)))));
                    var_34 = (arr_27 [i_9 + 1] [i_9 - 2] [i_9 - 2]);
                }
                var_35 = (max((max((min(-32766, 1196870092)), ((min(var_2, var_7))))), ((-81 ? -113 : (max(-2147483633, 82))))));
                arr_37 [i_5] = (min(var_16, ((max(1150, (arr_14 [i_9 + 1] [i_9 - 2] [i_9 - 1]))))));
            }
            var_36 = -1133;
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_37 = min((((arr_26 [i_11] [i_11]) << (((!(arr_29 [i_11] [i_11] [i_11] [i_11])))))), (((var_13 << (((min(var_13, var_15)) - 27611))))));
        arr_42 [i_11] [i_11] = var_10;
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            {
                var_38 = var_2;
                arr_49 [i_12] [i_12] [i_12] = (((arr_43 [i_12]) != ((max(var_7, (arr_43 [i_12]))))));
                var_39 = ((((((arr_47 [i_13]) ? (arr_47 [i_12]) : (arr_47 [i_12])))) ? (arr_47 [i_12]) : ((min((arr_47 [i_12]), var_2)))));
            }
        }
    }
    #pragma endscop
}
