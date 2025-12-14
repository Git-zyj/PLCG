/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0 + 1] [i_0 - 1]);

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_12 -= var_0;
                    var_13 = (min((arr_3 [i_0 + 1] [i_0 - 1]), ((20838 ? 13 : (-9223372036854775807 - 1)))));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_14 = 9223372036854775807;

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_15 = (((((((arr_9 [i_3] [i_3]) || 34165))) & (((arr_0 [i_0] [15]) * var_5)))));
                        var_16 = (((!var_10) % (max(var_6, (arr_6 [i_1])))));
                        var_17 = ((((((arr_10 [i_4] [i_3] [i_1]) ? (arr_8 [i_3] [i_3 + 1] [i_3]) : 0))) & var_3));
                    }
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_18 = (+((((arr_3 [14] [i_5 + 2]) ? (arr_2 [i_0] [i_0] [i_5]) : var_7))));
                    var_19 = (arr_7 [i_5] [i_5]);
                }
            }
        }
    }
    var_20 = ((34165 ? 31357 : 31355));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                var_21 |= (~32640);
                var_22 -= ((!((((-9223372036854775807 - 1) + 9223372036854775807)))));
                var_23 = ((var_6 ? 1680363720 : var_10));
            }
        }
    }
    var_24 = (!var_2);
    #pragma endscop
}
