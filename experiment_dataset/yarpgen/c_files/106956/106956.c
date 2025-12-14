/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((min(var_9, 2669))) > var_12))) >= ((2685 << (var_8 / -2669)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_20 = ((3167832490 >> (2640 - 2629)));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((-2669 / 2669) & 13);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((21 >> (((arr_0 [i_4]) - 781224206))));
                            var_21 = (arr_4 [i_2] [i_3]);
                            var_22 = 2667;
                            var_23 = 1;
                            arr_15 [i_0] [i_0] [i_0] [i_1] = (((1 & 1) << (63 - 46)));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_24 = (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_1]);
                            var_25 = 4294967294;
                            var_26 = (((arr_6 [i_1] [i_1]) >= (arr_3 [i_5] [i_1] [i_2])));
                            var_27 = (arr_0 [i_2]);
                            var_28 = (((arr_13 [i_0 - 1] [i_5] [i_0 - 1] [i_0 - 1] [i_5]) / ((9891703720924113758 - (arr_2 [i_1] [i_1])))));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_29 = ((((84 & (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_1]))) << (-8457710134639781360 >= 7586)));
                            var_30 = (5 + 65530);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_31 = 65535;
                            var_32 = 239;
                            var_33 = (((((arr_16 [i_0] [i_0] [i_0] [i_3] [i_0]) + 2147483647)) << (((((arr_12 [i_7] [i_1] [i_3] [i_2] [i_1] [i_0]) + 24842)) - 10))));
                        }
                        var_34 = arr_6 [i_0] [i_1];
                    }
                    var_35 = (((1 / 7093024499756769925) * ((((arr_12 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 - 2]) / 1)))));
                }
            }
        }
    }
    #pragma endscop
}
