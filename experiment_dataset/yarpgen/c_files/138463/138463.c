/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((!42816) >= 26397));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = 65019;
                                arr_16 [i_0 - 1] [i_0] [i_0] [i_4] = (max(((((arr_12 [i_3] [i_0 + 2] [i_1] [i_0 + 2]) ^ 4093090763))), ((((2681 - 4294967295) || -var_1)))));
                                arr_17 [i_0] = min((((62861 << (56927 - 56915)))), var_6);
                                var_14 -= (((!2670) * (((((max(-3470991179171237256, -7149519809464127653)) + 9223372036854775807)) >> (var_10 - 3463591055)))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_15 *= 28672;
        var_16 = (min(var_16, ((((arr_9 [i_5] [i_5] [i_5]) ? var_4 : (~4294967280))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_17 ^= 849298838;
        var_18 = 62861;
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_19 = (max(var_19, 24695));
        var_20 *= ((-var_5 ? (9671 != 2097151) : 4294967288));
        arr_26 [10] [10] = (min(11443, -4407015833228952821));
        arr_27 [i_7] = (max(2, (!var_4)));
    }
    var_21 &= ((((var_2 ? var_9 : (min(3470991179171237242, 2690826453))))) ? ((1452995452 ? (0 == 2681) : (max(0, 2841971843)))) : (((min((max(var_8, 29341)), (var_5 >= var_3))))));
    #pragma endscop
}
