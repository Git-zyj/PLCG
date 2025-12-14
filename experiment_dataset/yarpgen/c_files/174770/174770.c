/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 -= ((!(((arr_0 [i_1]) || var_14))));
                var_20 = ((((arr_1 [i_0]) ? (arr_1 [i_1]) : var_1)) >> ((((arr_1 [i_0]) == (arr_1 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_18 [1] = ((10167 ? (arr_10 [6] [i_3] [i_2 + 1]) : (((-3063 ? -10168 : -10168)))));
                    var_21 = ((((0 ? (arr_17 [i_2] [9] [9] [i_2 + 1]) : 3271729623)) >> var_7));
                    var_22 -= 1023237672;
                }
            }
        }
    }
    var_23 |= var_0;
    var_24 = (var_4 > var_9);
    #pragma endscop
}
