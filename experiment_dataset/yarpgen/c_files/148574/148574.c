/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_13;
        var_20 = (min(var_20, var_10));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_8 [i_1] = (~3892492527);
            var_21 = 12761048561313806177;
            var_22 = var_8;
            arr_9 [i_1 + 3] [i_2] = 4218810802913625949;
        }
        arr_10 [i_1] = 2302982807831905012;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_23 *= 63;
                    arr_17 [i_1] [i_1] [i_3 + 1] [i_4] = var_2;

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_23 [12] [i_3] [i_4] [i_4] [i_5] = ((-4218810802913625949 ? 2270329790 : 4699677334310259980));
                            arr_24 [i_6] [i_5] [i_4] [i_3] [i_1 + 3] = 57;
                        }
                        var_24 &= var_10;
                        arr_25 [i_1] [i_3 - 1] [1] [i_5] = var_12;
                        arr_26 [i_1 - 1] [i_3] [i_4] [i_4] [i_4] [i_1 - 1] = 1363303714891886427;
                        var_25 = (max(var_25, 4261674291));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_26 = ((-6991974089526272508 ? 35729 : 4218810802913625953));
                                var_27 = ((4218810802913625942 ? 4218810802913625949 : 4218810802913625949));
                                arr_34 [i_1] [i_3] [i_8] = 2616063891;
                            }
                        }
                    }
                }
            }
        }
        arr_35 [i_1] = var_11;
    }
    #pragma endscop
}
