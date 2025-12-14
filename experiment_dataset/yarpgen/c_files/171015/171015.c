/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? ((var_12 ? var_2 : ((228 >> (var_9 - 1759165032))))) : var_4));
    var_14 = var_6;
    var_15 = ((-(min(var_6, (~530747783)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((arr_4 [i_0] [1] [i_1]) == (((arr_5 [i_1 - 1] [i_1 - 2]) ? -530747784 : (arr_5 [i_1 - 2] [i_1 - 2])))));
                arr_7 [i_0] [i_0] = (((((arr_3 [i_1 - 1] [i_1] [i_1 - 1]) ? ((max(530747784, -94))) : 3623577866)) != (arr_4 [i_0] [i_1 + 1] [i_1])));
                arr_8 [i_0] = (((-(~-124))));
            }
        }
    }
    #pragma endscop
}
