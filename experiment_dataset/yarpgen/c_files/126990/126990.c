/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 7759684732806037302;
    var_21 = ((~(min((min(18446744073709551615, (-9223372036854775807 - 1))), 83))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_22 = ((~(max((~-8686556523816602886), -9223372036854775798))));
                        var_23 ^= 4294967295;
                        var_24 = (min((--4294967295), 6037));
                    }
                }
            }
        }
        var_25 = -9223372036854775797;
        var_26 |= (!46608);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = 9223372036854775798;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_4] = 9223372036854775774;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_27 = (!-9223372036854775797);
                        var_28 = 2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_34 [i_4] [i_5] [i_8] [i_8] [i_8] [i_9] [i_10] = ((~(~-51641493430364289)));
                            arr_35 [i_4] [i_4] [i_4] |= 1023;
                            var_29 = 18446744073709551613;
                            arr_36 [i_4] [i_9] = 8686556523816602885;
                            arr_37 [i_4] [i_5] [i_4] [i_5] [i_10] = (!101);
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_40 [i_11] [i_11] [i_4] = -4294967295;
            arr_41 [i_4] = 8686556523816602886;
        }
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_45 [i_12] = (min(4294967292, 4294967295));
        arr_46 [i_12] [i_12] = (~11);
    }
    #pragma endscop
}
