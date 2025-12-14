/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3] = (max(((-0 == (0 == 177))), (!536870656)));
                        arr_15 [i_0] [i_1] [i_2] [18] = (arr_13 [10] [8] [10] [8]);
                        var_11 = ((-((~(~-24626)))));
                        var_12 ^= (~12293527677149826646);
                        var_13 = (arr_0 [i_0]);
                    }
                }
            }
        }
        arr_16 [8] [i_0] = (arr_3 [15]);
        var_14 *= arr_12 [0];
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_19 [i_4] = (arr_17 [i_4]);
        var_15 = (((min((arr_3 [i_4]), 2855812732724084638)) % (((~(!0))))));
        var_16 = -102;
    }
    var_17 = -2855812732724084638;
    var_18 ^= var_5;
    #pragma endscop
}
