/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 |= (min((((!110026732945193096) >= var_1)), var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 += -9223372036854775799;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 += 2796919878503206418;
                    var_19 |= ((-(((arr_7 [20] [i_1 - 3]) ? (arr_7 [18] [i_2]) : (arr_7 [16] [i_1])))));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
