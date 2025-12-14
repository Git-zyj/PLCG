/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min((!14490465473388812767), (-2147483647 - 1)));
                                var_20 = (max(var_20, (max(((min(61112, -1675286704))), 18446744073709551613))));
                            }
                        }
                    }
                    var_21 = (min(var_21, -31));
                    var_22 -= (min(3956278600320738857, 20212));
                }
            }
        }
    }
    var_23 += 17170936183231729589;

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_24 = (max(((min(1675286707, 1))), -11730974714595675122));
        var_25 |= (~10280053979729340046);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_26 ^= -18259;
        arr_22 [i_6] [i_6] = (+-11406038715970000658);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_27 = (min(var_27, 240));
                    var_28 ^= ((~(min(975311410, 3956278600320738848))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_29 = (min(var_29, 1884235577005212156));
                                var_30 = (min(var_30, ((max(1726389774, (max(-4436080658230077602, 1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_39 [i_6] [i_6] [i_8] [i_8] [i_7] [i_8] [i_12] = (max((max(524287, -32761)), 10924226453658772614));
                                var_31 = (max(var_31, ((max((max(65528, 64)), (!4436080658230077578))))));
                                var_32 ^= 0;
                                arr_40 [i_11] [i_7] [i_6] = 280619276;
                            }
                        }
                    }
                }
            }
        }
        var_33 = (max(var_33, ((max(-163, 0)))));
    }
    var_34 *= 135;
    var_35 -= (!var_0);
    #pragma endscop
}
