/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3267288747272826404;
    var_13 = var_10;
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min(1444970768, ((var_9 | (arr_3 [i_0]))))))));
                var_16 = (min((arr_3 [i_0]), ((((min(1444970768, (arr_2 [i_1 + 1])))) ? (arr_2 [i_1 + 1]) : var_6))));
                arr_4 [i_0] [i_1 + 1] = ((~(min(2097151, ((2849996504 ? (arr_1 [i_0]) : var_8))))));
            }
        }
    }
    var_17 ^= ((var_4 ? var_6 : ((((((min(var_5, 3151881546942884141))) && (var_4 * var_10)))))));
    #pragma endscop
}
