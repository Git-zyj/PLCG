/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_0));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [0] [i_0 + 2] = 106;
        var_14 = (min(var_14, -77));
        arr_4 [i_0] = ((((min(var_7, -23631))) ? -72 : 102));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 = 79;
                        arr_15 [i_1] [i_1] [17] = (((var_8 + 2147483647) >> ((((var_5 >> (2229 - 2198))) - 8012305711))));
                    }
                }
            }
        }
        var_16 = (max(var_16, 1724180095458640306));
        var_17 &= ((2231 ? (1 && 120) : var_5));
        arr_16 [i_1] = ((~(arr_8 [i_1])));
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_18 *= min(((((90 ^ 88) * -97))), ((~(arr_19 [i_5 + 2] [i_6 - 1] [i_7 + 4]))));
                    var_19 |= (1 | 1);
                    var_20 = (max(var_20, ((max(255, -84)))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_21 = (max((var_5 && -7441850646754978208), (min(var_10, -84))));
                                var_22 -= 18446744073709551611;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
