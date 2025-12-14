/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 160;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 *= 1;
            var_18 &= ((min(((805306368 ? 1 : 1)), 1)));
            arr_6 [i_0 - 1] &= 3596904098;

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                var_19 += var_2;

                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = (min(var_20, 1));
                        var_21 += (~987333031);
                        arr_15 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [14] [i_0 + 2] = 40690;
                        var_22 = (max(var_22, 1));
                        arr_16 [i_0] [i_3] = ((1 | (((((40700 ? 0 : 4294967295))) ? 1 : (19 & 1)))));
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_2] [i_1] [i_2] [i_0 - 2] [i_5] = 1;
                        var_23 += var_3;
                    }
                }
                arr_20 [13] [10] [22] [i_0] = (19194 > 24859);
                var_24 *= 1333845958;
            }
            var_25 = (((((max(var_3, 29242)) << 31))) ? (((750 ? (min(2654061269, 19)) : 58217))) : (max(((var_8 ? var_13 : var_9)), (((1 ? 31 : var_2))))));
        }
        var_26 = ((max(260046848, var_12)));
    }
    var_27 = (min((~511), var_8));
    var_28 = (min(var_28, ((min(var_12, 19193)))));
    #pragma endscop
}
