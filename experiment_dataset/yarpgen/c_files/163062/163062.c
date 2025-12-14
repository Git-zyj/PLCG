/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 17665507470179885755;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (arr_5 [i_1] [i_0]);
                            var_15 = max((!96), 46073);
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_16 = (-2147483647 - 1);
                    var_17 = (min(var_17, ((((17665507470179885755 + var_3) ? (((var_1 - var_4) + 96)) : (((9007199254740480 ^ (arr_6 [i_0] [i_0] [i_4 + 1])))))))));
                    var_18 = (-8265151914530598311 + -49);
                    var_19 = (max(var_19, (~-115)));
                }
                arr_11 [i_0] [i_0] [i_1] = (43428 & 18);
            }
        }
    }
    var_20 = (((-9223372036854775807 - 1) ? -110 : var_9));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_21 = ((!(-32767 - 1)));
                var_22 = -91;
                var_23 = (var_3 ^ -2147483632);
                var_24 = (max((max((var_8 != var_7), 18446744073709551615)), ((((((arr_1 [i_5] [i_6]) ? (arr_6 [i_5] [i_5] [i_5]) : var_0)) * var_4)))));
                var_25 |= -87;
            }
        }
    }
    #pragma endscop
}
