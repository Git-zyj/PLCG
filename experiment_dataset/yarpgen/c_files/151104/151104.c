/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((((max((arr_8 [i_0 - 1] [i_1] [i_1 + 1] [4]), (arr_6 [i_1 + 2] [i_1] [i_1 + 2])))) != (arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1])));
                    var_16 -= var_14;
                    arr_9 [6] [i_1] [i_1] [i_2] = max(((6105 ^ ((1 ? 3615940943 : -851706301)))), -1070);
                }
            }
        }
    }
    var_17 = ((((max(var_5, var_6)))) ? var_4 : ((var_14 ? -var_1 : var_12)));
    var_18 = (min(((47 ? ((-84 ? var_11 : var_5)) : var_3)), (((((var_12 ? var_9 : -47))) ? (max(679026353, 140)) : 126))));
    var_19 = var_4;
    #pragma endscop
}
