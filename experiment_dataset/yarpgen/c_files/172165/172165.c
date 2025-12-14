/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = (min((((~(arr_1 [i_0])))), (max(var_6, (arr_0 [i_0] [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_2 [i_0 - 2] [i_0 - 2])));
                    var_17 = var_7;
                }
            }
        }
        var_18 = (min(var_18, 18446744073709551615));
        var_19 = (min(var_19, (((((((arr_1 [i_0]) ? var_4 : 13837997007568762341)) & (var_2 | 5225950403774225564)))))));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 |= (((arr_5 [i_3] [i_3 - 2] [i_5 + 2]) <= (((((~(arr_7 [i_4])))) ? (min(var_5, 13837997007568762341)) : 1))));
                    var_21 = (min(var_21, (((((min(39963, var_13))) ? (arr_7 [i_3 - 2]) : ((-(arr_14 [i_5 - 1] [i_3 - 2] [i_3 + 1]))))))));
                    var_22 = ((((arr_0 [i_3] [i_5]) - (arr_6 [i_3] [i_3] [i_3] [i_3]))));
                    var_23 = ((!(arr_3 [i_3 + 1] [i_5])));
                    var_24 ^= min((~1731755721), ((var_4 ? (min(1, 2071958715)) : -45)));
                }
            }
        }
        var_25 = -1;
    }
    var_26 = ((~(-25 ^ 0)));
    var_27 = (min((max(-var_10, var_4)), (~12)));
    var_28 *= (((((4185855372653869099 ^ (!var_8)))) ? var_2 : (min((min(-17, var_12)), var_2))));
    #pragma endscop
}
