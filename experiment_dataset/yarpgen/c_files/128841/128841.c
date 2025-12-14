/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (min(var_19, var_7));
    var_20 = ((var_13 ? var_14 : var_17));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = (!576460202547609600);
        var_22 = (((max(536854528, 1))) ? (var_11 >= 1071846372) : (var_9 && var_10));
        var_23 = ((((-(arr_0 [i_0 + 1] [3]))) == (arr_1 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_24 = var_17;
            var_25 = ((((((arr_1 [i_0 - 1]) * (arr_1 [i_0 + 1])))) ? (((!(arr_1 [i_0 + 1])))) : ((~(arr_1 [i_0 + 2])))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_26 = (arr_3 [i_0 + 2] [i_2]);

            for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_27 = ((1 ? 32767 : 1071846372));
                var_28 = (max(var_28, var_0));
                var_29 = ((((((!(arr_12 [i_3 + 1] [i_3 - 3] [i_3] [13])))) * (arr_1 [i_3]))));
            }
            for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_30 -= ((~(((arr_1 [i_4 + 1]) ? 1071846348 : (arr_1 [i_4 - 4])))));
                var_31 = (max(var_31, ((min((arr_1 [13]), (max(var_14, ((((arr_1 [1]) < (arr_0 [i_0] [i_4])))))))))));
                var_32 -= (min((min((max(var_3, 3511432575)), 0)), (((((((arr_6 [i_4 - 4]) < (arr_2 [i_0 + 1]))))) * var_2))));
            }
            var_33 = (!var_0);
        }
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_34 = (!18446744073709551615);

        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_35 = ((!(arr_4 [i_5 + 1] [i_5 - 1])));
            var_36 -= (((((arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1]) ? (((var_2 ? (arr_16 [i_5] [i_6]) : var_5))) : (min(var_1, (arr_4 [i_5] [i_6]))))) ^ (((max((arr_1 [i_5 + 1]), (arr_1 [i_5 + 1])))))));
            var_37 -= ((((max((!var_10), (max(var_7, (arr_1 [i_5])))))) ? (max((((!(arr_19 [i_6])))), (~var_3))) : (max((arr_3 [i_5] [i_6]), (arr_3 [i_6] [i_5])))));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_38 = (arr_0 [i_5 - 1] [i_5 + 2]);
            var_39 = (40891 ? 77 : -1);
        }
        var_40 = (arr_11 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
