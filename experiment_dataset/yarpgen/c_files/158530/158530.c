/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min((~var_13), var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 &= ((25327 ? 13337 : 20392));
                    var_16 = ((-(4 % var_1)));
                    arr_11 [i_0] [i_1] [i_2] = (((((-13338 ? -13338 : 53))) ? 10663931626136270828 : ((min(var_12, var_2)))));
                }
            }
        }
    }
    var_17 *= (min((min(((var_11 ? var_13 : var_0)), (~90))), ((~((52 ? 127 : var_9))))));
    #pragma endscop
}
