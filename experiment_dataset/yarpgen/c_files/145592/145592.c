/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (max(var_17, 3375088558));
                        arr_12 [i_2] [2] [i_2] [i_2] [8] |= -372648860;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_17 [1] [i_2] [1] [1] [i_4] [i_4] [i_5] &= 5176078755405675979;
                            var_18 *= 372648861;
                            arr_18 [i_0] [i_2] [i_0] = 1;
                            var_19 = 2448486700;
                            arr_19 [i_0] = 3670693257;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_22 [6] [i_0] [i_2] [i_4] [i_6] = 9223372036854775807;
                            arr_23 [i_0] [6] [1] [i_0] [1] [i_4] [1] = 61;
                            var_20 -= 5176078755405675979;
                            arr_24 [i_0] [10] [11] [i_0] = -372648861;
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_6] = 1;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_29 [0] [6] [8] [i_0] [i_4] [i_7] [i_7] = -126;
                            var_21 += -8322901136983613117;
                            arr_30 [i_0] [i_1] [i_2] [i_4] = -922852675;
                        }

                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            arr_35 [1] [i_1] [1] [i_0] [0] = 47;
                            arr_36 [i_0] [i_0] [3] [i_0] [i_0] = 0;
                            arr_37 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = 13225799628548520802;
                            arr_38 [6] [i_1] [2] [i_0] [i_8] = 624274061;
                        }
                    }
                    var_22 = -113;
                }
            }
        }
    }
    var_23 ^= var_10;
    #pragma endscop
}
