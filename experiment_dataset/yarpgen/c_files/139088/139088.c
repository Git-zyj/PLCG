/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (2390501356 & -3251);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = 2;
                var_13 = ((+(((arr_3 [i_0] [i_0 + 1]) ? (arr_3 [i_0] [i_0 - 2]) : (arr_3 [i_0] [i_0 - 3])))));
                arr_4 [i_0] [i_0] = (2751870633 ? ((((!(arr_3 [i_0] [i_0 - 3]))))) : ((var_2 ? (arr_0 [i_0] [i_0 - 2]) : var_3)));
            }
        }
    }
    var_14 = var_8;
    var_15 *= var_4;
    var_16 -= 1070615090;
    #pragma endscop
}
