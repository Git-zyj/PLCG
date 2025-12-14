/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((arr_2 [i_0 + 1] [i_0 + 2]) / (arr_0 [i_0 + 2] [i_0 + 1]))));
                var_12 -= ((-((-(arr_3 [i_0 + 2] [i_1])))));
                var_13 = (((((var_7 ? var_5 : var_2))) ? -9 : ((var_11 * ((var_0 ? 7608 : (arr_1 [i_0])))))));
                var_14 = var_5;
            }
        }
    }
    var_15 = var_8;
    var_16 ^= ((-2890121636843318775 ? -9 : 127));
    #pragma endscop
}
