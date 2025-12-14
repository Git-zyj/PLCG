/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [i_1] = ((((min(((14942638971737143686 ? -1547067860 : (arr_3 [i_0] [i_1]))), (arr_0 [i_1 - 2] [i_1])))) ? (min(var_18, (((arr_1 [i_0]) ? (arr_1 [i_1 + 1]) : var_16)))) : ((((min(var_13, (arr_0 [i_0] [i_0])))) ? 1 : ((max(1, 15)))))));
                arr_6 [i_0] [4] [i_1 - 1] = ((var_5 != (min(1469223185, (arr_0 [i_0] [i_0])))));
            }
        }
    }
    var_21 = min(var_19, var_3);
    #pragma endscop
}
