/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((3200933297264165746 ? var_14 : 4294967295))) ? (((((var_15 ? 15 : 1099509530624))) ? ((var_5 ? -9115035395198346604 : var_16)) : var_13)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(((1099509530611 ? -1099509530625 : (((250558350 ? 3932870995 : (arr_0 [i_0])))))), (arr_2 [i_0] [i_0] [14])));
                var_21 = (((!((max(-1099509530628, 4392938488553877962))))));
            }
        }
    }
    #pragma endscop
}
