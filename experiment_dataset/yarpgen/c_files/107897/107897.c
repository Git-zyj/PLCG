/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = (max(var_13, ((((max(((min(-22251, 26131))), 4294967295)) * (17046 * var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (~(~8194));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 = var_8;
                    var_15 += (!var_0);
                }
                var_16 = var_1;
            }
        }
    }
    var_17 = (((((((var_6 ? var_5 : var_4))))) / ((var_1 ? (var_5 - var_1) : var_10))));
    var_18 &= 7;
    #pragma endscop
}
