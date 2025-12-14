/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 -= max((min(((((-2147483647 - 1) <= (arr_3 [i_0] [i_0] [6])))), 2147483647)), (((((((2147483647 > (-2147483647 - 1))))) >= 9223090561878065152))));
                arr_4 [i_0] [20] = (((var_6 < var_0) == var_2));
            }
        }
    }
    var_13 = (min(((var_3 ? ((var_2 ? var_3 : var_4)) : (((var_0 ? -9713 : 1))))), var_4));
    var_14 = 17795627135528491495;
    var_15 = var_8;
    #pragma endscop
}
