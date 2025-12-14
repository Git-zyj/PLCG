/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(54815, 10720));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_21 = (max((((max(54818, 1)))), var_10));
        arr_3 [i_0] = 2147483638;
        var_22 |= ((((-var_8 ? (arr_1 [i_0 + 1]) : (var_7 ^ var_3)))) || (((~(min(20884, 2147483638))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_23 = (min(var_23, 1));
        var_24 ^= ((+((var_17 ? (10714 | 0) : ((-(arr_2 [13])))))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_25 = ((((min((max(var_8, var_6)), ((var_1 + (arr_0 [i_1] [i_2])))))) ? (arr_4 [i_1] [i_1]) : ((((var_12 ? 65535 : 1)) ^ (((arr_2 [i_1]) + 31087))))));
            var_26 = (((((var_14 ? var_9 : (~var_3)))) || ((((var_10 ? 15 : var_9))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_13 [i_1 + 1] [i_2] = (arr_2 [i_1]);
                arr_14 [i_1] [i_2] [i_2] [i_3] = var_0;
            }
            var_27 = ((((arr_9 [i_1 + 1]) != (arr_9 [i_1 + 1]))));
            var_28 = (((arr_10 [1] [i_1] [1] [1]) - (max(((var_13 << (var_7 - 17566))), var_11))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_29 |= -1583366303;
            var_30 = (max(var_30, (arr_4 [2] [i_4])));
            var_31 |= ((min((-2147483639 / 15974), ((min(var_13, var_9))))) % ((((min(var_16, 54826))) ? 1 : ((var_5 ? var_8 : var_11)))));
            var_32 = (min(var_32, 1));
            var_33 += var_13;
        }
        arr_19 [2] [i_1] = ((var_2 << (var_8 - 41650)));
        arr_20 [i_1 - 3] [i_1] = (((((~(max((arr_10 [i_1] [6] [2] [i_1]), var_5))))) || (~422222009)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = (((((arr_23 [i_5]) && (arr_23 [i_5]))) || (min((!var_11), (var_13 && var_5)))));
        var_34 = ((-(var_16 % var_8)));
        var_35 = 826098254;
        var_36 |= -9;

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_37 = (min(var_37, -2147483639));
            var_38 = ((-1834906983 | 58753) != (arr_25 [i_5] [i_6]));
        }
    }
    #pragma endscop
}
