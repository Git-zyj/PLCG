/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((var_8 ? 14809638154139406675 : var_1)))), ((-((var_4 ? -2 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_10;
                arr_6 [11] [i_1] = ((!((((arr_4 [1] [i_1] [11]) ? (!var_7) : (arr_1 [i_0]))))));
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
