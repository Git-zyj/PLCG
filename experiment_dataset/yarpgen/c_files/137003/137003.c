/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 - 3] = (((arr_3 [i_0 - 3]) < (arr_2 [i_0])));
        var_15 = (((var_9 && 2577984788) % ((var_2 ? 17 : (arr_2 [i_0])))));
        var_16 = (max(var_16, var_12));
        var_17 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_12 [i_1] = (arr_10 [i_2 + 2]);
            arr_13 [i_1] [i_1] = (max(((((482478685 % var_3) != var_0))), ((-(arr_9 [i_1 - 2] [i_1 - 2])))));
            arr_14 [i_2] = max((arr_1 [i_1 - 1] [i_2 + 3]), ((~(max((arr_0 [i_1 + 1] [i_1]), var_3)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_18 = (arr_0 [i_1 - 1] [i_1 - 1]);
            var_19 = ((((arr_10 [i_3]) ? var_10 : var_5)));
            var_20 = ((var_7 ? ((var_5 ? (arr_0 [i_3] [i_1]) : (arr_2 [i_3]))) : 3628504728));
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_21 = ((arr_16 [i_1] [i_1 - 2] [i_1]) ? (((((4294967288 ? (arr_1 [i_4 - 2] [i_1]) : 1774)) == (((511 ? 1 : (arr_9 [i_1] [i_4]))))))) : var_0);
            arr_21 [i_1 - 2] = (max((((-1775 ? 186912735 : (min(1, 2321042085))))), ((1774 % (max(4338478785605117683, 6567304568015194303))))));
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            var_22 = 4294967292;
            var_23 = (((arr_8 [i_1 - 2]) ? ((90 ? var_13 : (arr_8 [i_1 - 3]))) : (((arr_8 [i_1 + 1]) ? (arr_8 [i_1 + 1]) : -27330))));
            var_24 = ((~((-1775 ? (arr_2 [i_1]) : (((max((arr_17 [i_1] [i_5]), var_4))))))));
        }
        var_25 = 15936;
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_30 [2] = (min((((-(!19932)))), (max((var_14 ^ var_11), var_7))));
            arr_31 [17] = (((((max((arr_26 [i_6]), (arr_29 [i_7]))) / var_13)) > ((((arr_28 [i_7] [i_6 - 1]) ? ((((arr_28 [i_6] [i_6]) ? (arr_27 [i_6]) : var_13))) : (-1775 * 3250017793))))));
            var_26 = (max((min(((var_4 ? 237494565 : var_2)), ((((arr_27 [i_7]) < var_2))))), (max(var_8, (min((arr_27 [i_7]), 1301746035))))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_27 = (min(var_27, 1152083746));
                arr_37 [i_6] [i_6] [i_6] [i_9] = ((((((arr_28 [i_6 + 1] [i_6 + 1]) ? 4294967289 : 7169527500960749633)) < (arr_26 [i_9]))));
            }
            for (int i_10 = 4; i_10 < 19;i_10 += 1)
            {
                var_28 = (max(var_28, var_7));
                var_29 = 511;
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_30 = var_4;
                var_31 = (max((((((4057472743 ? var_12 : 19926))) ? (max((arr_27 [i_6]), var_14)) : 4294967295)), (((-28005 ? (((((arr_33 [i_6 - 1] [17] [i_11]) && 13)))) : (arr_33 [i_6] [i_6 + 2] [i_6 + 2]))))));
                var_32 = ((((+((237494543 ? (arr_29 [i_11]) : (arr_40 [i_6 + 2] [i_6 + 2] [i_11] [i_6 + 2]))))) > (((~(min((arr_39 [i_6] [i_6] [i_11]), 801111811566097331)))))));
            }
            var_33 = (((3256520997 + -19932) != (((arr_42 [13] [13] [13] [i_8]) ? (arr_42 [i_6] [i_6] [i_6] [i_6 - 1]) : (arr_42 [i_6 + 1] [i_6 + 1] [i_6] [i_6])))));
        }
        arr_43 [i_6] = (min(var_8, (arr_27 [i_6 - 1])));
    }
    var_34 = (((min(var_13, -512)) == var_12));
    var_35 = ((((max(var_8, (~var_8)))) ? (((var_1 ? var_6 : ((-1617 ? -11873 : 2147483647))))) : (max(2011523300, 13510318618754653382))));
    var_36 = var_3;
    #pragma endscop
}
