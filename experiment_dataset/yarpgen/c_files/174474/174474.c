/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_13));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((((min((((arr_1 [i_0]) ? -1 : 81)), 3))) ? 67 : (((((35255 < (arr_0 [i_0] [i_0])))) & (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = ((!(1 | 65535)));

                        for (int i_4 = 4; i_4 < 7;i_4 += 1) /* same iter space */
                        {
                            var_19 = (arr_8 [i_0] [i_0] [i_2] [3]);
                            arr_13 [i_0] [i_1 - 1] [0] [7] [i_3] [i_0] = ((((arr_1 [i_0]) ? 1 : (arr_1 [i_0]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((127 <= (4510216159722633119 && 81))) ? (arr_3 [i_0] [i_1] [2]) : (((48308 << (4064 - 4064))))));
                        }
                        for (int i_5 = 4; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            var_20 *= ((((((max((arr_8 [i_1] [4] [4] [i_1]), var_7)) * var_12))) ? (arr_4 [i_0] [i_3] [6]) : 1));
                            var_21 |= (((((384 ? 1073479680 : -1)))));
                        }
                        var_22 *= ((~((var_15 ? var_1 : 255))));
                    }
                }
            }
        }
        arr_17 [i_0] = ((((36887 != (arr_6 [i_0] [7])))));
        var_23 = (arr_16 [i_0] [i_0] [4]);
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        var_24 = (min((((((36887 ? 36895 : 8578))) ? (arr_18 [i_6] [i_6]) : 65535)), (arr_19 [i_6] [i_6 + 1])));

        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_25 = (min((((arr_20 [i_7 + 1]) * 9490824040436782503)), (((~(arr_20 [i_7 + 2]))))));
            var_26 = (((127 ? -3945878221757050593 : 1)));
            arr_23 [i_7] = (min((min((-1 * 6321572368628978245), (13816 / var_8))), (((((max((arr_21 [3] [20]), (arr_19 [i_6 + 3] [i_7 + 1])))) != (arr_20 [i_6]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 -= ((var_5 ? 3701007253789542648 : (arr_20 [i_6 - 2])));
            arr_26 [i_6] = (((((arr_20 [i_6]) ? -1 : -2)) <= ((((arr_18 [i_6] [i_8]) != 28381)))));
            arr_27 [i_8] [i_8] = (((((161 ? 1 : 0))) ? (((var_4 ? var_2 : (arr_22 [3] [21])))) : 8955920033272769113));
        }
    }
    #pragma endscop
}
