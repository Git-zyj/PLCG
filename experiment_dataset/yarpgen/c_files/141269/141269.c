/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((0 ^ (min(var_8, var_5)))), (((var_0 > (var_2 > var_1))))));
    var_11 *= var_3;
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 &= (arr_5 [i_0 - 2] [i_0 + 1]);
                var_14 = (((arr_1 [i_0 + 2] [i_1]) ? (max((((arr_6 [i_0 - 2] [i_0 - 2]) ? (arr_2 [i_1]) : (arr_1 [i_0] [i_0]))), (arr_0 [i_1 + 3]))) : ((((arr_6 [i_0] [i_1]) ? (!255) : (!var_5))))));
                arr_7 [i_0] [i_0] [7] = 62703;
                arr_8 [i_0] [i_1 - 1] = (arr_0 [i_0 + 1]);
                var_15 = (~var_7);
            }
        }
    }
    #pragma endscop
}
