/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(12908, (var_13 || var_2)))), ((var_2 ? (-12918 - var_1) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += ((((((((arr_1 [i_0]) - (arr_0 [i_1])))) ? (3309680102381715887 + var_12) : (arr_1 [i_1])))) ? 12908 : ((((arr_3 [i_1] [i_1 + 1] [i_0]) > (arr_0 [i_0])))));
                var_18 += (arr_1 [i_0]);
                var_19 = var_1;
                var_20 = (((((((arr_1 [i_1]) ? var_1 : (arr_0 [i_1])))) ? -2147483647 : (max(2482848496, -104)))) <= (((2147483647 & ((-1 * (arr_3 [i_0] [i_0] [20])))))));
            }
        }
    }
    #pragma endscop
}
