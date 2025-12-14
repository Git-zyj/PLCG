/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    var_11 = (min(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((0 ? (-2147483647 - 1) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))))));
                var_13 = ((-(min(1846349835, -3967577939614652782))));
                var_14 &= (((arr_4 [i_0 - 2] [i_1 - 1]) != (arr_4 [i_0 - 3] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
