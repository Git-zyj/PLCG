/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-280222543, 280222544));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((var_2 ? ((-(!var_2))) : 280222526));
                    var_12 = (((~var_5) ^ ((~(arr_7 [i_1 - 1] [i_1] [i_2] [i_1])))));
                    var_13 = (max(var_13, ((((((var_1 / 1487134909) << (var_5 - 30077))) - ((((32512 > 13909926138944999161) && var_6))))))));
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
