/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [14] [14] &= 2196737481;
        var_16 *= 5794;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = 2196737481;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (max(var_18, 3041482428));
                            arr_18 [i_3] = -71170301;
                            arr_19 [i_1] [i_2] [i_3] [i_3 + 1] [0] [i_5 + 1] |= 2098229812;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_23 [i_3] [i_4] = -112;
                            arr_24 [i_1] [6] [i_3] [12] [7] [7] = 49;
                            var_19 = 2098229814;
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_20 = (min(var_20, 1));
                            var_21 = 21712;
                        }
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            arr_32 [i_3] [11] [1] [i_4] [i_8 - 2] = -71170301;
                            arr_33 [i_3] [i_3] [i_3] [5] [i_3] = 71170301;
                            var_22 = 1811420977;
                            var_23 = 468762589;
                        }
                        arr_34 [8] [i_3] [i_2] [8] |= 1941667759;
                        arr_35 [i_1] [i_1] [i_3] [i_3] [i_3] [i_4] = 4294967295;
                    }
                }
            }
        }
    }
    var_24 = var_3;
    var_25 = (min(var_25, var_12));
    var_26 ^= var_9;
    #pragma endscop
}
