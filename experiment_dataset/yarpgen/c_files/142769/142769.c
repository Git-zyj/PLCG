/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (-var_1 && var_6)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 += -var_4;
        var_16 -= ((191 ? 0 : var_13));
        arr_3 [i_0] [i_0] = ((!((!(((14018 ? 20526 : 3489)))))));
        var_17 = ((((((arr_0 [i_0 + 1]) >> 0))) ? 1447349168 : 0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((((arr_5 [i_1]) < (3768090284996804341 + 9223372036854775807)))) >> (min(var_6, var_11))));
        var_18 -= (((-9223372036854775807 - 1) != 18446744073709551615));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (3768090284996804341 >= 18446744073709551615);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = var_2;
                    var_20 = (((((63 < (-2147483647 - 1)))) >> (26999 - 26985)));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    {
                        var_21 = ((var_5 * (((arr_0 [i_8 + 1]) ? (arr_4 [i_8 - 3]) : ((var_2 ? var_5 : (arr_15 [i_8])))))));
                        var_22 = (((!var_5) & (arr_21 [i_7] [i_7] [i_7 - 2] [i_7])));
                        arr_25 [i_5] [i_5] [i_6] [i_5] = (((((var_9 | (arr_15 [i_5])))) ? (~13) : ((237334004 ? var_13 : (arr_15 [i_8 + 2])))));
                        var_23 = max((~0), ((((arr_22 [i_8] [i_6 - 1] [i_7 + 2] [i_6 + 1]) - var_8))));
                    }
                }
            }
        }
        arr_26 [i_5] = 2147483615;
        var_24 -= var_9;
        var_25 = (((((-var_4 / (max(var_6, var_4))))) * (((8 / (arr_23 [i_5] [8]))))));
    }
    #pragma endscop
}
