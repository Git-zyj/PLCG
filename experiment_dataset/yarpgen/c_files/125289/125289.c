/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -14475;
    var_17 &= (max(var_14, (min(var_5, ((max(110, var_2)))))));
    var_18 = ((((14475 - (var_3 | 14475))) > ((((max(1, 16794619684492358497)) != 397899569)))));
    var_19 = (min(var_19, (((((((((4073619898 << (7009 - 6984)))) | ((4659655547555579843 & (-9223372036854775807 - 1)))))) / (min((3571291972 - 1652124389217193119), ((min(var_9, var_0))))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 ^= ((+((var_15 ? (30 != -125) : ((min((arr_1 [i_0 + 1]), (arr_3 [i_0] [i_0]))))))));
        var_21 += 3571291955;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = var_9;
            arr_6 [i_0 + 2] = (min((((~(arr_1 [i_0 + 1])))), (arr_1 [i_0 + 2])));
            arr_7 [11] [11] = (max(var_3, var_10));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_2] [i_0 - 1] [i_0 - 1] = (-7918 >= 83);
            arr_12 [i_0] [i_2] = 100925405378754555;
            arr_13 [i_2] [i_2] [i_2] = (arr_8 [15]);
            var_23 = (max((127 > 1), 723675330));
            arr_14 [i_2] = (max(1003277826, 51897));
        }
        arr_15 [i_0 + 1] = ((71 ? 221347400 : 7934));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_19 [i_3] [i_3] = (((((var_4 <= var_0) != (min((arr_18 [i_3]), (arr_17 [i_3]))))) ? (arr_17 [i_3]) : (min(1, ((-1 ? var_0 : var_4))))));
        var_24 = (arr_16 [i_3]);
        arr_20 [i_3] = (4040574258 | var_13);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_25 = ((1 ? var_3 : 94));
        var_26 *= ((+((max((arr_21 [i_4]), (arr_17 [20]))))));
    }
    #pragma endscop
}
