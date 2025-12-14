/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((~(max(var_0, var_17)))), ((min((10146 && var_2), (-4229545075973110014 || var_4))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_0 [15]) + (arr_2 [i_0]))) - var_1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 -= ((max(24, (max(4294967295, (arr_6 [i_1] [i_1]))))));
                    var_22 |= ((((((8122 < var_14) ? var_1 : (!var_14)))) & (min((((34716 << (-8123 + 8128)))), (max(4229545075973110014, var_2))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_23 ^= 510939344;
                    var_24 -= (min((arr_3 [i_3 + 2] [i_3 + 1]), -13243));
                }
            }
        }
    }
    var_25 = ((((((var_2 == ((var_3 ? 8122 : var_11)))))) == (max((max(var_18, -13243)), (var_16 % var_8)))));
    var_26 = (max(var_26, (((var_15 ? var_2 : (var_19 > -var_11))))));
    #pragma endscop
}
