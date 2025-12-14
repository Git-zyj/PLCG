/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 -= ((max((arr_3 [i_1] [i_1] [i_1]), (max(16742073955475965490, 3992388550)))));
                arr_4 [i_0 - 1] [i_0] [i_0 - 1] = ((!((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
                var_17 *= (min((arr_1 [i_0] [i_0]), ((-(arr_2 [i_0 - 1])))));
                var_18 = (arr_1 [i_0 - 1] [i_0 - 1]);
                var_19 = (min(var_19, (arr_2 [14])));
            }
        }
    }
    var_20 = (min(((((min(var_10, var_3))) ? var_0 : (var_14 % var_8))), (((((var_12 ? var_7 : var_6)) <= -var_3)))));
    #pragma endscop
}
