/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (!var_6);
    var_12 = var_1;
    var_13 = var_7;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 ^= var_6;
        arr_3 [0] [i_0] = (((arr_2 [i_0 + 1] [i_0 + 2]) | ((((!(arr_2 [i_0 + 1] [i_0 - 1])))))));
        var_15 ^= ((-(!1)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_16 += var_1;
                            var_17 = (0 / 19);
                            var_18 -= (min(((-(arr_14 [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_4]))), -var_1));
                            arr_15 [i_0 + 1] [i_1] [i_0 + 2] [i_0 + 1] [i_0] = 65535;
                            var_19 -= (max((!-1), -var_7));
                        }
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_1] = 102742398;
                            arr_20 [i_0] [16] [i_2] [16] [i_1] [i_5] = (arr_8 [i_0] [i_1]);
                            var_20 = (max(var_20, (+-1)));
                        }
                        var_21 -= (~var_5);
                        arr_21 [i_2] [i_1] [i_2] [i_3] |= 36567585;
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 11;i_6 += 1)
    {
        var_22 = arr_0 [i_6];
        var_23 = (arr_16 [i_6] [i_6] [16] [i_6] [i_6]);
        arr_24 [i_6] = var_5;
    }
    #pragma endscop
}
