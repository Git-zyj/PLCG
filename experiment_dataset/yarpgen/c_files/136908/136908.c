/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_12 || 116);
    var_15 = (max((((var_9 >= var_3) - (var_8 * 4040049651736542955))), ((max((max(var_3, var_0)), (var_12 && var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 += var_1;
                arr_7 [i_0] = ((((((arr_4 [i_0]) ? (arr_2 [i_1]) : (arr_0 [i_0])))) ? (max((((-21833 + 2147483647) << (((-21833 + 21847) - 14)))), -21844)) : ((-(((var_11 > (arr_4 [i_0]))))))));
            }
        }
    }
    var_17 &= ((48735 ? 21850 : 16793));
    var_18 = var_2;
    #pragma endscop
}
