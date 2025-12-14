/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(7838139013993050711, var_16)));
    var_18 = var_14;
    var_19 = (min(var_19, 3103));
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    arr_7 [13] [i_2] [1] [i_0] = (((max(3109, 18446744073709551615))));
                }
            }
        }
    }
    #pragma endscop
}
