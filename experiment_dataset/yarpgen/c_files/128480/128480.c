/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((2900649411 ? (max(var_6, var_8)) : 16383));
    var_12 = var_5;
    var_13 = (min(var_13, (((((max((var_3 | var_4), (min(1932239309, var_9))))) ? var_7 : (((((min(var_5, 2362727981))) || (((var_9 ? 1 : var_1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (min((2362727982 ^ 5219), (((max((arr_1 [i_0 + 1] [i_0 + 1]), var_8)) << ((((max(43766, 0))) - 43752))))));
                var_15 = (max((((arr_3 [i_1 + 1] [i_0]) ? (arr_1 [i_1 + 1] [i_1]) : 2362727986)), ((max(245, -103)))));
                var_16 = ((((min((arr_1 [i_0] [i_0]), (max(var_0, (arr_1 [i_0] [i_0])))))) ? 1 : (min((min(var_6, var_3)), 252))));
                var_17 ^= (((max((max(2362727987, var_3)), (var_10 + var_8))) * (((((min(var_8, (arr_3 [i_0] [i_0])))) ? (!38) : (arr_3 [5] [5]))))));
            }
        }
    }
    #pragma endscop
}
