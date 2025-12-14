/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((~(arr_0 [21]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 |= 2173596403;
                            var_21 |= (min((((((var_16 ? 2121370874 : var_4)) - (((2173596416 ? (arr_11 [16] [i_3]) : (arr_6 [i_0]))))))), var_13));
                            var_22 = ((-var_10 || (arr_1 [i_0] [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_24 &= ((((((var_18 + 2147483647) >> (var_6 - 1917365948)))) < 2121370893));
                var_25 = (((var_17 < 2173596416) >> (2121370864 - 2121370847)));
            }
        }
    }
    #pragma endscop
}
