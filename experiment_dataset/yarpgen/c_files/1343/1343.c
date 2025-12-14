/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_20 += ((((-5982168404980072716 ^ (min(0, 6816248333748677573)))) + (((min((arr_0 [i_2]), (arr_1 [i_0])))))));
                var_21 = ((170 ? ((min(85, 151))) : (((arr_6 [i_2] [i_2] [i_2 - 2] [i_2 - 1]) ? (arr_0 [i_2 - 2]) : (arr_6 [i_0] [12] [i_2 - 2] [i_2 + 2])))));
            }
            var_22 += ((((max((arr_7 [i_0] [i_1] [i_1] [i_1]), (((arr_1 [i_0]) + (arr_2 [i_0] [i_0] [8])))))) ? (((~((~(arr_4 [i_0] [i_0])))))) : var_4));
            arr_8 [i_1] [i_1] = var_0;
            var_23 = (((((-(min((arr_2 [16] [i_1] [i_1]), var_11))))) != ((~(arr_5 [i_0] [i_1] [i_0] [i_1])))));
            arr_9 [i_0] |= ((+(((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_0]) : (arr_0 [i_0])))));
        }
        var_24 = ((!(!4)));
        var_25 *= (min((((arr_2 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [0] [i_0] [i_0]) : 2614657765422941159)), (((!(arr_3 [i_0] [i_0] [i_0]))))));
        var_26 = var_17;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_27 = (((((arr_0 [i_3]) <= (((!(arr_6 [i_3] [i_3] [i_3] [i_3])))))) ? 145 : 29909));
        var_28 = (arr_1 [i_3]);
        arr_12 [i_3] = (((min(var_11, -2614657765422941157))) ? (arr_6 [i_3] [i_3] [i_3] [13]) : -2614657765422941159);
        arr_13 [i_3] = (min(((((((80 ? 3780972205 : 13488821063827408126))) || ((((arr_1 [i_3]) / 1)))))), (((arr_2 [i_3] [18] [i_3]) ? (arr_1 [i_3]) : (!18)))));
    }
    var_29 = ((-(((~var_4) ? var_1 : 3271630195))));
    var_30 = (min((var_10 & var_6), (((!(var_16 <= var_14))))));
    var_31 = -5;
    #pragma endscop
}
