/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (!var_6)));
    var_11 ^= ((((var_3 ? 65535 : -70))));
    var_12 ^= ((-((((max(var_7, 2147483647))) ? var_8 : -74))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 *= (((var_3 ? var_0 : var_9)));
        var_14 = (min(var_14, var_6));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 -= (var_2 ? 255 : (((arr_6 [i_3] [6] [7] [7]) >> (7254472932105866534 - 7254472932105866513))));
                        var_16 += 69;
                        var_17 -= (arr_2 [i_0] [i_1] [i_1]);
                        var_18 += var_8;
                        var_19 = (max(var_19, (((arr_8 [i_3] [i_2 + 2] [i_1] [i_0]) ? 2160 : (arr_8 [15] [i_2 + 1] [i_1] [i_0])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        var_20 -= (4194303 <= -var_6);
                        var_21 = (-2147221504 | 255);
                    }
                }
            }
        }
        arr_19 [i_4] |= ((var_4 ? (((73 ? (255 == 192) : (arr_4 [i_4] [15] [i_4])))) : ((-((var_7 ? 9223372036854775807 : 70))))));
    }
    var_22 -= (((var_6 != var_7) ? ((63 ^ (31 + -1))) : ((-(!var_9)))));
    #pragma endscop
}
