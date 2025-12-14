/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((((((arr_2 [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0 + 1] [i_0 - 1])))) ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2]) * ((var_1 ? var_2 : var_17)))) : (arr_0 [i_1])));
                arr_5 [i_0] [i_1] = ((!((min(-10576, (arr_2 [i_0 - 1] [i_1]))))));
                arr_6 [i_0] = -18446744073709551603;
            }
        }
    }
    var_20 |= (-127 - 1);
    var_21 ^= var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 = var_17;
                    var_23 = (((((((min(var_14, 1))) ? 12725 : var_12))) > (arr_9 [i_4 - 2])));
                    var_24 = (max(var_24, ((((!1) ? (((arr_12 [i_4 - 1]) ? var_4 : (arr_12 [i_4 - 1]))) : (max(var_1, (arr_12 [i_4 + 2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
