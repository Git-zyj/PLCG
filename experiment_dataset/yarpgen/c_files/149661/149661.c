/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((((var_3 ? ((var_1 ? -104 : var_10)) : ((min(17423, var_7))))) == ((((47 - 23912) <= ((min(var_7, var_4))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (((min((arr_1 [6] [i_0]), var_5)) & ((((var_11 != var_6) < ((min((arr_0 [i_0]), 41623))))))));
        arr_3 [i_0] [17] = 2755257655;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 ^= (arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1]);
                    var_18 = (min(var_2, (arr_8 [i_0] [i_1] [i_1] [i_0 - 1])));
                }
            }
        }
        arr_10 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_19 = ((-(arr_11 [i_3 + 2] [i_3])));
        arr_14 [i_3] = (4294967295 <= 2410851164);

        for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_20 = ((33082 ? (arr_2 [i_3]) : ((var_13 ? (arr_15 [i_3 + 1] [i_3]) : var_6))));
            arr_18 [i_3] = -101;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_6] [i_7] = (32756 <= 2988885200);
                            var_21 -= (arr_2 [10]);
                            var_22 = (max(var_22, (((3790 & (64639 && -773))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_23 = ((var_2 == (arr_2 [i_3])));
            var_24 = (~11631);
            arr_29 [i_3] = ((65535 ? (arr_9 [i_3]) : (arr_9 [i_3])));
            var_25 = var_10;
            arr_30 [i_3] = ((-14 ? 3789 : 1306082114));
        }
        arr_31 [i_3] = (~-19481);
    }
    var_26 = (-122 || var_2);
    #pragma endscop
}
