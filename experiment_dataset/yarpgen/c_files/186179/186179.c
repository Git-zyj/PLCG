/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(-7275978717638063120, -602468520));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (-7275978717638063128 ? ((~((min(var_2, var_2))))) : (arr_1 [i_0]));
                                var_18 ^= (((min(6795972115189558983, (max((arr_2 [i_0] [i_0] [i_0]), 0)))) >= (((((arr_8 [i_3] [i_0]) ? 18446744073709551607 : 28672))))));
                                var_19 = ((((var_0 / 31218) * 602468516)) << (var_3 + 3414933798274043932));
                            }
                        }
                    }
                    var_20 = 8;
                    var_21 = ((arr_3 [i_0] [i_0] [i_2]) <= 18446744073709551607);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    var_22 += 8;
                    var_23 = -7275978717638063131;
                }
            }
        }
        var_24 ^= (~7477753662691090498);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_25 = (min(var_25, ((((((~var_1) + 9223372036854775807)) << (31144 - 31144))))));
        var_26 = (~8);
        var_27 ^= (arr_18 [i_8]);
        var_28 += ((-((8064 ? (arr_0 [i_8]) : 0))));
    }
    #pragma endscop
}
