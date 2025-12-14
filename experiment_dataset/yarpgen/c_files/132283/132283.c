/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((18 ? 234 : 4))) && (1 ^ 5777042449127607756))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((-((0 ? -5777042449127607750 : 21))))) ? 2819342433 : 2884049731403928990));
                arr_7 [i_0] [i_1] = 23;
            }
        }
    }
    var_14 = (-(((((14090825900025032466 ? var_12 : var_12))) ? -678865983 : -932702246)));
    #pragma endscop
}
