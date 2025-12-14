/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min(((var_10 ? (252 || 31) : var_3)), 1));
    var_13 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (-(((((arr_3 [1] [i_1] [i_0]) ? (arr_1 [i_1] [i_0]) : (arr_1 [9] [9]))) / var_1)));
                var_15 = (min(var_15, (((31268 > (((arr_2 [i_0 + 2] [i_0 + 2]) ? (arr_2 [i_1] [i_1]) : (min(279501734, -1598378016)))))))));
                arr_4 [i_1] = (((arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 1]) ? ((min((arr_1 [i_0 + 4] [3]), -28884))) : ((((min((arr_0 [i_1]), (arr_2 [6] [1])))) ? (((arr_1 [10] [i_1]) + (arr_1 [i_0 - 1] [i_0]))) : (((arr_3 [10] [10] [10]) + 1))))));
                var_16 |= (((1 ? -1913914157 : -32761)) & -340873274);
            }
        }
    }
    #pragma endscop
}
