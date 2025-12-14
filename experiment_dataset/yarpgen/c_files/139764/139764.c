/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((min(var_16, 127)))));
    var_18 = (((1401760854 % 1401760854) ? 14 : (((1929532348 ? 95 : 3573827954)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = (((((((((var_16 && (arr_2 [i_2]))))) != (((arr_2 [i_0]) ? 222 : var_8))))) * (arr_7 [i_1 - 1] [i_1] [i_0 - 1] [i_1])));
                    var_19 = (arr_3 [i_0] [i_1 - 3]);
                    var_20 *= var_16;
                    var_21 = (min(1929532348, 11803983060564169701));
                    arr_11 [i_0 - 2] [i_1] [i_2] [i_2] = (~3541415742);
                }
            }
        }
    }
    var_22 = var_1;
    var_23 = (max(var_23, var_11));
    #pragma endscop
}
