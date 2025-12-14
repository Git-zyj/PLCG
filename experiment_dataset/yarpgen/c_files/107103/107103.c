/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? ((2525904892 ? var_7 : 94)) : (!-18446744073709551592)));
    var_12 = (((-1 + 2147483647) >> ((((((-95 ? 18320460337590056414 : 94)) & -268432926)) - 18320460337326850473))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_1] = min((min((min(var_6, var_9)), (3378625197635737777 == -94))), (((!(arr_6 [i_0 + 2] [i_1])))));
                    var_13 = (((((arr_3 [i_0]) ? (3465679309725569866 != -95) : (arr_2 [i_0]))) > (((((((((arr_0 [i_1] [1]) + 2147483647)) >> (-1276898602 + 1276898603))) < (min((arr_6 [1] [i_2]), (arr_4 [i_0] [i_1])))))))));
                    var_14 = (max(var_14, (arr_1 [i_0 + 1])));
                    var_15 = (((!(arr_1 [13]))) ? (arr_1 [i_1]) : (1276898602 | 0));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_1] [8] [i_1] [i_1] = (max((((-9223372036854775807 - 1) ? (((9223372036854775807 % (arr_0 [i_1] [i_1])))) : 11930992652305664897)), ((min(1624611430, 242)))));
                    var_16 = (arr_6 [2] [i_3]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_1] = (max((arr_4 [i_0 + 2] [i_1]), -992794994));
                }
                var_17 = (max(var_17, (((9223372036854775807 ? (min((max(1742987270, (arr_9 [i_0] [i_0]))), (((0 ? (arr_0 [i_0] [i_1]) : (arr_5 [i_0] [i_0 + 2] [2] [4])))))) : 24964)))));
            }
        }
    }
    var_18 = (max(5606227993407512535, 1));
    var_19 = (((var_4 ? 104 : 10854)));
    #pragma endscop
}
