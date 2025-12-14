/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_8 < ((7809292748606532540 ? -11960 : (-9223372036854775807 - 1))))) ? var_16 : (min(((var_6 ? var_8 : 26179)), ((var_13 >> (17363 - 17343)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((min((arr_3 [i_0]), (arr_3 [i_0])))) ? (min(1562826622, 3325886699)) : (arr_2 [24])));
                var_18 &= 213;
                var_19 = var_16;
            }
        }
    }
    var_20 = (((!var_16) % 2725819400));
    #pragma endscop
}
