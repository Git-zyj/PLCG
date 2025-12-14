/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 -= ((((min((arr_1 [i_0] [i_0]), 1470950212)) - -94)));
        arr_2 [23] [i_0] = (~42);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (min((max(((90 - (arr_1 [i_0 - 2] [i_1 + 1]))), (~95))), ((max(119, -91)))));
                    var_16 += var_8;
                }
            }
        }

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_11 [i_0 + 1] [6] = (max((94 ^ -76), -var_11));
            arr_12 [i_0 - 1] [i_0 + 1] = -93;
        }
        arr_13 [i_0] = (((109 << (-90 + 98))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_27 [i_4 + 2] [i_4] [i_5 - 1] [19] [i_4] = -var_4;
                        var_17 -= ((~(var_13 > var_2)));
                        var_18 = 94;
                    }
                }
            }
        }
        var_19 = ((-(22325 / 97)));
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            {
                var_20 = (((~(((var_13 <= (arr_17 [i_9])))))));
                arr_33 [i_9 - 3] = ((~(max(var_9, (arr_17 [i_8 - 2])))));
                arr_34 [i_8] [i_8] = ((-96 <= ((min((arr_10 [i_9 - 3]), (arr_15 [i_8]))))));
            }
        }
    }
    var_21 = ((((var_9 == var_1) << (((var_10 + var_11) + 1388040112718233614)))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_46 [22] [i_13] [i_13] [i_10] = ((~(!43210)));
                            var_22 ^= ((min(-13751, var_6)));
                        }
                    }
                }
                arr_47 [i_10] [i_10] [i_11] = (~43210);
            }
        }
    }
    #pragma endscop
}
