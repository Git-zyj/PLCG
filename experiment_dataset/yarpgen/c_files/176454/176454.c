/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = min((min((arr_0 [i_2] [i_2 - 1]), ((var_8 ? 7205371142059292556 : var_8)))), (max(5656346505485176704, ((min(-1, 1594702856))))));
                    var_10 = (min((((((min(0, (arr_7 [9] [i_2] [i_2 + 1] [i_2])))) != (min(var_9, 5656346505485176704))))), (min(-5656346505485176705, -5656346505485176705))));
                    arr_9 [i_0] = ((4200651712 << (3100524825 - 3100524811)));
                }
            }
        }
    }
    var_11 = 5656346505485176711;
    var_12 = var_6;
    var_13 = 65535;
    #pragma endscop
}
