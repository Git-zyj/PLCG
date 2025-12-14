/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 ? var_3 : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((((((arr_2 [i_0] [i_0] [i_1]) ? 1792 : (arr_0 [i_0]))) >> 31))) ? var_0 : ((min(((var_3 ? 3048166377 : var_6)), -2147483641)))));
                var_12 = (max(var_12, (((arr_2 [17] [i_1] [1]) && (((9238114569180754282 >> (8290915927089052735 - 8290915927089052714))))))));
            }
        }
    }
    var_13 = (((var_2 ? (((140 ? 1781 : -62))) : ((1 ? 255 : var_0)))));
    #pragma endscop
}
