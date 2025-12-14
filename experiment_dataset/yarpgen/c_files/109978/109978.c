/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [0] = 1750874844;
        arr_4 [i_0] = (((max((min((arr_1 [i_0]), 1750874859)), (((arr_2 [i_0]) / var_4)))) << ((((~(!221549364))) + 13))));
        var_11 = (max(var_11, 65535));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [21] [i_1] = ((2544092442 && (((-4738 ? 8388607 : 4732)))));
                arr_11 [0] [0] [i_2] = ((38 ? 8388617 : (!-893375402703829638)));
            }
            arr_12 [i_0] = (var_4 | 18446744073701163014);
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_12 += (arr_1 [i_3]);
        arr_16 [i_3] [i_3] = -0;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = 18446744073701163022;
        var_13 = (min(var_13, ((min((!var_7), (arr_5 [i_4] [i_4] [i_4]))))));
        var_14 -= ((((min(((-912998485 ? -430282997 : var_0)), var_6))) ? -1 : var_3));
        arr_22 [i_4] = ((-(min((~201326592), (((!(arr_1 [i_4]))))))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = (((arr_1 [i_5]) > (222 ^ -4751)));
        var_15 ^= (((((9223372036854775807 ? 141 : 113))) ? (((~(arr_2 [4])))) : 2544092434));
        var_16 += (min((arr_2 [i_5]), (arr_2 [i_5])));
    }
    var_17 = ((~((~((var_7 >> (var_2 - 26950)))))));
    var_18 = (~var_8);
    #pragma endscop
}
