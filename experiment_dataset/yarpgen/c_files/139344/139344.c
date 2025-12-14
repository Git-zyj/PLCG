/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(((max(1300248237, (~81)))), (((arr_4 [i_0] [i_0]) ? 1 : (arr_6 [14] [14] [i_1 + 1] [i_0])))));
                    var_21 ^= (!473202142);
                }
            }
        }
    }
    var_22 = var_17;
    var_23 = ((!((min(3187598221673223018, -2467978976201610200)))));
    #pragma endscop
}
