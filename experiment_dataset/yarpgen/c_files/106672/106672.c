/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_1 - 1] [i_0] = (min((977670486 & -7272698536710066825), 3317296809));
                        var_17 *= var_6;
                    }
                    arr_11 [i_0] [i_2] = (var_10 - var_8);
                    var_18 = (max(var_18, 977670487));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = (min(var_19, -9));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_20 -= -var_15;
                                var_21 = (min((arr_18 [i_5] [i_0] [i_0 - 1]), var_1));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 &= ((((min(3317296807, (!-7272698536710066825)))) ? var_0 : 21925));
                                var_23 = var_2;
                                arr_30 [i_8] [i_8] [i_0] [i_8] = (min((~var_6), (((arr_7 [i_9] [i_1 - 1] [i_0 + 1] [i_1 - 1]) ? var_0 : (arr_7 [i_0] [i_9] [i_0 + 1] [i_1 + 1])))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_24 = (max(var_24, (!var_1)));
                        arr_33 [i_0] [i_1] [7] [i_1] = (3317296807 ^ var_5);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (!var_10);
                        var_25 = var_4;
                    }
                    var_26 = (min(var_26, (((((min(var_11, var_11))) ? ((((!(~-32753))))) : (((var_10 ? 3171498430 : (arr_17 [i_0 - 1] [i_7] [i_7] [i_0] [i_1] [i_7])))))))));
                }
                var_27 = arr_21 [i_0] [i_0] [i_1] [i_0 + 1] [i_1 - 1];
            }
        }
    }
    #pragma endscop
}
