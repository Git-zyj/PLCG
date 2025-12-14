/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((1108482790 ? 528482304 : -528482307)) * (-528482304 * var_10)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 |= ((((min(((max(2047, var_5))), var_14))) / (min((((arr_1 [i_0] [i_0]) & -6278517529417368732)), var_1))));
                arr_6 [6] [6] [11] = ((!(((~(arr_3 [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
