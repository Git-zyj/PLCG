/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = -6950381644212590535;
                    var_17 = (arr_8 [i_0] [i_1] [8]);
                    arr_10 [15] [11] [7] [7] = ((0 * (max(((((arr_9 [i_0] [i_1] [1] [14]) > (arr_8 [i_0] [0] [9])))), (min(0, 4294967285))))));
                    var_18 = ((7 ? -72 : var_15));
                    arr_11 [8] [i_1] [0] [6] = ((((((~37) + ((max(-23126, var_10)))))) ? 6950381644212590531 : (arr_5 [7] [9])));
                }
            }
        }
    }
    var_19 = ((0 ? 18446744073709551615 : -22903));
    #pragma endscop
}
