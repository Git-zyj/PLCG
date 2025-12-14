/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((min(var_4, var_4))) ? var_7 : (-532659803 == var_1))) + 2147483647)) << ((((1667952144 ? 5757 : -67)) - 5757))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (max((arr_6 [i_0]), ((min(var_3, (arr_6 [i_0]))))));
                    var_12 = (arr_4 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
