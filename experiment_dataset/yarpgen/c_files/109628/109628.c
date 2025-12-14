/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = ((var_17 && ((min((24576 == var_4), var_7)))));
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = ((max(2147483635, (max(var_13, (arr_1 [i_1] [i_1]))))));
                    var_23 = var_16;
                    var_24 = 0;
                }
            }
        }
    }
    var_25 |= (max((min(var_8, 16777215)), var_18));
    #pragma endscop
}
