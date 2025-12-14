/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, var_3));
                    arr_7 [i_0] [i_1] [i_0] = (~(-1764665477 > 3168592217));
                    arr_8 [i_0] [i_1] [i_2 - 1] = (~-1108003049);
                    var_18 = 3168592217;
                }
            }
        }
    }
    var_19 = var_12;
    var_20 = (min(var_20, var_15));
    var_21 &= 3168592234;
    #pragma endscop
}
