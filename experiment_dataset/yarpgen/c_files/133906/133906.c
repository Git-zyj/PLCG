/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 &= var_5;
    var_14 = (min(var_6, (max(var_2, ((1303726854 ? var_1 : var_0))))));
    var_15 = (max((min(3281787076, var_10)), -21));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [8] |= var_2;
                var_16 = ((~(max(-15, 18446744073709551612))));
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] = 27;
                var_17 = (min(var_17, (arr_1 [4] [4])));
                arr_7 [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
