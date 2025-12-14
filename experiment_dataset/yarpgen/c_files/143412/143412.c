/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [12] [i_0 - 2] = (18 > 13);
                var_21 -= (!18446744073709551605);
            }
        }
    }
    #pragma endscop
}
