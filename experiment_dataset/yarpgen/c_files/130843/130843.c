/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((((var_12 + 2147483647) << (134 - 134)))) ? var_9 : var_0))) && (var_9 > var_11)));
    var_19 = (max(var_19, (-1 * 138691673596662279)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= 124;
                arr_6 [i_0] [i_0] = ((((max((arr_0 [i_0]), (arr_2 [18])))) ? ((((arr_0 [i_1 - 1]) + (arr_5 [i_0] [i_0])))) : (min((((arr_2 [i_0]) ^ var_15)), 138691673596662279))));
            }
        }
    }
    #pragma endscop
}
