/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((!(((var_13 ? var_6 : var_5)))))) / var_3));
    var_20 = var_7;
    var_21 = (!var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] |= ((-1 ? ((~(arr_2 [i_0] [2]))) : var_14));
                var_22 *= (~4294836224);
                var_23 = ((((!(arr_1 [i_1]))) ? (((((1 ? (arr_3 [i_1] [i_1] [i_0]) : 262143))) / (~var_12))) : -4173400893043952086));
                var_24 = (arr_3 [i_1] [i_0] [i_0]);
                arr_6 [i_1] [i_1] [i_0] &= ((~(!4294705156)));
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
