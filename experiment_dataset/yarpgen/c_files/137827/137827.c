/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_8 : (0 | 536870656)));
    var_13 |= var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, (var_1 > var_10)));
        arr_2 [i_0] = ((((((((1 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? var_5 : (((var_7 ? var_3 : var_8)))))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? 12293 : (arr_0 [i_0])))));

        for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_15 ^= ((-(((-9223372036854775807 - 1) ? -5988 : var_2))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (((1 ? 46 : -8538)))));
                        arr_12 [i_1] &= var_8;
                        var_17 = (max(var_17, var_6));
                    }
                }
            }
            var_18 = (min(var_18, ((((((32211 ? var_3 : (arr_9 [i_0] [i_0] [i_1 - 4] [i_1 + 2])))) ? (((arr_9 [i_0] [i_1] [i_1] [i_1 - 2]) + (arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 2]))) : (var_9 / var_6))))));
        }
        for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] = ((var_11 ? (max((arr_11 [i_0] [i_0] [i_0] [i_0]), 65520)) : ((((arr_5 [i_4 - 2]) ? (arr_5 [i_4 - 1]) : (arr_5 [i_4 - 3]))))));
            var_19 -= var_6;
            arr_17 [i_0] [i_0] [i_0] = (max(((1 - ((1 ? var_5 : 1)))), ((((((165 ? 18 : 8077))) ? ((max(var_4, 1))) : (-9223372036854775796 && 1))))));
        }
        for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] = (min((min((arr_11 [i_0] [i_5] [i_5] [i_5 - 3]), (arr_10 [i_0]))), (max((arr_10 [i_0]), (arr_10 [i_0])))));
            var_20 &= (arr_19 [i_5 - 4]);
            arr_22 [i_0] = ((-5985 ? 0 : 35));
            var_21 = (((arr_20 [i_0]) ? (((arr_8 [i_0] [i_5 - 3] [i_5 - 4] [i_5] [i_5 + 1] [i_5 - 1]) ? (arr_8 [i_0] [i_5 - 3] [i_5] [i_5 - 4] [i_5 - 4] [i_5 - 4]) : (arr_8 [i_0] [i_5 - 3] [i_0] [i_5 - 3] [i_5] [i_5 + 1]))) : (((!(((arr_11 [i_5] [i_0] [i_5] [i_0]) && 7978)))))));
        }
        for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_22 |= (min((((arr_8 [i_6] [i_6 - 4] [i_6 - 4] [i_6] [i_6] [i_6]) ? -3945347285997739315 : (arr_8 [i_6] [i_6 - 4] [i_0] [i_6] [i_6] [i_0]))), (((!(arr_3 [i_6] [i_6 - 4]))))));
            var_23 -= arr_5 [i_0];
            arr_27 [i_6] [i_0] [i_6] |= var_7;
        }
    }
    #pragma endscop
}
