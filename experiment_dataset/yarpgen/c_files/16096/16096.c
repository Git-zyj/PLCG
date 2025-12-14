/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min((!var_8), ((-(-665975223 % var_5))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((~-665975223) <= 3656686964657952997));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2] = (19322 != 49);
                            var_13 += (!var_3);
                            var_14 = (!14790057109051598612);
                        }
                        var_15 *= (!18446744073709551588);
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_18 [i_0] [i_5] = (~var_0);
            var_16 = (min(var_16, var_5));
            var_17 = (((!var_4) > var_7));
        }
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_18 = (!-224);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_19 = (min(var_19, ((-(~var_1)))));
                            var_20 = var_4;
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            arr_33 [i_6] [1] [i_6] = ((-((46214 ? var_2 : 209))));
                            var_21 = (min(var_21, (((!(!50))))));
                        }
                        var_22 = var_0;
                        arr_34 [i_6] [i_7] = 1907;
                    }
                }
            }
        }
        var_23 = ((((min(var_4, (~var_5)))) <= (min(var_6, var_3))));
    }
    #pragma endscop
}
