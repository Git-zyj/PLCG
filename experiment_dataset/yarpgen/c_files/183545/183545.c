/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max(((var_5 ? var_7 : var_7)), (var_4 * 22957))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        var_12 = (min(var_12, (((-22878 ? (((min((var_9 && var_3), var_3)))) : 18446744073709551609)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (((min(((((arr_2 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_1])))), var_1)) > (((min((arr_2 [i_0]), (max(17593, 1))))))));
            var_14 = (max(var_14, var_9));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_15 |= ((((max((arr_2 [i_0]), (arr_3 [i_0] [i_0] [i_2])))) ? (min(0, (((arr_5 [i_0] [i_2] [i_0]) ^ var_1)))) : (arr_0 [i_0] [i_0])));
            arr_7 [i_0] [i_2] &= (!-var_1);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (((-((((((1 + (arr_3 [i_0] [i_0] [i_0])))) && 47943))))))));
            var_17 = var_9;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_18 = (((((((arr_10 [1]) ^ (arr_9 [i_0]))))) ? (((!(arr_12 [4] [7] [i_4])))) : (arr_5 [i_0] [i_4] [i_4])));
            var_19 = ((arr_6 [i_0]) && ((((208215536 / var_4) | (((arr_9 [i_0]) ^ var_2))))));
            arr_15 [i_0] [i_0] |= (arr_3 [i_0] [i_0] [i_4]);
        }
    }
    #pragma endscop
}
