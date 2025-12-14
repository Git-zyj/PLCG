/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((104 > var_6) ? ((var_2 ? 255 : var_13)) : ((((-9223372036854775807 - 1) <= 71))))))));
    var_20 &= (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((255 ? 255 : 5130775217300864038))))));
                arr_6 [i_0 - 1] [i_0] [i_1] = ((((arr_1 [i_1 - 2] [i_0 + 1]) * ((-(arr_4 [i_0] [i_1 - 1]))))));
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
