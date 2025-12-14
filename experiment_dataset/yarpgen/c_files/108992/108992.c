/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!(var_11 <= var_14))));
    var_16 *= (!var_10);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(24, (arr_1 [i_0 + 1] [i_0]))))));
        arr_2 [i_0] [i_0] = (((var_8 >= var_11) ? 3 : (((((min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [6] [i_0])))) && (((-13 ? 1 : 67))))))));
        var_18 -= (min((max((-67 < 243), -71)), ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))));
        var_19 = -252;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (arr_1 [i_0] [i_1]);
            var_21 -= arr_0 [i_0];
            arr_5 [0] [i_1] = (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) >= ((-(arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_2] [8] [i_0] = var_12;
            arr_10 [i_0] = ((!(arr_8 [i_0 - 1] [i_2 + 3])));
            arr_11 [i_2] = ((var_4 ? (arr_1 [i_0 + 1] [i_2 + 3]) : var_7));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_22 = (max(var_22, ((((((~(arr_7 [i_3] [i_3])))) ? (arr_7 [i_3] [16]) : (var_4 - 1))))));
        arr_14 [5] [14] = (((var_3 ? (arr_7 [i_3] [i_3]) : (arr_1 [i_3] [i_3]))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_23 |= ((arr_16 [i_4] [i_4 - 2]) % (min((((arr_16 [i_4] [i_4]) ? (arr_16 [i_4] [i_4]) : var_11)), ((-8 ? var_11 : 32762)))));
        var_24 &= (((((arr_16 [i_4 - 1] [i_4 - 1]) ? ((max(var_8, 32762))) : var_2)) | ((((arr_16 [i_4 + 1] [5]) || (!var_11))))));
        arr_17 [i_4] = ((((~(~var_5))) < ((((~(arr_16 [i_4] [i_4 + 1]))) << (var_6 - 705366823)))));

        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_25 = (max(var_25, ((max((((2047 == var_3) ? 90 : var_14)), ((((~-32763) ? ((max(var_10, var_1))) : ((max((arr_15 [i_4]), var_13)))))))))));
            arr_21 [i_4] = (min(1, (min(11590795, 1))));
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            arr_24 [i_4] = (min(((max(147, 252))), 131071));
            var_26 = (((((-120 ? var_13 : (arr_18 [i_4 - 1] [i_4] [i_4])))) ? 0 : var_0));
            arr_25 [5] [i_6] [10] = ((((((-32 ? 255 : -224552278)))) ? ((1 * (var_2 * var_8))) : -var_8));
            var_27 |= var_12;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            var_28 = (var_7 >= var_5);
            arr_29 [i_7] [i_7] = (((arr_28 [i_4] [i_4 - 3] [i_4 - 3]) | var_6));
        }
        arr_30 [i_4] = var_12;
    }
    var_29 = ((((max(4194303, var_4))) || ((!((max(1, var_13)))))));
    #pragma endscop
}
