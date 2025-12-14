/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_12 *= 23566727;
                    var_13 = -64;
                    var_14 = 70;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = 4627;
                        var_16 |= -954003729;
                        var_17 = -121102339;
                        arr_10 [i_0] [0] [i_2] [i_3] = 329601106;
                    }
                }
                var_18 += -954003707;
                arr_11 [i_0] = 0;
                arr_12 [i_1] [i_1] = 252;
            }
        }
    }
    var_19 ^= var_1;
    var_20 = var_0;
    var_21 = var_11;
    #pragma endscop
}
