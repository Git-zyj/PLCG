/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((max((31715 ^ var_14), (((-(arr_1 [16])))))) << (((!((min((arr_1 [i_0]), (arr_0 [i_0])))))))));
        var_17 ^= max(((-(!31715))), (((!(~3298308959)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((~(((!(!-31740))))));
        arr_7 [i_1] = ((((var_8 & (arr_5 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] &= min(((~(max(996658337, 1024933027)))), (((var_6 <= (-7866 & var_15)))));
        var_18 = ((!((min(((((arr_4 [i_2]) && var_5))), (min(var_11, var_0)))))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_15 [i_2] = ((!((((137438953471 < -1091130466331197226) & ((max(var_3, (arr_9 [7])))))))));
            arr_16 [i_2] [i_2] [i_2] = (((max((min((arr_13 [i_2] [i_2]), 1)), ((min(1, var_3))))) % (-31740 + 3298308958)));
            arr_17 [i_2] [i_2] = (((((max((arr_4 [i_3]), var_4)) & -58)) >> ((((92 >= 31744) <= (max(2147483647, -64)))))));
            var_19 = (max((max(((max(var_2, 7016))), (min(var_10, 3298308958)))), (((~(max((arr_13 [i_2] [3]), var_2)))))));
            var_20 -= ((((-(min(6062657862104210378, (arr_14 [i_3]))))) <= (((min((max((arr_14 [i_2]), 127)), (max(1, -64))))))));
        }
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((((min(var_10, var_5)))) || (((~((max(var_8, var_3)))))))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] = (max((max((max(var_4, var_14)), ((min(14, (arr_9 [i_4])))))), (min((((arr_26 [i_4] [i_4] [i_4] [i_6] [i_4] [i_7]) + (arr_18 [i_6]))), ((((arr_14 [i_6]) / (arr_21 [i_4] [i_5]))))))));
                        arr_28 [i_4] [i_4] [i_4] [i_7] &= (((7927848883502804541 & var_0) / (var_16 * -var_12)));
                        var_22 = (3298308938 & 3298308938);
                    }
                }
            }
        }
    }
    var_23 = ((((((var_9 - var_4) * (!65535)))) & -var_13));
    #pragma endscop
}
