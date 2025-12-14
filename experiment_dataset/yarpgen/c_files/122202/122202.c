/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (0 * 1);
    var_20 = ((!((max(0, 25504)))));
    var_21 = (((var_10 ^ var_13) * ((min(3670, (min(1, 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_22 = var_0;
                    var_23 = (min(var_23, (((((max(((max(63026, (arr_7 [i_0] [i_1] [i_0] [i_2])))), (~1)))) ? var_16 : var_14)))));
                    var_24 -= 44;
                }
            }
        }
    }
    #pragma endscop
}
