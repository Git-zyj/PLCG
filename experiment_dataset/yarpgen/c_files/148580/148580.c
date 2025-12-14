/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = -333241469;
        var_15 = var_12;
        var_16 = (max(var_16, (((((((arr_1 [i_0] [i_0]) ? -7168815715069461362 : var_0))) && (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] |= (((-3323281496294069906 + 9223372036854775807) << (231 - 231)));
        var_17 = ((5572813941045927176 < (((((arr_1 [i_0] [i_0]) <= (arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((117 ^ 117) ^ (arr_5 [i_1 + 1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_18 = (min(var_18, 117));
            var_19 = (((!var_5) + ((var_4 - (arr_11 [i_1] [i_1])))));
            arr_12 [6] [i_1] [i_1] = (~var_3);
        }
    }
    var_20 = ((((var_12 ? var_4 : (-117 & -119))) << ((((((var_6 ? var_3 : var_12)) ^ (((32632 << (117 - 114)))))) - 14273656342253459384))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_21 = (283515721 < 3860874466);
                var_22 = 1740967287;
                var_23 = (var_3 == 85);
            }
        }
    }
    #pragma endscop
}
