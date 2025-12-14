/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(4111141662, var_0))) ? 4111141677 : ((min(var_4, 12145)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        var_11 = ((((((!(~4111141663))))) <= var_3));
        var_12 = (min(var_12, ((((((max(var_3, var_3)) + (183825649 - 183825658))) == 8)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = ((-((12145 ? (max(var_3, (arr_6 [4]))) : (((var_6 / (arr_6 [i_1]))))))));
            var_13 = ((29394961 + 4111141672) - 65527);
            arr_9 [12] [i_1] [10] = ((((((max(53395, 105))))) ? ((-(14240 + var_3))) : ((((min(4111141662, 4111141676)) + (arr_6 [i_2]))))));
            arr_10 [i_1] [i_1] [i_2] = -8;
            var_14 = -1284333096035744142;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_15 = (min(var_15, 45089));
            arr_14 [i_1] [i_1] [i_1] = ((!((((((var_3 ^ (arr_11 [i_1] [i_3])))) ? var_9 : var_5)))));
            var_16 -= (-((-(min(4294967295, (arr_12 [i_3] [i_3]))))));
        }
        arr_15 [6] |= ((min((~var_8), -var_8)));
        var_17 = (min(var_17, (((-2050626575 + 2147483647) << (((((arr_11 [i_1] [i_1]) ? (arr_11 [8] [i_1]) : 4111141692)) - 10715))))));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_18 = (min(((-((var_4 ? (arr_16 [i_4]) : var_7)))), ((((arr_7 [i_4 - 1]) ? (arr_7 [i_4 - 1]) : (arr_7 [i_4 + 1]))))));
        arr_19 [i_4] = 183825616;
        var_19 = 4;
    }
    #pragma endscop
}
