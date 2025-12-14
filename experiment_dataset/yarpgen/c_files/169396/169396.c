/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? var_1 : ((+((50582088 ? (-127 - 1) : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((max(-var_11, (!var_1)))) && ((197 != (arr_3 [i_0] [i_1 + 1])))));
                var_14 = (min(var_14, (((~(max(7974, var_3)))))));
                var_15 = ((~(((var_10 & var_7) ? ((var_9 | (arr_4 [i_0] [i_0] [i_0]))) : ((197 ? 60 : 71))))));
                var_16 = (min(var_16, (((~(((max(60, var_10)) / 5467969099535802644)))))));
                arr_7 [i_1] [i_1] = ((-(((!((min(179, 6435713222735193869))))))));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
